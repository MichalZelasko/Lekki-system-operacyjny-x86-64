ENTRY(loader)
OUTPUT_FORMAT("elf64-x86-64")
OUTPUT_ARCH(i386:x86-64)

SECTIONS
{
  . = 0x0100000;

  .text :
  {
    *(.multiboot)
    *(.text*)
    *(.rodata)
  }

  .data  :
  {
    *(.data)
  }

  .bss  :
  {
    *(.bss)
  }

  .kernel  :
  {
    *(.kernel)
  }

  /DISCARD/ : { *(.fini_array*) *(.comment) }
}