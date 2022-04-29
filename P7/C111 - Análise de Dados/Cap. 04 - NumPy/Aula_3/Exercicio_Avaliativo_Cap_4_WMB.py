import numpy as np

print('======================================= Exercício 1 =============================================')
array_1 = np.linspace(0, 1, 21)
print(f'Array Linearmente Espaçado com 21 posições: \n {array_1}')
print()

print('======================================= Exercício 2 =============================================')
array_2 = np.arange(0, 51, 2)
array_3 = np.arange(100, 49, -2)
array_2_3 = np.concatenate((array_2, array_3))
print(f'Array 2 = {array_2}')
print(f'Array 3 = {array_3}')
print(f'Array 2 + Array 3: ')
print(sorted(array_2_3))
print()

print('======================================= Exercício 3 =============================================')
print(f'Array 2 + Array 3 invertido: \n{np.flip(np.sort(array_2_3))}')
print()

print('======================================= Exercício 4 =============================================')
mtz_1 = np.array([[1, 1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1]])
dimension = mtz_1.shape
print(f'Matriz {dimension[0]} x {dimension[1]}: \n {mtz_1}')
mtz_1 = mtz_1.reshape(1,12)
print()
print(f'Matriz transformada em 1-D = {mtz_1}')
print()

print('======================================= Exercício 5 =============================================')
mtz_2 = np.array([[1, 2, 3, 4, 5], [1, 3, 5, 7, 9], [2, 4, 6, 8, 10]])
dimensao = mtz_2.shape

if((dimensao[0] * dimensao[1])%2 == 0):
    print(f'A matriz com dimensões {dimensao} pode se tornar um vetor com um número par de elementos, \n'
          f'pois {dimensao[0]} * {dimensao[1]} = {dimensao[0] * dimensao[1]}, que é um número par!')
else:
    print(f'A matriz com dimensões {dimensao} pode se tornar um vetor com um número ímpar de elementos, \n'
          f'pois {dimensao[0]} * {dimensao[1]} = {dimensao[0] * dimensao[1]}, que é um número ímpar!')