.data
n1: .byte 20
n2: .byte 30
media: .byte 0
# Exemplo de if
.text
lb $t1, n1
lb $t2, n2
add $t6, $t1, $t2
div $t3, $t6, 2

# if (n1 + n2) / 2 >= 70 ==> executa a label sit
bge $t3, 70, sit

# else:
addi $t4, $0, 0
addi $t5, $0, 1
j fim

sit: addi $t4, $0, 1
     addi $t5, $0, 0
fim: