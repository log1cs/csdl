// Direct
	ORG 0000H
	MOV #33H, A
	END
// Indirect
	ORG 0000H
	MOV R0, #33H
	MOV @R0, A
	END
// End
