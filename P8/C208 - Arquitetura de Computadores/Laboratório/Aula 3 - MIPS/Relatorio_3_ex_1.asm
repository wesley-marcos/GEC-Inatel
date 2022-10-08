# Exercício 1 - Operações Aritméticas

.text
# A) 2 + 5 = 7
li $t0, 2
addi $s0, $t0, 5

# B) 89 + 20 = 109
li $t2, 89
addi $s1, $t2, 20

# C)-80 + 1234 = 1234 + (-80) = 1154
li $t4, 1234
addi $s2, $t4, -80

# D) 70 - 24 = 46
li $t6, 70
subi $s3, $s0, 24

# E) 20 - 150 = 20 + (-150) = -130
li $t6, 20
addi $s4, $t6, -150
