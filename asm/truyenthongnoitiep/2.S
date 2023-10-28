    ORG 0000H

    ; DS = 20
DATA:
    DS 20            ; Data has 20 bytes, from 50H to 69H

    ; UART_RX: This function is made to receive
    ; data from the serial port (maybe idk really)
UART_RX:
    PUSH ACC
    PUSH PSW

    MOV A, SREG
    ORL A, (1 << RXNE)    ; Wait until RXNE = 1
    JNZ UART_RX

    MOV A, UDR            ; Read data from UDR.

    MOV DATA[R0], A       ; Write DATA to RAM.

    POP PSW
    POP ACC
    RET

MAIN:
    ; Setup baudrate speed
    MOV R1, 10            ; UBRRL = 10
    MOV UBRRL, R1
    SETB UCSRB, RXEN      ; Enable data receiver mode
    ; R0 = 50, since we start from 50H
    MOV R0, 50            ; Start address

UART_LOOP:
    CALL UART_RX          ; Receive the data
    INC R0                ; Increase R0 by 1
    CMP R0, 69            ; Compare R0 with end address
    JNZ UART_LOOP
    JMP $                 ; Stop!
    END
