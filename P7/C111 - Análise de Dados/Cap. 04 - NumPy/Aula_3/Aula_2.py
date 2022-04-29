# Aula 2 - NUMPY
import numpy as np

#NUMEROS ALEATÓRIOS
#Plantando a mesma semente de dados
np.random.seed(10)
#Subpacote random

#rand
#array_1 = np.random.rand(6)
#print(array_1)
#broacasting = multiplicar um escalar por um vetor (produto escalar)
#print(array_1 * 100)

#randint
array_2 = np.random.randint(1, 10, 15)
array_3 = np.random.randint(1, 10, 15)
print(f'Array 2 = {array_2}')
print(f'Array 3 = {array_3}')

#Operações básicas bit a bit nos arrays
print(f'Array 2 + Array 3 = {array_2+array_3}')
print(f'Array 2 * Array 3 = {array_2*array_3}')

#unique
print(np.unique(array_2, return_counts=True))

#Matriz 2-D
mtz = np.arange(1, 17, 1).reshape(4, 4)
print(f'Matriz 4x4 = \n{mtz}')

#soma dos elementos à nível de colunas
print(f'Soma das colunas = {mtz.sum(axis=0)}')

#soma dos elementos à nível de linhas
print(f'Soma das linhas = {mtz.sum(axis=1)}')

#soma dos elementos da coluna 'c'
print(f'Soma da coluna 0 = {mtz.sum(axis=0)[0]}')

#soma dos elementos da linha 'l'
print(f'Soma da linha 1 = {mtz.sum(axis=1)[1]}')