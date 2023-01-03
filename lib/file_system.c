#include <ctype.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <strings.h>

typedef struct FileEntry {
    char filename[256];
    uint32_t startPointer;
    uint32_t reservedBlocks;
    uint32_t freeBlocks;
    uint64_t fileSize;
    char modificationDate[20];
} FileEntry;

#define KILO 1024
#define MEGA 1024 * 1024
#define GIGA 1024 * 1024 * 1024

const uint8_t commandListLength = (uint8_t)10;
const uint32_t entrySize = (uint32_t)304;
const uint32_t maxDirectorySize = (uint32_t)1024;
/*
    Wymagana przestrzeń pamięci dysku potrzebna na zapis informacji jego strukturze 
*/
const uint8_t minMemorySize = (uint8_t)(16 * MEGA);
uint8_t type;
uint8_t argn;
uint8_t depth = 0;
uint64_t fileSize;
uint64_t diskSize;
char infoDisk[KILO];
char infoFiles[304 * KILO];
char* command = NULL;
char* diskname = NULL;
char* argument0 = NULL;
char* argument1 = NULL;
char* argument2 = NULL;
char* argument3 = NULL;
char* fileSystemIndentifier = "LOSFS";                          //Ligth OS File System
const char endOfDirectory = 0x00;
const char emptyEntry = 0x01;
FILE* file;
FILE* disk;

FileEntry entry;
void *entryPointer = &entry;

/*
    Funkcje pomocnicze
*/
void handleArgumentsListQuery();

/*
    Funckje pomocnicze operujące na ciągach znaków
*/
int equal(const char* word1, const char* word2);
int isAlpha(char c);
unsigned long long parseSize(char* size);

/*
    Złożone funkcje pomocnicze
*/
static int compareEntries(const void *a, const void *b);
void toString(uint32_t second, uint32_t minute, uint32_t hour, uint32_t day, uint32_t month, uint32_t year, char retString[20]);


/*
    Funckje pomocnicze do parsowania argumentów wywołania programu
*/
void handleCommand(int argc, char** argv);
void makeItGlobal(int argc, char** argv);

/*
    Funkcje pomocnicze wykorzystywane do obsługi wskaźników na otwarte pliku 
    (w kontekście pamięci, nie systemu plików), wskaźników na bufory w pamięci, itd.
*/
int closeInitializing(FILE *file1, FILE *file2, FILE *file3, char* buffer);
int closePointer(FILE* filePointer);
int freeBuffer(char* buffer);
int openGeneralFile(char* argument0, char* message, FILE *filePointer, int retval);

/*
    Funkcje pomocnicze działające bezpośrednio na systemie plików
*/
int open();
int find(char* argument0, FileEntry* fileEntry);
int close();

/*
    Właściwe funkcje reprezentujące wysokopoziomowe funkcjonalności bilioteki
*/
int create();
int delete();
int format();
int goToDirectory();
int initialize();
int list();
int read();
int version();
int write();

/*
    Funkcja do sprawdzania stanu pamięci
*/
int showMemory(char* memoryPointer, int sectionStart, int sectionEnd);
int present();

int main(int argc, char** argv) {
    /*
        Główny element programu służy do rozpoznania, interpretacji i wykonania polecenia
    */
    if(argc == 1) {
        /*
            Brak argumentów wywowałania programu.
            W odpowiedzi zwracana jest informacja o akceptowalnych poleceniach.
        */
        handleArgumentsListQuery();
        exit(0);
    }
    /*
        Rozpoznanie polecenia
    */
    handleCommand(argc, argv);
    /*
        Zamiana argumentów wywowałania na zmienne globalne.
    */
    makeItGlobal(argc, argv);
    int retval = 0;
    if(retval == 0) {
        switch(type) {
            case 1 : retval = create(); break;
            case 2 : retval = delete(); break; 
            case 3 : retval = format(); break; 
            case 4 : retval = goToDirectory(); break;
            case 5 : retval = initialize(); break; 
            case 6 : retval = list(); break; 
            case 7 : retval = present(); break;
            case 8 : retval = read(); break; 
            case 9 : retval = version(); break; 
            case 10 : retval = write(); break; 
            default : retval = 1 - printf("Command not recognized!\n");
        }
    }
    retval = open();
    if(retval == 0) retval = close();
    return retval;
}

void handleArgumentsListQuery() {
    /*
        Funckja do zwrócenia informacji o poprwanej strukturze komendy
        na wypadek wywołania programu z błędnymi argumentami.
    */
    printf("\nFile system bare metal implementation for ligth operating system\n");
    printf("Program should be used with following arguments: \n");
    printf("1) command\n");
    printf("2) diskname\n");
    printf("3, etc) list of arguments\n");
}

int equal(const char* word1, const char* word2) {
    /*
        Funkcja to porównywania stringów zwracająca 0 - różne, 1 - równe.
    */
    int retval = 1;
    if(strcmp(word1, word2)) {
        retval = 0;
    }
    return retval;
}

int isAlpha(char c) {
    /*
        Funkcja sprawdza czy znak jest literą (niezależnie od wielkości).
    */
    return 'a' <= c && c <= 'z' || 'A' <= c && c <= 'Z';
}

unsigned long long parseSize(char* size) {
    /*
        Funkcja służąca do odczytania rozmiaru tworzonego pliku
        na podstawie argumentu wywołania włączając w to przeparsowanie jednostki.
    */
    unsigned long long pRetval = 0;
    int i = 0;
    while(size[i] != '\0' && !isAlpha(size[i])) {
        /*
            Dopóki nie natrafimy na koniec ciągu znaków (argument)
            lub trafimy na znak będący literą a-z, A-Z.
        */
        if(!isalnum(size[i])) {
            /*
                Jeśli to nie cyfra stwierdzamy, że wystąpił błąd.
            */
            printf("Wrong size format. It could not be parsed.\n");
            printf("Correct format: [integer][K|M|G|T][b|B].\n");
            printf("Invalid sign in integer part of string.\n");
        }
        pRetval = pRetval * 10 + size[i] - 48;
        i++;
    }
    if(size[i] != '\0') {
        /*
            Sprawdzamy prefiks jednostki
        */
        switch(toupper(size[i])) {
            case 'K' :
                pRetval *= KILO;
                break;
            case 'M' :
                pRetval *= MEGA;
                break;
            case 'G' :
                pRetval *= GIGA;
                break;
            case 'B' :
                pRetval *= 8;
                break;
            case 'b' :
                break;
            default :
                printf("Wrong size format. It could not be parsed.\n");
                printf("Correct format: [integer][K|M|G|T][b|B].\n");
                printf("First letter after integer is incorrect.\n");
                pRetval = -1;
        }
        i++;
        if(size[i] != '\0' && size[i] != 'b' && size[i] != 'B') {
            /*
                Jeśli na kolejnej pozycji nie ma skrótu jednostki 
                b - bajt, B - Bajt lub końca argumentu.
            */
            printf("Wrong size format. It could not be parsed.\n");
            printf("Correct format: [integer][K|M|G|T][b|B].\n");
            printf("Wrong unit (should be b - bit, B - byte).\n");
            pRetval = -1;
        }
        if(size[i] == 'B') {
            /*
                Jeśli jednostką główną jest bajt - B.
            */
            pRetval *= 8;
        }
    }
    return pRetval;
}

static int compareEntries(const void *left, const void *right) {
    /*
        Funkcja służąca do porównywania wejść z informacji o plikach.
        Wykorzystywana jest do sortowania entries w momencie aktualizacji
        informacji o plikach znajdujących się na dysku.
    */
    FileEntry *pLeft = (FileEntry*)left;
	FileEntry *pRight = (FileEntry*)right;
    static int pRetval = 1;
    if(pRight->filename[0] == emptyEntry) pRetval = -1;
    else if(!pLeft->filename[0] == emptyEntry) pRetval == pLeft->startPointer - pRight->startPointer;
	return pRetval;
}

void toString(uint32_t second, uint32_t minute, uint32_t hour, uint32_t day, uint32_t month, uint32_t year, char retString[20]) {
    /*
        Funkcja służąca do zamiany daty na ciąg znaków
    */
    int i = 19;
    retString[i--] = '\0';
    retString[i--] = second % 10 + 48; //18
    retString[i--] = second / 10 + 48;
    retString[i--] = ':'; //16
    retString[i--] = minute % 10 + 48;
    retString[i--] = minute / 10 + 48;
    retString[i--] = ':'; //13
    retString[i--] = hour % 10 + 48;
    retString[i--] = hour / 10 + 48;
    retString[i--] = ' '; //10
    retString[i--] = day % 10 + 48;
    retString[i--] = day / 10 + 48;
    retString[i--] = '-'; //7
    retString[i--] = month % 10 + 48;
    retString[i--] = month / 10 + 48;
    retString[i--] = '-'; //4
    retString[i--] = year % 10 + 48;
    retString[i--] = (year / 10) % 10 + 48;
    retString[i--] = (year / 100) % 10 + 48;
    retString[i--] = (year / 1000) % 10 + 48;
}

void handleCommand(int argc, char** argv) {
    /*
        Funckja rozpoznaje rodzaj polecenia i zamienia go zmienną typu int,
        która jest wykorzystywana w dalszej części programu.
        Jeśli polecenie nie zostało rozpoznane to typ oznaczany jest jako 0.
        Powoduje to później nie wykonanie żadnej czynności 
        i zwrócenie inforamcji o nierozpoznaniu polecenia użytkownikowi.
    */
    const char commandList[10][12] = {"create", "delete", "format", "goto", "initialize", "list", "present", "read", "version", "write"};
    type = 0;
    argn = argc;
    for(int i = 0; i < commandListLength; i++) {
        if(equal(commandList[i], argv[1])) {
            type = i + 1;
            break;
        }
    }
}

