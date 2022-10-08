.text

# ========= Exercício 2 ========= 
# A)
#li $s1, 0			# Força b == 0
#label1: addi $s1, $s1, 5	# b = b + 5	
#bne $s1, 50, label1
#fim:
#addi $t1, $t1, 1  		# Sinaliza que saiu do do-while

# B)
#li $s1, 10			# Força b == 0
#beq $s1, 10, label1		# if (b == 10) then:
#add $s1, $s1, $s1		# else: b = b * 2
#j fim
#label1: subi $s1, $s1, 1	# b = b - 1
#fim:

# C)
#li $s0, 10			# Força b == 0
#li $s1, 10
#beq $s0, $s1, label1		# if (b == 10) then:
#subi $s0, $s0, 8		# else: b = b * 2
#j fim
#label1: addi $s0, $s0, 10	# b = b - 1
#fim:

# D)
li $s0, 2
li $s1, 0
li $s2, 0
bne $s0, 0, loop
loop: add $s1, $s1, $s2
      addi $s0, $s0, 1
      beq $s0, 0, exit
exit: