.text
# ======================== Exercício 5 ========================

# i = $t1
# cont = $t2

# Setando valores iniciais
li $t1, 10
li $t2, 0

while: bgt $t1, 0, loop			# while(i > 0)
j exit					# Se sair do while, vai pra exit
loop:					# Loop
	add $t2, $t2, 5			# cont += 5
	sub $t1, $t1, 1			# i -= 1
	j while				# Volta pra while
exit:					# Fim