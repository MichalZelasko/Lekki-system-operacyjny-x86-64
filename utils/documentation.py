import os
import codecs

f = codecs.open("documentation.txt", "w", "utf-8")

class Fun :
    def __init__(self, fType, fName, argType, argName) :
        self.type = fType
        self.name = fName
        if self.name[:16] == "handle_interrupt" : self.name = " " + self.name
        self.types = argType
        self.names = argName
        self.toFile(f)
    
    def toFile(self, file) :
        file.write("\\subsubsection{" + self.name.replace("_", "\\texttt{\\char`_}") + "}" + "\n")
        file.write("\\textbf{Typ:} " + self.type.replace("_", "\\texttt{\\char`_}") + "\\\\\n")
        file.write("\\textbf{Opis:} " + "\\\\\n")
        if len(self.names) > 0 :
            file.write("\\textbf{Argumenty:}" + "\n")        
            file.write("\\begin{itemize}" + "\n")
            for i in range(len(self.types)) :
                file.write("    \\item " + self.names[i].replace("_", "\\texttt{\\char`_}") + " (typ: " + self.types[i].replace("_", "\\texttt{\\char`_}") + ")," + "\n")
            file.write("\\end{itemize}" + "\n")
        file.write("\n" + "\n")

class Struct :
    def __init__(self, arguments, sName) :
        self.name = sName[1:-1]
        self.fields, self.comments = [], []
        for l in arguments.split("\n") :
            i, n = 0, len(l)
            while i < n and ord(l[i]) <= 32: i += 1
            line = l[i:]
            if len(line) > 2 and ";" in line :
                words = line.split(";")
                if "//" in line : self.comments.append(line.split("//")[-1])
                else : self.comments.append(" ")
                self.fields.append(words[0])
        self.toFile(f)

    def toFile(self, file) :
        file.write("\\subsubsection{struct " + self.name.replace("_", "\\texttt{\\char`_}") + "}" + "\\\\\n")
        file.write("\\textbf{Pola:} " + "\n")
        if len(self.fields) > 0 :
            file.write("\\begin{itemize}" + "\n")
            for i in range(len(self.fields)) :
                if self.comments[i] != " " : file.write("    \\item " + self.fields[i].replace("_", "\\texttt{\\char`_}") + " - " + self.comments[i].replace("_", "\\texttt{\\char`_}") + "," + "\n")
                else : file.write("    \\item " + self.fields[i].replace("_", "\\texttt{\\char`_}") + "\n")
            file.write("\\end{itemize}" + "\n")
        file.write("\n")

class Enum :
    def __init__(self, arguments, sName) :
        self.name = sName[1:-1]
        self.fields, self.comments = [], []
        for l in arguments.split("\n") :
            i, n = 0, len(l)
            while i < n and ord(l[i]) <= 32 : i += 1
            line = l[i:]
            if len(line) > 2 and ";" in line :
                words = line.split(" ")
                if "//" in line : self.comments.append(line.split("//")[-1])
                else : self.comments.append(" ") 
                self.fields.append(words[0])
        self.toFile(f)

    def toFile(self, file) :
        file.write("\\subsubsection{enum " + self.name.replace("_", "\\texttt{\\char`_}") + "}" + "\\\\\n")
        file.write("\\textbf{Pola:} " + "\n")
        if len(self.fields) > 0 :
            file.write("\\begin{itemize}" + "\n")
            for i in range(len(self.fields)) :
                if self.comments[i] != " " : file.write("    \\item " + self.fields[i].replace("_", "\\texttt{\\char`_}") + " - " + self.comments[i].replace("_", "\\texttt{\\char`_}") + "," + "\n")
                else : file.write("    \\item " + self.fields[i].replace("_", "\\texttt{\\char`_}") + "\n")
            file.write("\\end{itemize}" + "\n")
        file.write("\n")

def checkFileExtension(filename) :
    return filename[-2:] == ".h"