void makeItGlobal(int argc, char** argv) {
    /*
        Funkcja przepisuje argumenty wywołania programu
        na zmienne globalne (command, diskname, argument0-3)
    */
    if(argc >= 2) {
        command = argv[1];
    }
    if(argc >= 3) {
        diskname = argv[2];
    }
    if(argc >= 4) {
        argument0 = argv[3];
    }
    if(argc >= 5) {
        argument1 = argv[4];
    }
    if(argc >= 6) {
        argument2 = argv[5];
    }
    if(argc >= 7) {
        argument3 = argv[6];
    }
}

int closeInitializing(FILE *file1, FILE *file2, FILE *file3, char* buffer) {
    /*
        Funkcja odpowiedzialna za zamknięcie wszystkich otwartych plików,
        zwolnienie zaalokowanej pamięci na buffor danych.
    */
    closePointer(file1);
    closePointer(file2);
    closePointer(file3);
    closePointer(disk);
    freeBuffer(buffer);
    return -1;
}

int closePointer(FILE* filePointer) {
    /*
        Funckja do bezpiecznego zamykania pliku
    */
    if(filePointer != NULL) {
        fclose(filePointer);
        filePointer = NULL;
    }
}

int freeBuffer(char* buffer) {
    /*
        Funcja do bezpiecznego zwalniania buforu
    */
    if(buffer != NULL) {
        free(buffer);
    }
}

int openGeneralFile(char* argument, char* message, FILE *filePointer, int retval) {
    /*
        Funckja otwierająca plik do zapisania na dysku na trwałe.
        Takimi plikami mogę być pliki Boot Recorder'a, kernal'a itp.
    */
    if(retval >= 0 && argument != NULL) {
        /*
            Jeśli nie występuje żaden błąd
        */
        filePointer = fopen(argument, "rb+");
        if (filePointer == NULL ) {
            printf("Unable to open pointed %s file '%s'\n", message, argument);
            printf("Notice that %s is not required.\n", message);
            retval = -1;
        }
    }
    return retval;
}

int open() {
    /*
        Funckja odpowiadająca za otwarcie systemu plików
    */
    int retval = 0;
    if(diskname == NULL) {
        retval = 0;
    }
    else {
        disk = fopen(diskname, "rb+");
        if(disk == NULL) {
            /*
                Dysku nie udało się otworzyć
            */
            printf("Error while opening disk %s.\n", diskname);
            printf("%s\n", strerror(errno));
            retval = 1;
        }
        else {
            /*
                pobieranie rozmiaru dysku w MB
            */
            fseek(disk, 0, SEEK_END);
            diskSize = ftell(disk) / MEGA;
            /*
                zczytywanie informacji o dysku 
                (z informacjami o rodzaju systemu plików)
            */
            fseek(disk, KILO, SEEK_SET);
            fread(infoDisk, KILO, 1, disk);
            /*
                czytanie informacji o rozmieszczeniu plików w pamięci komputera
            */
            fseek(disk, 4 * KILO, SEEK_SET);
            fread(infoFiles, entrySize * KILO, 1, disk);

            rewind(disk);
            if(!equal(infoDisk, fileSystemIndentifier)) {
                if(type == 3) {
                    argument0 = "--force";
                    format();
                }
                else {
                    printf("File system format not recognized\n");
                    retval = 1;
                }
                fclose(disk);
            }
        }  
    }  
    if(retval != 0) exit(retval);
    return retval;
}

int find(char* argument0, FileEntry* fileEntry) {
    /*
        Funkcja służąca do znalezienia pozycji entry 
        z informacjami o lokolazacji pliku w pamięci
    */
    int retval = -1;
    char completeFilename[256];
    int i = 64;
    while(infoDisk[i] != 0) {
        i++;
    }
    memcpy(completeFilename, &infoDisk[64], i - 64);
    strcpy(&completeFilename[i - 64], "/");
    strcpy(&completeFilename[i - 63], argument0);
	for(int i = 0; i < KILO; i++)  {
		memcpy(entryPointer, infoFiles + (i * entrySize), entrySize);
		if(entry.filename[0] == endOfDirectory) {
            /*
                Informacja o końcu katalogu
            */
			break;
		}
		else if(entry.filename[0] != emptyEntry) {
            /*
                Wejście reprezentujące plik
            */
			if(equal(completeFilename, entry.filename)) {
				memcpy(fileEntry, entryPointer, entrySize);
				retval = i;
			}
		}
	}
	return retval;
}

int close() {
    /*
        Zamykanie dostępu do dysku
    */
    if(disk != NULL) {
		fclose(disk);
		disk = NULL;
	}
}

