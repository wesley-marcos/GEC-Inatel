import numpy as np

#Importando o dataset "space.csv"
space = np.loadtxt("space.csv", delimiter=";", dtype=str, encoding="utf-8")

print('======================================= Exercício 1 =============================================')
mision_status = np.unique(space[1:, -1], axis=0)
print(mision_status)
soma = 0

"""for i in len(mision_status):
    if mision_status == "Success":
        soma += 1
porcentagem = soma / len(mision_status)

print(f'Porcentagem das missões com sucesso é {porcentagem}')"""

print('======================================= Exercício 2 =============================================')
print(f'')
print()

print('======================================= Exercício 3 =============================================')
print(f'')
print()

print('======================================= Exercício 4 =============================================')
print(f'')
print()

print('======================================= Exercício 5 =============================================')
print(f'')
print()