def lookForFunctions(file) :
    functions = []
    for line in file.readlines() :
        fType, fName, argType, argName = [], [], [], []
        if ("(" in line or ")" in line) and not "__attribute__" in line :
            words = line.replace(" ", "|").replace(")", "|").replace("(", "|").replace(",", "|").replace("||", "|").split("|")
            fType, fName, argType, argName  = words[0], words[1], [], []
            for i in range(2, len(words) - 1, 2) :
                argType.append(words[i])
                argName.append(words[i + 1])
            functions.append(Fun(fType, fName, argType, argName))
    if len(functions) == 0 : f.write("\\textit{brak funkcji}")
    return functions

def lookForStructEnum(file) :
    structs, enums = [], []
    text, state = file.read(), 1
    text = text.replace("typedef struct ", "$").replace("typedef enum", "!").replace("}", "@")
    arguments, name = "", ""
    enum1, enum2 = "", ""
    for let in text : 
        if state == 0 : arguments = arguments + let
        if state == -1 : name = name + let
        if state == -2 : enum1 = enum1 + let
        if state == -3 : enum2 = enum2 + let
        if let == "!" : state = -2
        if let == "$" : state = 0
        if let == "@" : 
            if state == 0 : state = -1
            if state == -2 : state = -3
        if let == ";" : 
            if state == -1 : 
                structs.append(Struct(arguments, name))
                arguments, name = "", ""
                state = 1
            if state == -3 : 
                enums.append(Enum(enum1, enum2))
                enum1, enum2 = "", ""
                state = 1
            state = state * 1
    if len(structs) + len(enums) == 0 : f.write("\\textit{brak struktur i enumeratorów}")
    return structs, enums

def documentFile(filename) :
    functions, structs, enums = [], [], []
    if not checkFileExtension(filename) : return functions, structs
    f.write("\n\\section{" + filename.replace("_", "\\texttt{\\char`_}") + "}\n\n")
    f.write("\n\\subsection{Funkcje}\n\n")
    with open(filename, "r") as file :
        functions.extend(lookForFunctions(file))
    f.write("\n\\subsection{Struktury i enumeratory}\n\n")
    with open(filename, "r") as file :
        s, e = lookForStructEnum(file)
        structs.extend(s)
        enums.extend(e)
    f.write("\n\n")
    return functions, structs

def initaite() :
    f.write("%%%%%% -*- Coding: utf-8-unix; Mode: latex\n \\documentclass[polish,12pt]{aghthesis}\n\\usepackage{graphicx}\n\\usepackage{placeins}\n\\usepackage[utf8]{inputenc}\n\\usepackage{url}\n\\author{Piotr Peter, Michał Żelasko}\n\\titlePL{Lekki system operacyjny dla komputera z procesorem x86-64 - dokumentacja}\n\\titleEN{A lightweight operating system for an x86-64 computer}\n\\fieldofstudy{Informatyka}\n\\typeofstudies{Stacjonarne}\n\\supervisor{dr inż. Zaborowski Wojciech}\n\\date{\\the\\year}\n\\begin{document}\n\\maketitle\n\\tableofcontents\n\\newpage")

def finitialize() :
    f.write("\\newpage\n\\bibliography{bibliografia}\n\\end{document}")

def listDirectory(path, count) :
    gFunctions, gStructs = [], []
    if count : dir = os.listdir(path)
    else : dir = os.listdir()
    for element in dir :
        if not "." in element and element != "makefile" :
            if count : functions, structs = listDirectory(path + "/" + element, count + 1)
            else : functions, structs = listDirectory(element, count + 1)
            gFunctions.extend(functions)
            gStructs.extend(structs)
        elif element[0] != "." :
            if count : functions, structs = documentFile(path + "/" + element)
            else : functions, structs = documentFile(element)
            gFunctions.extend(functions)
            gStructs.extend(structs)
    return gFunctions, gStructs           

if __name__ == "__main__" :
    initaite()
    listDirectory("", 0)
    finitialize()

