.text
label1: addi $s3, $s3, 1 
addi $t3, $t3, 1 		#a++  ==> $t3 é a variável A
bne $s3, 10, label1		#$s3 é a variável de controle do do-while

addi $t1, $t1, 1  		# Sinaliza que saiu do do-while






