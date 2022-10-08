.data 
n: .byte 0
frase: .asciiz "INATEL "

.text
# Mostra a pergunta
li $v0, 4
la $a0, frase
syscall

# Espera a idade
li $v0, 5
syscall
add $t6, $v0, $0

# Loop
li $s1, 0

blt $s1, $t6, label

label: addi $s1, $s1, 1
       li $v0, 4
       la $a0, frase
       syscall
       #j fim

fim: