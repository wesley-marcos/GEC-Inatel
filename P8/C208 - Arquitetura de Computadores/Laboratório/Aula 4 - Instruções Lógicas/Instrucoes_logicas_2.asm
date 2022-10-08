.text
# ======================== Exercício 2  ========================

li $t0, 324			# Load do valor 324 para o  registrador $t0
li $t1, 2018			# Load do valor 2018 para o  registrador $t1
li $t2, 33			# Load do valor 33 para o  registrador $t2
li $t3, 100			# Load do valor 100 para o  registrador $t3
li $t4, 1970			# Load do valor 1970 para o  registrador $t4
li $t5, 66			# Load do valor 66 para o  registrador $t5

and $s4, $t0, $t3		# Operação AND entre $t0 e $t3, salvo em $s4
and $s5, $t1, $t4		# Operação AND entre $t1 e $t4, salvo em $s5	
and $s6, $t2, $t5		# Operação AND entre $t2 e $t5, salvo em $s6