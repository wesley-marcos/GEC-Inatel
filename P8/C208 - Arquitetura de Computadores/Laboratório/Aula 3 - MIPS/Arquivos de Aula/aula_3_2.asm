.text

# Imprime INT
li $t0, 20
li $t1, 100
add $s6, $t0, $t1

li $v0, 1 # Imprime um INT
add $a0, $s6, $0 # move $a0, $s6 --> Gasta mais
syscall # Chamada do sistema