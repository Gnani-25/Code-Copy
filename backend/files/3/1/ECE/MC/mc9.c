//9. DAC INTERFACING 
//STAIR CASE 

START:  MOV P1,#00H 
AGAIN: MOV R0,#05 
MOV A,#00 
BACK: MOV P1,A 
LCALL DELAY 
ADD A,#33H 
DJNZ R0,BACK 
SJMP AGAIN 
DELAY: MOV R7,#0FFH 
DJNZ R7,$ 
RET 
END 

//TRIANGULAR WAVE  

ORG 000H       
LOOP:MOV A,#00H   
INCR: MOV P1,A 
INC A 
CJNE A,#255,INCR 
DECR: MOV P1,A 
DEC A 
CJNE A,#00H,DECR 
JMP LOOP 
END 