int create() {
    /*
        Funkcja odpowiedzialna za tworzenie nowego pliku
        argument0 - argument0
        argument1 - filesize
    */
    open();
    int retval = 1;
    FileEntry* pEntry;
    int slot;
    if(argument0 == NULL) {
        /*
            Niepoprawny trzeci argument wywołania
        */
        printf("Incorrect argument\n");
        printf("correct command: [command], [diskname], [argument0], [filesize]\n");
        printf("All arguments are obligatory.\n");
    }
    else if(argn < 5) {
        /*
            Zbyt mała liczba argumentów wywołania polecenia create.
        */
        printf("Too few arguemnts\n");
        printf("correct command: [command], [diskname], [argument0], [filesize]\n");
        printf("All arguments are obligatory.\n");
    }
    else if((fileSize = atoi(argument1)) <= 0) {
        /*
            Zadany rozmiar pliku nie jest poprawnie sformatowany.
            Nie da się go jednoznacznie zkonwertować na nieujemną liczbę całkowitą.
        */
        printf("Incorrect fileSize.\n");
        printf("It is supposed to be a positive integer number.\n");
    }
    else {
        retval = 0;
        FileEntry tmpEntry;
        fileSize = (fileSize + 1) / 2;
        if((slot = find(argument0, &tmpEntry)) < 0) {
            unsigned long long blocksRequestedNumber = fileSize / 2; //liczba bloków do zaalokowania
            unsigned long long blocksNumber = diskSize / 2; //liczba bloków na dysku
            char directoryCopy[entrySize * KILO]; //kopia katalogu
            int usedEntriesNumber = 0; // ile entries wejść kaalogu jest użytych lub usuniętych
            int firstFreeEntry = -1; // gdzie ulokować nowe entry
            unsigned long long startNew = 0;
            unsigned long long endPrevious = 1;
            /*
                kopiowanie informacji o katalogu
            */
            memcpy(directoryCopy, infoFiles, entrySize * KILO);
            for(int i = 0; i < KILO; i++) {
                pEntry = (FileEntry*)(directoryCopy + i * entrySize);
                if(pEntry->filename[0] == endOfDirectory) {
                    /*
                        Jeśli znleźliśmy koniec katalogu, uaktualniamy liczbę zajętych entries
                        jeśli nie znleźliśmy pustych wejść jeszcze, to to jest nasze pierwsze puste miejsce.
                    */
                    usedEntriesNumber = i;
                    if(firstFreeEntry == -1) {
                        firstFreeEntry = i;
                    }
                    break;
                }
                else if(pEntry->filename[0] == emptyEntry) {
                    /*
                        Puste wejście, wtedy uaktualniamy informację, o pierwszym pustym entry.
                    */
                    if(firstFreeEntry == -1) {
                        firstFreeEntry = i;
                    }
                }
            }
            if(firstFreeEntry == -1) {
                printf("Error: Overloaded directory, no free entries.");
                return -1;
            }

            qsort(directoryCopy, usedEntriesNumber, KILO, compareEntries);

            for(int i = 0; i < usedEntriesNumber + 1; i++) {
                /*
                    Przy kazdej iteracji sprawdzamy, czy nowy plik zmieści się pomiędzy 
                    końcem poprzedniego pliku i początkiem kolejnego (lub ostatnim blokiem danych)
                */

                unsigned long long startCurrent;
                pEntry = (FileEntry*)(directoryCopy + i * entrySize);

                if(i == usedEntriesNumber || pEntry->filename[0] == emptyEntry) {
                    startCurrent = blocksNumber - 1; // index of the last block
                }  
                else {
                    startCurrent = pEntry->startPointer;
                }
                    

                if(startCurrent - endPrevious >= blocksRequestedNumber) {
                    startNew = endPrevious;
                    break;
                }

                if(i < usedEntriesNumber) {
                    endPrevious = pEntry->startPointer + pEntry->reservedBlocks;
                }                    
            }
            if(startNew == 0)    {
                printf("Error: File of size %dMB could not be created!\n", maxDirectorySize);
                retval = -1;
            }
            else {
                /*
                    Dodajmey plik do katalogu
                */
                pEntry = (FileEntry*)(infoFiles + firstFreeEntry * entrySize);
                pEntry->startPointer = startNew + (entrySize + 4) * KILO;
                pEntry->reservedBlocks = blocksRequestedNumber;
                pEntry->fileSize = 0;
                char dateBuffer[20];
                char completeFilename[256];
                int month = 12;
                if(__DATE__[0] == 'J' && __DATE__[1] == 'a' && __DATE__[2] == 'n') month = 1;
                else if(__DATE__[0] == 'J' && __DATE__[1] == 'a' && __DATE__[2] == 'n') month = 1;
                else if(__DATE__[0] == 'F' && __DATE__[1] == 'e' && __DATE__[2] == 'b') month = 2;
                else if(__DATE__[0] == 'M' && __DATE__[1] == 'a' && __DATE__[2] == 'r') month = 3;
                else if(__DATE__[0] == 'A' && __DATE__[1] == 'p' && __DATE__[2] == 'r') month = 4;
                else if(__DATE__[0] == 'M' && __DATE__[1] == 'a' && __DATE__[2] == 'y') month = 5;
                else if(__DATE__[0] == 'J' && __DATE__[1] == 'u' && __DATE__[2] == 'n') month = 6;
                else if(__DATE__[0] == 'J' && __DATE__[1] == 'u' && __DATE__[2] == 'l') month = 7;
                else if(__DATE__[0] == 'A' && __DATE__[1] == 'u' && __DATE__[2] == 'g') month = 8;
                else if(__DATE__[0] == 'S' && __DATE__[1] == 'e' && __DATE__[2] == 'p') month = 9;
                else if(__DATE__[0] == 'O' && __DATE__[1] == 'c' && __DATE__[2] == 't') month = 10;
                else if(__DATE__[0] == 'N' && __DATE__[1] == 'o' && __DATE__[2] == 'v') month = 11;
                toString(10 * __TIME__[6] + __TIME__[7] - 528, 10 * __TIME__[3] + __TIME__[4] - 528, 10 * __TIME__[0] + __TIME__[1] - 528, 10 * __DATE__[4] + __DATE__[5] - 528, month, 1000 * __DATE__[7] + 100 * __DATE__[8] + 10 * __DATE__[9] + __DATE__[10] - (48000 + 4800 + 480 + 48), dateBuffer);
                int i = 64;
                while(infoDisk[i] != 0) {
                    i++;
                }
                memcpy(completeFilename, &infoDisk[64], i - 64);
                strcpy(&completeFilename[i - 64], "/");
                strcpy(&completeFilename[i - 63], argument0);
                strcpy(pEntry->modificationDate, dateBuffer);
                strcpy(pEntry->filename, completeFilename);
                slot = firstFreeEntry;
                if(firstFreeEntry == usedEntriesNumber && usedEntriesNumber + 1 < 64) {
                    /*
                        Zaznaczamy następne wejście znakiem endOfDirectory, jeśli jeszcze mamy entry w danym katalogu
                    */
                    pEntry = (FileEntry*)(infoFiles + (usedEntriesNumber + 1) * entrySize);
                    pEntry->filename[0] = endOfDirectory;
                }

                /*
                    Uaktualniamy dane na dysku
                */
                fseek(disk, 4 * KILO, SEEK_SET);
                fwrite(infoFiles, entrySize * KILO, 1, disk);
            }
        }
        else {
            printf("This file have already been created!\n");
        }        
    }
    return retval;
}

