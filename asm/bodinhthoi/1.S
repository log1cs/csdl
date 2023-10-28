    E3 equ 250 ; Set E3 = 250

Tre500:
    mov TMOD, #01H
    ; Convert E3 from 250, a 16 bit number to binary (00000000)
    ; cause we actually shifted 8 bytes.
    mov TH0, #(E3 >> 8) 
    MOV TL0, #E3    ; #E3 = 11111010
    SETB TR0  
    JB TF0, Tre500
    CLR TF0
    RET