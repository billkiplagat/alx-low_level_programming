section .data
    hello db "Hello, Holberton", 10, 0    ; null-terminated string with newline character

section .text
    global main
    extern printf

main:
    push rbp                 ; save base pointer
    mov rbp, rsp             ; set base pointer to stack pointer

    ; call printf function to print hello string
    mov rdi, hello           ; set first argument (format string)
    xor eax, eax             ; clear eax register (return value)
    call printf              ; call printf function

    ; clean up and return
    mov eax, 0               ; set return value to 0
    leave                    ; restore stack pointer and base pointer
    ret                      ; return to operating system

