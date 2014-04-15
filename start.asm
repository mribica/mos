bits 32
section .text
  align 4
  dd 0x1BADB002                 ;magic
  dd 0x00                       ;flags
  dd - (0xBADB002 + 0x00)       ;checksum magic + flags + checksum should be 0

global start
extern kmain

start:
  cli                           ;block interups
  call kmain
  hlt
