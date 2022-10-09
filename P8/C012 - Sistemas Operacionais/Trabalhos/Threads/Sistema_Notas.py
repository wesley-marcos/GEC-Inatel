import numpy as np
import threading
from threading import Thread
import time
import matplotlib.pyplot as plt

# Importando o dataset com as notas dos alunos
notas = np.loadtxt("data.csv", delimiter=";", dtype=str, encoding="utf-8")

# Importando a quantidade de alunos
n = np.array(notas[1:, 0]).astype(np.int8)

# Importando as notas referntes à NP1 separadamente
prova1 = np.array(notas[1:, 1]).astype(np.int8)
kahoot1 = np.array(notas[1:, 2]).astype(np.int8)
trabalho1 = np.array(notas[1:, 3]).astype(np.int8)
trabalho2 = np.array(notas[1:, 4]).astype(np.int8)
lista1 = np.array(notas[1:, 5]).astype(np.int8)
lista2 = np.array(notas[1:, 6]).astype(np.int8)
lista3 = np.array(notas[1:, 7]).astype(np.int8)
lista4 = np.array(notas[1:, 8]).astype(np.int8)
lista5 = np.array(notas[1:, 9]).astype(np.int8)

# Importando as notas referntes à NP2 separadamente
prova2 = np.array(notas[1:, 10]).astype(np.int8)
kahoot2 = np.array(notas[1:, 11]).astype(np.int8)
trabalho3 = np.array(notas[1:, 12]).astype(np.int8)
trabalho4 = np.array(notas[1:, 13]).astype(np.int8)
lista6 = np.array(notas[1:, 14]).astype(np.int8)
lista7 = np.array(notas[1:, 15]).astype(np.int8)
lista8 = np.array(notas[1:, 16]).astype(np.int8)
seminario = np.array(notas[1:, 17]).astype(np.int8)

# Definição de variáveis úteis
media = np.array(notas[1:, 18]).astype(np.int8)
media_total = (sum(media))/25
aprovado = 0
reprovado = 0
np3 = 0
status = []
np1 = []
np2 = []


print('\n========================================== C012 ==========================================\n')

# Thread 1
def thread1():
   
    for i in n:
        print(f'NP1 do aluno {i + 1}.')
        soma_aux = prova1[i] + kahoot1[i] + trabalho1[i] + trabalho2[i] + lista1[i] + lista2[i] + lista3[i] + lista4[i] + lista5[i]
        np1.append(soma_aux)
        print(soma_aux)


# Thread 2
def thread2():

    for i in n:
        time.sleep(0.1)
        print(f'NP2 do aluno {i + 1}.')
        soma_aux_2 = prova2[i] + kahoot2[i] + trabalho3[i] + trabalho4[i] + lista6[i] + lista7[i] + lista8[i] + seminario[i]
        np2.append(soma_aux_2)
        print(soma_aux_2)
       

# Chamando as threads
threading.Thread(target=thread1).start()
threading.Thread(target=thread2).start()
time.sleep(2.8)

# Gerando os dados para a Análise de Dados
for i in media:

    if i >= 60:
        status.append('Aprovado')
        aprovado += 1
    elif 30 <= i < 59:
        status.append('NP3')
        np3 += 1
    else: 
        status.append('Reprovado')
        reprovado += 1

aprovado = (aprovado / 25) * 100
reprovado = (reprovado / 25) * 100
np3 = (np3 / 25) * 100

print('\n========================================== NOTAS INDIVIDUAIS ==========================================\n')

# Mostrando os dados finais
for i in n:

    print(f'As notas do aluno {i + 1} foram:   NP1 = {np1[i]}    NP2 = {np2[i]}    Média = {media[i]}    Situação = {status[i]}.')
        



print('\n========================================== DADOS FINAIS ==========================================\n')
print(f'A média da turma foi de {media_total:.1f}')
print(f'O percentual de aprovação foi de {aprovado:.1f} %')
print(f'O percentual de reprovação foi de {reprovado:.1f} %')
print(f'O percentual de recuperação (NP3) foi de {np3:.1f} %')
print()

# Plotano o gráfico
plt.pie(
    x = [aprovado, reprovado, np3], 
    labels = ['Aprovado', 'Reprovado', 'NP3'], 
    shadow = True, 
    explode = [0, 0, 0], autopct = '%1.1f%%')

plt.title('Situção dos Alunos de C012')
plt.show()