int delete() {
    /*
        Funkcja odpowiedzialna za usuwanie pliku.
    */
    open();
    FileEntry tmpEntry;
	char deleteMarker = emptyEntry;
	int slot;
	if((slot = find(argument0, &tmpEntry)) < 0) {
        printf("File %s could not be removed.\n", argument0);
		printf("Error: File has not been found.\n");
	}
	else {
		/*
            Uaktualnienie zawartości katalogu
        */
		memcpy(infoFiles + (slot * entrySize), &deleteMarker, 1);
		fseek(disk, 4 * KILO, SEEK_SET);
		fwrite(infoFiles, entrySize * KILO, 1, disk);
	}
    return 0;
}

int format() {
    /*
        Funkcja odpowiedzialna za formatowanie dysku dla naszego systemu plików
    */
    if(argument0 != NULL && equal(argument0, "--force")) {
        /*
            Informacja o rodzaju systemu plików - tu: 'LOSFS' 1KB
        */
        memset(infoDisk, 0, KILO);
        memcpy(infoDisk, fileSystemIndentifier, 5);
	    fseek(disk, KILO, SEEK_SET);
	    fwrite(infoDisk, KILO, 1, disk);

        /*
            Informacje o katalogu 4KB
        */
	    memset(infoFiles, 0, entrySize * KILO);
	    fseek(disk, 4 * KILO, SEEK_SET);
	    fwrite(infoFiles, entrySize * KILO, 1, disk);
    }
    else {
        printf("Unnecessary format. Operation skipped.\n");
    }
    return 0;
}

int goToDirectory() {
    /*
        Funkcja odpowiedzialna za ustawienie i zapisanie w pamięci
        aktualnego katalogu, na którym operujemy w dany momencie.
    */
    int retval = 0;
    if(argument0 == NULL) {
        argument0 = "";
    }
    open();
    memset(infoDisk, 0, KILO);
    memcpy(infoDisk, fileSystemIndentifier, 5);
    strcpy(&infoDisk[64], argument0);
    fseek(disk, KILO, SEEK_SET);
    fwrite(infoDisk, KILO, 1, disk);
    return retval;
}

