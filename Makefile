all:
	nasm -f elf start.asm -o start.o
	gcc -m32 -c kernel.c -o kernel.o
	ld -melf_i386 -T link.ld -o kernel start.o kernel.o
