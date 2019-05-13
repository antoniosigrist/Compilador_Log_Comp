print:  ; subrotina print

  PUSH EBP ; guarda o base pointer
  MOV EBP, ESP ; estabelece um novo base pointer

  MOV EAX, [EBP+8] ; 1 argumento antes do RET e EBP
  XOR ESI, ESI

print_dec: ; empilha todos os digitos
  MOV EDX, 0
  MOV EBX, 0x000A
  DIV EBX
  ADD EDX, '0'
  PUSH EDX
  INC ESI ; contador de digitos
  CMP EAX, 0
  JZ print_next ; quando acabar pula
  JMP print_dec

print_next:
  CMP ESI, 0
  JZ print_exit ; quando acabar de imprimir
  DEC ESI

  MOV EAX, SYS_WRITE
  MOV EBX, STDOUT

  POP ECX
  MOV [res], ECX
  MOV ECX, res

  MOV EDX, 1
  INT 0x80
  JMP print_next

print_exit:
  POP EBP
  RET

; subrotinas if/while
binop_je:
  JE binop_true
  JMP binop_false

binop_jg:
  JG binop_true
  JMP binop_false

binop_jl:
  JL binop_true
  JMP binop_false

binop_false:
  MOV EBX, False  
  JMP binop_exit
binop_true:
  MOV EBX, True
binop_exit:
  RET

_start :

PUSH EBP 
MOV EBP, ESP 

PUSH DWORD 0
PUSH DWORD 0
PUSH DWORD 0
MOV EBX, 5
MOV [EBP-8], EBX
MOV EBX, 2
MOV [EBP-4], EBX
MOV EBX, 1
MOV [EBP-12], EBX

LOOP_1:
MOV EBX, [EBP-4]
PUSH EBX
MOV EBX, [EBP-8]
PUSH EBX
MOV EBX, 1
POP EAX
ADD EAX, EBX
MOV EBX, EAX
POP EAX
CMP EAX, EBX
CALL binop_jl
CMP EBX, False
JE EXIT_1

MOV EBX, [EBP-12]
PUSH EBX
MOV EBX, [EBP-4]
PUSH EBX
POP EAX
IMUL EBX
MOV EBX, EAX
MOV [EBP-12], EBX

LOOP_2:
MOV EBX, 2
MOV EBX, 4
CMP EAX, EBX
CALL binop_jl
CMP EBX, False
JE EXIT_2

MOV EBX, [EBP-8]
PUSH EBX
MOV [EBP-8], EBX
JMP LOOP_2
EXIT_2:

MOV EBX, [EBP-4]
PUSH EBX
MOV EBX, 1
POP EAX
ADD EAX, EBX
MOV EBX, EAX
POP EAX
MOV [EBP-4], EBX
LOOP_3:
LOOP_4:
LOOP_5:
JMP LOOP_1
EXIT_1:

MOV EBX, [EBP-12]
PUSH EBX
CALL print
POP EBX
 
POP EBP
MOV EAX, 1
INT 0x80
