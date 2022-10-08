.data
num1: .byte 0x10 
num2: .byte 0x20

.text
lb $t1, num1
lb $t2, num2

# Se num1 == num2, $t4 = 1
beq $t1, $t2, igual
igual: addi $t4, $t4, 1

# Se num1 > num2, $t3 = 1, senão $t5 = 1
bgt $t1, $t2, maior
addi $t5, $t5, 1
j fim
maior: addi $t3, $t3, 1
fim: