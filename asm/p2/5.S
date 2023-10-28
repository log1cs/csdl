// Direct
	ORG 0000H
	MOV #33H, #55H
	END
// Indirect (what the fuck?)
	ORG 0000H
	MOV R0, #33H
	MOV @R0, 55H
	END
// End
