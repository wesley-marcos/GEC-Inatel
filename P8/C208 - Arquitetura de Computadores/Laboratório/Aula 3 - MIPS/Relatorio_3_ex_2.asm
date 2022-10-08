# Pedir ao usuário sua idade e mostrar ela daqui 30 anos.

.data
pergunta: .asciiz "Qual sua idade?  "
resposta: .asciiz "Sua idade daqui 30 anos será de: "
idade: .space 10

.text

# Mostra a pergunta
li $v0, 4
la $a0, pergunta
syscall

# Espera a idade
li $v0, 5
syscall
add $t6, $v0, $0

# Faz a conta
addi $t3, $t6, 30

# Mostrando a resposta
li $v0, 4
la $a0, resposta
syscall

# Mostra o resultado da conta
add $s2, $t3, $0
add $a0, $s2, $0
li $v0, 1
syscall