int initialize() {
    /* 
        Funkcja odpowiedzialna za inicjalizację systemu plików
    */
    int retval;
    if(argn < 4) {
        /*
            Niewystarczająca liczba argumentów wywołania funkcji initialize.
        */
        printf("Too few arguments.\n");
        printf("correct command: [command], [diskname], [size], [file1] [file2] [file3]\n");
        printf("[file1] [file2] [file3] are negligible.\n");
        retval = 1;
        /*
            argument0 - size
            argument1 - mbr
            argument2 = boot
            argument3 - kernel
        */
    }
    else {
        unsigned long long diskSize = parseSize(argument0);
	    unsigned long long writeSize = 0;
        double percent;
        const char *boofileType = NULL;
        char *buffer = NULL;
	    size_t bufferSize = 64 * KILO;
        size_t toWriteSize = 0;
        size_t i;
        FILE *file1 = NULL;
	    FILE *file2 = NULL;
	    FILE *file3 = NULL;
	    int diskSizeFactor = 0;
	    int retval = 0;

        if(argument2 != NULL) {
            boofileType = "boot loader";
            if(argument3 == NULL) {
                boofileType = "system";
            }
	    }

        if(diskSize <= minMemorySize) {
            /*
                Jeśli nie ma odpowiedniej przestrzeni na zapisanie struktury dysku,
                to nie możemy dokanać inicjalizacji => przeywamy działanie programu.
            */
            printf("Disksize too small. At least %db of memory is required!\n", minMemorySize);
            retval = -1;
        }

        retval = openGeneralFile(argument1, "file 1", file1, retval);
        retval = openGeneralFile(argument2, "file 2", file2, retval);  
        retval = openGeneralFile(argument3, "file 3", file3, retval);  

        if(retval >= 0) disk = fopen(diskname, "wb");
        if(disk == NULL) {
            printf("Error: Unable to open disk '%s'\n", diskname);
            retval = 1;
        }

        if(retval >= 0) {
            /*
                Tworzymy bufor wypełniony samymi zerami 
            */
            buffer = (char*)malloc(bufferSize);
            if(buffer == NULL) {
                /*
                    Jeśli nie udało się utworzyć bufora pokazujemy informację
                    i zamykamy otwarte pliki, zwalniamy zaalokowaną pamięć.
                */
                printf("System unable to allocate buffer.\n");
                return closeInitializing(file1, file2, file3, buffer);
            }
            memset(buffer, 0, bufferSize);
        }

        while(writeSize < diskSize) {
            /*
                Wypełniamy dysk zerami
            */
			printf("Formatting disk progress: %llu of %llu bytes (%.0f%%)...\r", writeSize, diskSize, (100.0 * writeSize) / diskSize);
            /*
                Zapisując w pamieci cały bufor, jesli nie przepełnimy dysku
            */
			toWriteSize = bufferSize;
			if (toWriteSize > diskSize - writeSize) {
                /*
                    Jeśli wyjdziemy poza rozmiar dysku przycinamy go do długości, która pozostała do zapisania.
                */
				toWriteSize = diskSize - writeSize;
			}
			if (fwrite(buffer, toWriteSize, 1, disk) != 1) {
				printf("\nError: Failed to write disk '%s'\n", diskname);
				return closeInitializing(file1, file2, file3, buffer);
			}
			writeSize += toWriteSize;
        }

        /*
            Formatowanie dysku
        */
        rewind(disk);
        argument0 = "--force";
        retval = format();

        if(file1 != NULL) {
            /*
                Odczytujemy zawartość pliku Master Boot Recorder
                i jeśli się to powiodło zapisujemy tę zawartość 
                na początek inicjalizowanego dysku.
            */
            fseek(disk, 0, SEEK_SET);
            if(fread(buffer, KILO / 2, 1, file1) != 1) {
                printf("\nError: Failed to read file %s\n!", argument1);
                return closeInitializing(file1, file2, file3, buffer);
            }
            if(fwrite(buffer, KILO / 2, 1, disk) != 1) {
                printf("\nError: Failed to write disk %s\n!", diskname);
                return closeInitializing(file1, file2, file3, buffer);
            }
	    }

        if(file2 != NULL) {
            /*
                Jeśli wskazano plik bootloadera odczytujemy z niego dane,
                dopóki mamy co odczytać (nie skończy się plikdo odczytu).
                Następnie odczytane dane zapisujemy na wskazane miejsce 
                na dysku (8KB od początku dysku), chyba że wystąpi bład.
            */
            fseek(disk, 8 * KILO, SEEK_SET);
            toWriteSize = fread(buffer, 1, bufferSize, file2);
            while(toWriteSize > 0) {
                if(fwrite(buffer, toWriteSize, 1, disk) != 1) {
                    printf("\nError: Failed to write disk %s\n", diskname);
                    return closeInitializing(file1, file2, file3, buffer);
                }
            }
            if(ferror(disk)) {
                printf("\nError: Failed to read file %s\n", argument2);
                return closeInitializing(file1, file2, file3, buffer);
            }
        }

        if(file3 != NULL) {
            /*
                Jeśli wskazano plik kernel odczytujemy z niego dane,
                dopóki mamy co odczytać (nie skończy się plik do odczytu).
                Następnie odczytane dane zapisujemy w miejsce na dysku
                zaraz za plikiem bootloadera, chyba że wystąpi bład.
            */
            toWriteSize = fread(buffer, 1, bufferSize, file3);
            while(toWriteSize > 0) {
                if(fwrite(buffer, toWriteSize, 1, disk) != 1) {
                    printf("\nError: Failed to write disk %s\n", diskname);
                    return closeInitializing(file1, file2, file3, buffer);
                }
            }
            if(ferror(disk)) {
                printf("\nError: Failed to read file %s\n", argument3);
                return closeInitializing(file1, file2, file3, buffer);
            }
        }
        
        closeInitializing(file1, file2, file3, buffer);
        if(retval == 0) {
            printf("\nDisk initialization completed successfully\n");
        }
    }
    return retval;
}

