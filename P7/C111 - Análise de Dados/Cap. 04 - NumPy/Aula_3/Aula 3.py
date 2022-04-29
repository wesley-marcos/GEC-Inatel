import numpy as np

'''
np.random.seed(10)
array = np.random.randint(0, 10, 15)
print(f'Array = {array}')

#Fazendo um slicing em array usando o copy(), para que não se altere o array original
array2 = array[0:4].copy()

#Alterando um elemento de array2
array2[0] = 100
print(f'Array 2 = {array2}')

#Trabalhando com sub-módulo NUMPY.CHAR
txt = "O Inatel é uma faculdade top demais!"
print(f'A palavra "faculdade" se encontra começa na posição {np.char.find(txt, "faculdade")}.')

'''

#Abrindo o dataset "Space.csv"
space = np.loadtxt("space.csv", delimiter=";", dtype=str, encoding="utf-8")
print()