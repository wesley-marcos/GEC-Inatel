#Exercício 3

nome = input("Entre com o nome = ")
media = float(input("Entre com a média = "))
aluno = {'nome': nome, 'media': media}

if aluno['media'] >= 60:
    aluno['situacao'] = 'AP'

else:
    aluno['situacao'] = 'RP'

for i, k in aluno.items():
    print(f'{i.upper()} é {k}')