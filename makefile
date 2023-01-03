
# sudo apt-get install grub-legacy xorriso qemu-system-x86_64

GCCPARAMS = -Iheaders -g -Iheaders/icons -nostdlib -fno-builtin -fno-exceptions -fno-leading-underscore -Wno-write-strings
LDPARAMS = -melf_i386
SOURCE_FILES = $(shell find ./src -name *.c -o -name *.s)
OBJECT_FILES = $(addsuffix .o,$(basename ${subst src,obj,$(SOURCE_FILES)}))

run: bin/mykernel.iso
	qemu-system-x86_64 -cdrom bin/mykernel.iso

debug: bin/mykernel.iso
	qemu-system-x86_64 -s -S -cdrom bin/mykernel.iso

obj/%.o: src/%.c
	mkdir -p $(@D)
	gcc $(GCCPARAMS) -c -o $@ $<

obj/%.o: src/%.s
	mkdir -p $(@D)
	as -o $@ $<

bin/mykernel.bin: linker.ld $(OBJECT_FILES)
	mkdir -p bin
	ld $(LDPARAMS) -T $< -o $@ $(OBJECT_FILES)

bin/mykernel.iso: bin/mykernel.bin
	mkdir iso
	mkdir iso/boot
	mkdir iso/boot/grub
	cp bin/mykernel.bin iso/boot/mykernel.bin
	echo 'set timeout=0'                      > iso/boot/grub/grub.cfg
	echo 'set default=0'                     >> iso/boot/grub/grub.cfg
	echo ''                                  >> iso/boot/grub/grub.cfg
	echo 'menuentry "OS" {' 			     >> iso/boot/grub/grub.cfg
	echo '  multiboot /boot/mykernel.bin'    >> iso/boot/grub/grub.cfg
	echo '  boot'                            >> iso/boot/grub/grub.cfg
	echo '}'                                 >> iso/boot/grub/grub.cfg
	grub-mkrescue --output=bin/mykernel.iso iso
	rm -rf iso

# install: bin/mykernel.bin
# 	sudo cp $< /boot/mykernel.bin

.PHONY: clean
clean:
	rm -rf obj bin
