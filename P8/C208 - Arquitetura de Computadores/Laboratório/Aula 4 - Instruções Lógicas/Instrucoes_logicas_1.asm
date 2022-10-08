.text
# ======================== Exercício 1  ========================

li $t0, 10			# Load do valor 10 para o  registrador $t0
li $t1, 25			# Load do valor 25 para o  registrador $t1
li $t2, 43			# Load do valor 43 para o  registrador $t2
li $t3, 89			# Load do valor 89 para o  registrador $t3

# 1)
srl $t4, $t0, 8			# Deslocamento à direita de $t0 de 8 bits salvo em $t4
srl $t5, $t1, 8			# Deslocamento à direita de $t1 de 8 bits salvo em $t5
srl $t6, $t2, 8			# Deslocamento à direita de $t2 de 8 bits salvo em $t6
srl $t7, $t3, 8			# Deslocamento à direita de $t3 de 8 bits salvo em $t7

# 2)
sll $s0, $t0, 4			# Deslocamento à esquerda de $t0 de 4 bits salvo em $s0
sll $s1, $t1, 4			# Deslocamento à esquerda de $t1 de 4 bits salvo em $s1
sll $s2, $t2, 4			# Deslocamento à esquerda de $t2 de 4 bits salvo em $s2
sll $s3, $t3, 4			# Deslocamento à esquerda de $t3 de 4 bits salvo em $s3

