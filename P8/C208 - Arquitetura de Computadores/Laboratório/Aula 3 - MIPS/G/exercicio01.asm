# Exerc�cio 1 - Opera��es aritm�ticas

# Identifica o endere�amento de mem�ria 
.data

# Diretiva que identifica a posi��o de mem�ria
.text

# Letra - a
  #X=2+5 --> Tipo R
  #A=$t1=2
  #B=$t2=5
  #X=$t3=7
  #X=A+B-> $t3=$t1+$t2
  
  #Load Immediate 
  li $t1,2
  li $t2,5
  
  # Opera��o
  add $t3,$t1,$t2
   
  # Letra - b
  #x=89 + 20 --> TIPO I
  #A=$s0=89
  #B=20
  #X=$s1
  
  li $s0,89 #s0=89
  # SOMA - TIPO I
  addi $s1,$s0,20


  # Letra-c
  #Subtra��o 2� Maneira
  li $s6,1234
  addi $s7,$s6,-84
  
  #Letra-d
  li $t8,70
  addi $t9,$t8,-24
  
  #Letra-e
  li $k0,20
  addi $k1,$k0,-150
  
  