# Converter o seguinte código C para MIPS:
#	char a = 54;
#	char b = 45;
#	printf("%d", a + b);

.data
texto: .asciiz "%d"
idade: .space 10

.text

# Salvando o valor de a em '$t0', b em '$t1' e sua soma em '$t2'
li $t0, 54
li $t1, 45
add $t2, $t0, $t1

# Movendo o resultado para '$t4'
add $t4, $t2, $0

# Mostrando o texto
li $v0, 4
la $a0, texto
syscall

# Mostrando a soma
add $a0, $t4, $0
li $v0, 1
syscall