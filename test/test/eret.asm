.text
block0:
ori $4 $0 0xfc01
mtc0 $4 $12
ori $3 16
bne $3 $2 block1
nop

block1:
addu $3 $3 $3



.ktext 0x4180
mfc0 $5 $14
addi $5 $5 4
mtc0 $5 $14
eret
 