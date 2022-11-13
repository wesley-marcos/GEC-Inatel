'''
    Feito por: Pedro Gabriel Garcia Ribeiro Balestra (GEC - 1551)
               Wesley Marcos Borges (GEC - 1651)
               Disciplina: C012 - Sistemas Operacionais
               Ano: 2022

'''

from threading import Semaphore, Thread
from time import sleep

# Número máximo de carros à serem lavados ao mesmo tempo
lavadores_disponiveis = Semaphore(4)

# Lista com os carros à serem lavados
carros = ['Gol', 'Fox', 'Civic', 'Fusca', 'Touro', 'Eco', 'Kwid', 'Ferrari', 'Audi', 'HRV']

# Função que printará o estado de Lavagem
def view_log(number: int, carros: list):

    with lavadores_disponiveis:

        print(f'O carro {carros[number]} está sendo lavado!')
        sleep(3)   
              

# Função que printará o estado de Secagem     
def view_log2(number: int, carros: list):

    with lavadores_disponiveis:

        print(f'O carro {carros[number]} está sendo seco!')
        sleep(3)   
        

# Função que printará o estado de Finalização
def view_log3(number: int, carros: list):

    with lavadores_disponiveis:

        print(f'O carro {carros[number]} está sendo finalizado!')
        sleep(3)   
         

# Criando as 10 Threads e iniciando-as
for number in range(10):

    thread = Thread(target=view_log, args=[number, carros]).start()

    thread2 = Thread(target=view_log2, args=[number, carros]).start()

    thread3 = Thread(target=view_log3, args=[number, carros]).start()