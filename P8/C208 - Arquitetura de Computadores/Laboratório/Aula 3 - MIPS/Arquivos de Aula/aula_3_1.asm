.text 

# x = 5 + 4 ---> Tipo R

# load imemediate = li
li $t2, 5  #$t2 = 5
li $t3, 4  #$t3 = 4
add $s0, $t2, $t3 	#X = a + b

# X = c + 125 --> Tipo I
li $s0, 10
addi $s2, $s0, 125

# X = 10 - 125
li $t4, 10
subi $t0, $t4, 125

addi $t1, $t4, 125

# Y = 4 * 5 ---> TIPO R
li $t6, 4
li $s6, 5
mul $s5, $t6, $s6
li $t6, 1000
div $s7, $t6, 5