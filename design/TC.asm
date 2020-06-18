.text
ori $3 0x7f00 #ctrl
ori $2 0x9
sw $2 0($3) 

addi $3 $3 4 #present
ori $4 $0 5
sw $4 0($3)

ori $4 $0 0xfc01 #SR
mtc0 $4 $12

loop:
j loop
nop


.ktext 0x4180
ori $3 $0 0x7f00
sw $2 0($3)
eret
