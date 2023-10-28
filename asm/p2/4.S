// Direct
	ORG 0000H
	MOV A, #44H
	END
// Indrect
	ORG 0000H
	MOV R0, #44H
	MOV A, @R0
	END
// End
