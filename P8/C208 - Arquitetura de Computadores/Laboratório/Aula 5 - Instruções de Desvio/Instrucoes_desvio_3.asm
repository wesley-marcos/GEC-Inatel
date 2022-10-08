.text
# ======================== Exercício 3 ========================

# a = $t0
# b = $t1
# c = $t2

# Setando valores iniciais
li $t0, 8
li $t1, 10
li $t2, 9

bgt $t0, $t1, cond			# if(a > b) {cond}:
sub $t1, $t0, $t2			# else{ b = a - c
add $t2, $t1, $t2			#  c = b + c	}
j fim					# Fim do else
cond: sub $t2, $t0, $t1			# c = a - b
      add $t0, $t1, $t2			# a = b + c
fim:					# Fim