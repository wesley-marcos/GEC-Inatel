#Exemplo de print
.data
frase: .asciiz "Entre com sua idade: "
frase2: .asciiz "Você é maior de idade."
frase3: .asciiz "Você é menor de idade."

.text
li $v0, 4		# Seta o serviço PRINT STRING
la $a0, frase		# Indica onde está a string à ser impressa
syscall

# Espera a idade
li $v0, 5		# Seta serviço READ STRING
syscall
add $t6, $v0, $0	# Move o dado digitado para $t6

# if (idade >= 18):
bge $t6, 18, maior
li $v0, 4
la $a0, frase3
syscall
j fim

# Se for maior de idade:
maior: li $v0, 4
       la $a0, frase2
       syscall

fim: li $v0, 10		# Chamado o serviço EXIT, finalizando o código
syscall