int list() {
    /*
        Funkcja odpowiedzialna za listowanie zawartości katalogu
    */
    open();
	printf("Disk Size: %ld B\n", diskSize);
	printf("|filename                        |              size(B)|         reserved(KB)|      modification date|\n");
	printf("|================================|=====================|=====================|=======================|\n");
    char dateString[20];
	for(int i = 0; i < KILO; i++)	{
		memcpy(entryPointer, infoFiles + (i * entrySize), entrySize);
		if(entry.filename[0] == endOfDirectory) {
            /*
                Informacja o końcu katalogu
            */
			break;
		}
		else if(entry.filename[0] != emptyEntry)  {
            /*
                Informacje o pliku
            */
			printf("|%-32s| %20lld| %20lld|    %s|\n", entry.filename, (long long int)entry.fileSize, (long long int)(entry.reservedBlocks * 2), entry.modificationDate);
		}
	}
	printf("|================================|=====================|=====================|=======================|\n");
    return 0;
}

int read() {
    /*
        Funkcja odpowiedzialna za czytania zawartości pliku
    */
    open();
    FileEntry tmpEntry;

    FILE *file;
	int slot;
	unsigned long long storedBytes;

	char *buffer;
    int bufferSize = 2 * KILO;
    int retval = 0;

	if(find(argument0, &tmpEntry) < 0) {
        /*
            Nie znaleziono pliku o danej nazwie
        */
		printf("Error: File %s has not been found in file system.\n", argument0);
        retval = 1;
	}
	else {
        /*
            Znajdujemy nazwę pliku (bez wskazania katalogu).
        */
        char shortFilename[256];
        memset(shortFilename, 0, 256);
        int i = 0;
        int j = 0;
        while(tmpEntry.filename[i] >= 32 && tmpEntry.filename[i] <= 125) {
            if(tmpEntry.filename[i] != '/') {
                shortFilename[j] = tmpEntry.filename[i];
                j++;
            }
            else {
                j = 0;
            }
            i++;
        }
		if((file = fopen(shortFilename, "wb")) == NULL) {
            /*
                Plik nie został poprawnie otwarty
            */
            retval = 1;
			printf("Error: File %s entry cannot be opened.\n", tmpEntry.filename);
		}
		else {
			storedBytes = tmpEntry.fileSize;
            /*
                Pomijamy pierwszy blok pamięci w systemie plików
            */
			fseek(disk, tmpEntry.startPointer * bufferSize, SEEK_SET);
			if((buffer = malloc(bufferSize)) == NULL) {
                /*
                    Nie udało się poprawnie zaalokować pamięci na bufor danych.
                */
				printf("Error: Allocating %d bytes in buffer was unsuccessful!\n", bufferSize);
                retval = 1;
			}
			else {
				while(storedBytes != 0) {
                    /*
                        Dopóki nie odczytaliśmy całego pliku
                    */
					if(storedBytes >= bufferSize) {
                        /*
                            Jeśli jest więcej bytów do odczytania niż długość bufora.
                            Odczytujemy tyle bajtów z pliku, ile wynosi długość pliku.
                        */
						if(fread(buffer, bufferSize, 1, disk) == 1) {
							fwrite(buffer, bufferSize, 1, file);
							storedBytes -= bufferSize;
						}
						else {
                            /*
                                Błąd odczytania pliku
                            */
							printf("Error: Unexpected error during file reading.\n");
							storedBytes = 0;
                            retval = 1;
						}
					}
					else {
                        /*
                            Jeśli pozostało mniej bajtów do odczytania niż długość bufora.
                            Odczytujemy tyle bajtów z pliku, ile pozostało.
                        */
						if(fread(buffer, storedBytes, 1, disk) == 1) {
							fwrite(buffer, storedBytes, 1, file);
							storedBytes = 0;
						}
						else {
                            /*
                                Błąd odczytania pliku
                            */
							printf("Error: Unexpected error during file reading.\n");
							storedBytes = 0;
                            retval = 1;
						}
					}
				}
			}
            /*
                Zamykamy otwarty plik
            */
			fclose(file);
		}
	}
    return retval;
}

int version() {
    /*
        Funkcja zwraca informacja o wersji systemu plików oraz o jej autorach.
    */
    printf("Light Operating System File System v1.0 (2022.07.28)\n");
    printf("Created by Michał Żelasko and Piotr Peter.\n");
    return 0;
}

