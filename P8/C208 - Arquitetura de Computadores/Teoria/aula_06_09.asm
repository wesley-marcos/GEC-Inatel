.text 			#Indica que entrarei na Memória de Programa

# addi $destino, $0 (0), 0xzz (número à inserir (sempre nessa ordem)
addi $t1, $0, 0x30 	#$t1 <- $0 (0) + 0x30
addi $t2, $t0, 0x40 	#$t1 <- $0 (0) + 0x30
add $t3, $t1, $t2 	#$t3 <- $t1 + $t2
sub $t4, $t2, $t1	#$t4 <- $t2 - $t1
or $t5, $t1, $t2	#$t5 <- $t1 or $t2
ori $t6, $t2, 0x40	#$t6 <- $t2 or 0x40