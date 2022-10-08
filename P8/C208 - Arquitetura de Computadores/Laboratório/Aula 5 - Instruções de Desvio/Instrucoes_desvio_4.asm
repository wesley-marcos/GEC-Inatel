.text
# ======================== Exercício 4 ========================

# a = $t0
# b = $t1
# c = $t2

# Setando valores iniciais
li $t0, 10
li $t1, 8
li $t2, 9

blt $t0, $t1, cond			# if(a < b) {cond}:
add $t1, $t0, $t2			# else{ b = a + c
sub $t2, $t1, $t2			#  c = b - c	}
j fim					# Fim do else
cond: add $t2, $t0, $t1			# c = a + b
      sub $t0, $t1, $t2			# a = b - c
fim:					# Fim					