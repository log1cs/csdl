    ORG 0000H

    ; Definition
    DATA:
      DS 31             ; Data has 31 bytes, from 30H to 60H

    UART_TX:            ; Output the data to the serial port
      PUSH ACC
      PUSH PSW

      MOV A, SREG
      ORL A, (1 << UDRE)
      JNZ UART_TX

      MOV A, DATA       ; Write data to UDR
      OUT UDR, A

      POP PSW
      POP ACC
      RET

    MAIN:
      ; Setup baudrate
      MOV R1, 10        ; UBRRL = 10
      MOV UBRRL, R1

      SETB UCSRB, TXEN  ; Enable data transfer mode

      ; Verify data streak
      MOV R0, 30        ; Start of the data streak
      MOV R1, 61        ; End of the data streak

    UART_LOOP:
      MOV A, DATA[R0]   ; Read data from RAM
      CALL UART_TX      ; Write data to the serial
      INC R0		        ; Increase +1 to the address
      CMP R0, R1        ; Final check: Verify the data
      JNZ UART_LOOP
      JMP $		          ; Stop here.
      END
