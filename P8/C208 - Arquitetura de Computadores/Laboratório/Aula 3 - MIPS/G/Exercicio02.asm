# Exercício 2

.text     
    li $v0, 5 # Entrar com um INT
    syscall
    
    
    move $t3, $v0 #Guarda o valor em $t3
    
    add $t2,$t3,30
    move $s1,$t2
    
    add $a0, $s1, $0
    
    li $v0,1
    syscall
    
    