.data			# Indica que entrarei na área de dados

idade: .byte 0x22
rg: .half 0x3344
num1: .word 0xAABBCCDD

.text
la $t1, idade
lb $t2, 0($t1)	# Pegando apenas os 2 bits (por ser byte) salvos na variável idade e salvando em $t1
lh $t3, rg	# Pegando apenas os 4 bits (por ser half) salvos na variável rg e salvando em $t3
lh $t4, 2($t1)	# Outra forma de fazer a de cima e salvando em $t4
lh $t5, 4($t1)	# Pegando apenas os 4 bits (por ser half) salvos na variável num1 e salvando em $t5