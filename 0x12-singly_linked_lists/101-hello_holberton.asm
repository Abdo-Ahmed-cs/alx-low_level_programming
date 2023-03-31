section .data
    msg db 'Hello, Holberton',0
    fmt db '%s',10,0

section .text
    global main

main:
    push rbp
    mov rdi, fmt
    mov rsi, msg
    xor eax, eax
    call printf
    pop rbp
    ret
