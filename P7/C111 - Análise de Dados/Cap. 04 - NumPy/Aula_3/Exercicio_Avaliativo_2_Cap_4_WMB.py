import numpy as np

print('======================================= Exercício 1 =============================================')
np.random.seed(5)
array_1 = np.random.randn(10)
array_2 = array_1 * 100
array_3 = array_2
print(f'Array 1 = {array_1} \n')
print(f'Array 1 * 100 = {array_2} \n')
print(f'Array 1 * 100 (Parte inteira) = {array_2.astype(int)}')
print()

print('======================================= Exercício 2 =============================================')
np.random.seed(10)
mtz_1 = np.random.randint(1, 51, 16).reshape(4, 4)
print(f'Matriz 4x4 com números entre 1 e 50 = \n {mtz_1}')
print()

print('======================================= Exercício 3 =============================================')
media_colunas = mtz_1.mean(axis=0)
media_linhas = mtz_1.mean(axis=1)
maior_colunas = max(media_colunas)
maior_linhas = max(media_linhas)
print(f'Média das colunas da matriz do "Exercício 2" = {media_colunas} \n')
print(f'Média das linhas da matriz do "Exercício 2" = {media_linhas} \n')
print(f'Maior valor das médias das colunas da matriz do "Exercício 2" = {maior_colunas} \n')
print(f'Maior valor das médias das linhas da matriz do "Exercício 2" = {maior_linhas} \n')

print('======================================= Exercício 4 =============================================')
numero, quantidade = np.unique(mtz_1, return_counts=True)
print(f"Números da matriz do 'Exercício' 2 e a respectiva quantidade de aparições: \n{np.unique(mtz_1,return_counts=True)} ")
print(f'Números que aparecem duas vezes = {numero[quantidade == 2]}')
