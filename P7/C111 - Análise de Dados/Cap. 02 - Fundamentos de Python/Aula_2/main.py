# Exercícios Propostos

#================= Exercício 1 =================
nome = input("Entre com seu nome = ")
print(f'Nome com letras maiúsculas = {nome.upper()}')
print(f'Nome com letras minúsculas = {nome.lower()}')
print(f'Nome "{nome}" tem {len(nome)} letras.')
print(f'Trocando o nome = {nome.replace("Borges", "do Inatel")}')

#================= Exercício 2 =================
numero = int(input("Entre com um número: "))
limite_inferior = int(input("Entre com o limite inferior: "))
limite_superior = int(input("Entre com o limite superior: "))

for num in range(limite_inferior, limite_superior, 1):
    print(numero * num)

#================= Exercício 3 =================
sexo = input("Qual seu sexo? ('M' para Masculino e 'F' para Feminino) = ")

while sexo != "M" and sexo != "F":
    print("Sexo Inválido!")
    sexo = input("Qual seu sexo? ('M' para Masculino e 'F' para Feminino) = ")