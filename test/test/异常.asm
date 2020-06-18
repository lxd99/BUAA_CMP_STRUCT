block0:
bne $2 $0 block1
nop 
ori $2 1
ori $31 $0 0x3000
addi $31 $31 -8
jr $31
nop


block1:
ori $2 $0 0x7f10 #ctrl
ori $3 $0 14
sw  $3 ($2)
addi $2 $2 4 #preset
sw $3 ($2)
addi $2 $2 4 #count
sw $3 ($2)
addi $2 $2 -4
lw $4 ($2)


block2:
ori $2 $0 3
lw $5 ($2)
lh $5 ($2)
lhu $5 ($2)
lb $5 ($2)
lbu $5 ($2)
sw $5 ($2)
sh $5 ($2)
sb $5 ($2)
ori $2 $0 0
lui $2 0x8000
sw $2 -1($2)

block3:
lui $2  0x8000
lui $3 0x7fff
ori $3 0xffff
sub $2 $2 $3
add $3 $3 $3

block4:
nop




.text 0x4180
mfc0 $10 $14
addi $10 $10 4
mtc0 $10 $14
eret 
addu $5 $5 $5 

  
