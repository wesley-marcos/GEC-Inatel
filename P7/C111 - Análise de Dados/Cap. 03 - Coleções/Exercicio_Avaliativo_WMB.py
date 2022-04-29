
print("========================= Exercício 1 =====================================")
top_5 = ['Chealse', 'PSG', 'Real Madrid', 'Barcelona', 'Bayern']

#A)
print(f'A) Os 3 primeiros colocados são = {top_5[0:3]}')

#B)
print(f'B) Os 2 últimos colocados são = {top_5[-2:]}')

#C)
print(f'C) Ordem alfabética = {sorted(top_5)}')

#D)
print(f'D) Barcelona está na {top_5.index("Barcelona")}ª posição.')
print()
print()

print("========================= Exercício 2 =====================================")
loja_a = {'S20', 'S20 Fe', 'S20+', 'S21 Ultra', 'Iphone 11', 'Iphone 12', 'S20'}
loja_b = {'S20 Fe', 'S20+', 'Iphone 11', 'Iphone 12', 'Moto G100'}
lojas = loja_a & loja_b

print(f'Quantidade de modelos disponíveis na Loja A = {loja_a.__len__()}')
print(f'Modelos disponíveis na Loja A = {loja_a}')
print(f'Quantidade de modelos disponíveis na Loja B = {loja_b.__len__()}')
print(f'Modelos disponíveis na Loja B = {loja_b}')
print(f'Quantidade de modelos disponíveis nas duas lojas = {lojas.__len__()}')
print(f'Modelos disponíveis nas duas lojas = {lojas}')
print()
print()

print("========================= Exercício 3 =====================================")
nome = input("Entre com o nome = ")
media = float(input("Entre com a média = "))
aluno = {'nome': nome, 'media': media}

if aluno['media'] >= 60:
    aluno['situacao'] = 'AP'

else:
    aluno['situacao'] = 'RP'

for i, k in aluno.items():
    print(f'{i.upper()} é {k}')