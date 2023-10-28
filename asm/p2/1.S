// Direct
	ORG 0000H
	MOV 40H, 50H
	END
// Indirect
	ORG 0000H
	MOV R0, #40H
	MOV @R0, #50H
	END
// End