int write() {
    /*
        Funkcja odpowiedzialna za zapisywania danych do pliku
    */
    open();
    FileEntry tmpEntry;
	FILE *file;
	int slot;
    int retval = 0;
	unsigned long long fileSize;
    unsigned long long maxSize;

	char *buffer;
    int bufferSize = 2 * KILO;

	if((slot = find(argument0, &tmpEntry)) < 0) {
        /*
            Nie znaleziono pliku o zadanej nazwie. Plik powinien byc najpierw stworzony.
        */
		printf("Error: File %s has not been found in file system. It needs to be created in prior.\n", argument0);
        retval = -10;
	}
	else {
		if((file = fopen(argument0, "rb")) == NULL) {
            /*
                Błąd w trakcie otwierania pliku
            */
			printf("Error: File %s cannot be opened.\n", tmpEntry.filename);
            retval = 1;
		}
		else {
			/*
                Sprawdzamy czy istnieje wystarczająco dużo przestrzeni w systemie plików
            */
			fseek(file, 0, SEEK_END);
			maxSize = ftell(file);
			rewind(file);
			if((tmpEntry.reservedBlocks * bufferSize) < maxSize) {
                /*
                    Brak wystarczającej ilości przestrzeni
                */
                delete();
                char tmpArg[13];
                sprintf(tmpArg, "%d", tmpEntry.reservedBlocks * 8);
                argument1 = &tmpArg[0];
                argn = 5;
                create();
                if(depth < 10) {
                    depth++;
                    write();
                }
                else {
                    printf("Error: There is not enough reserved space for file %s.\n", argument0);
                    retval = 1;
                }
			}
			else {
                /*
                    Pomijamy pierwszy blok pamięci w systemie plików
                */
				fseek(disk, tmpEntry.startPointer * bufferSize, SEEK_SET);
				buffer = malloc(bufferSize);
				if(buffer == NULL) {
                    /*
                        Nie udało się poprawnie zaalokować pamięci na bufor danych.
                    */
                    printf("Error: Allocating %d bytes in buffer was unsuccessful!\n", bufferSize);
                    retval = 1;
				}
				else {
                    fileSize = maxSize;
					while(fileSize != 0) {
                        /*
                            Dopóki nie zapisaliśmy całego pliku
                        */
						if(fileSize >= bufferSize) { 
                            /*
                                Jeśli pozostało do zapisanie więcej niż rozmiar bufora
                                to przepisujemy dane do bufora i do systemy plików z bufora
                            */
							if (fread(buffer, bufferSize, 1, file) == 1) {
								fwrite(buffer, bufferSize, 1, disk);
								fileSize -= bufferSize;
							}
							else {
                                /*
                                    Błąd odczytania pliku
                                */
                                printf("Error: Unexpected error during file reading.\n");
                                retval = 1;
							}
						}
						else {
                            /*
                                Jeśli pozostało do zapisanie mniej niż rozmiar bufora
                                to przepisujemy dane do bufora i dopełniamy go zerami,
                                a następnie zapisujemy dane do systemu plików z bufora.
                            */
							if (fread(buffer, fileSize, 1, file) == 1) {
								memset(buffer + fileSize, 0, bufferSize - fileSize); // 0 the rest of the buffer
								fwrite(buffer, bufferSize, 1, disk);
								fileSize = 0;
							}
							else {
								/*
                                    Błąd odczytania pliku
                                */
                                printf("Error: Unexpected error during file reading.\n");
                                retval = 1;
							}
						}
					}
				}
				/*
                    Uaktualnienie stanu katalogu i zapisanie nowego stanu na dysku
                */
				fileSize = ftell(file);
                find(argument0, &tmpEntry);
				memcpy(infoFiles + (slot * entrySize) + 272, &fileSize, 8);
				fseek(disk, 4 * KILO, SEEK_SET);
				fwrite(infoFiles, entrySize * KILO, 1, disk);
			}
			if(retval != -10) fclose(file);
		}
	}
    return retval;
}

int showMemory(char* memoryPointer, int sectionStart, int sectionEnd) {
    for(int i = sectionStart; i < sectionEnd; i = i + 64) {
        printf("%.6d. ", i);
        for(int j = 0; j < 64 && i + j < sectionEnd; j = j + 8) {
            for(int k = 0; k < 8 && i + j + k < sectionEnd; k++) {
                if(memoryPointer[i + j + k] <= 32 || memoryPointer[i + j + k] == 127) {
                    printf(" ");
                }
                else if(memoryPointer[i + j + k] == '\n') {
                    printf("\n");
                }
                else {
                    printf("%c", memoryPointer[i + j + k]);
                }
            }
            printf("|");
        }
        printf("\n");
    }
    return 0;
}

int present() {
    int retval = open();
    char* memoryPointer;
    int sectionStart = atoi(argument1);
    int sectionEnd = atoi(argument2);
    if(retval == 0) {
        if(equal(argument0, "infoDisk")) {
            fseek(disk, KILO, SEEK_SET);
            fread(infoDisk, KILO, 1, disk);
            retval = showMemory(infoDisk, sectionStart, sectionEnd);
        }
        else if(equal(argument0, "infoFiles")) {
            fseek(disk, 4 * KILO, SEEK_SET);
            fread(infoFiles, entrySize * KILO, 1, disk);
            retval = showMemory(infoFiles, sectionStart, sectionEnd);
        }
        else if(equal(argument0, "memory")) {
            memoryPointer = malloc(sectionEnd - sectionStart);
            fseek(disk, 0, SEEK_SET);
            if(fread(memoryPointer, sectionEnd, 1, disk) != 1) {
                printf("Error while reading file!\n");
                exit(-1);
            }
            retval = showMemory(memoryPointer, sectionStart, sectionEnd);
        }
        if(equal(argument0, "memory")) {
            retval = retval + freeBuffer(memoryPointer);
        }
        retval = retval + close();
    }
    return retval;
}