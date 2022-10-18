# Algoritmo Preemptivo Round Robin (RR)

# Função que calculará o tempo médio de espera do processo
def tempo_medio(lista_processos, burst, q):

    # Pegando o número de processos
    num_processos = len(lista_processos)

    # Pegando o valor de quantum
    quantum = q

    # Variável para ajudar no cálculo do tempo médio
    time = 0

    # Pegando os processos
    processos = lista_processos.copy()

    # Pegando os burst-times
    burst_time = burst.copy()

    # Variável que guardará a soma de todos os processos
    soma_total = 0

    # Calculando o tempo médio de espera
    while(1):

        controle = True

        for i in range(num_processos):

            if burst_time[i] > 0:
                controle = False

                if burst_time[i] > quantum:

                    burst_time[i] -= quantum
                    time += quantum

                else:

                    time += burst_time[i]
                    processos[i] = time - burst[i]
                    burst_time[i] = 0

        if controle:
            break

    for i in range(0, num_processos):
        soma_total += processos[i]

    media = soma_total / num_processos
    print(f'Número processos: {num_processos}')
    print(f'TEPs: {processos}')
    print(f'Tempo média: {media:.2f} ms')


# MAIN
if __name__ == "__main__":

    lista_processos = []
    burst_time = []

    controlador = 1

    # Entrada de Dados
    while controlador != 0:

        processo = int(input('Processo: '))
        lista_processos.append(processo)

        burst = int(input('Burst Time: '))
        burst_time.append(burst)

        controlador = int(input('0 - Sair, 1 - Inserir outro Processo: '))
    
    quantum = int(input('Quantum: '))

    # Mostrar os processos e seus burst-times
    print(f'\n========================= DADOS =========================\n')
    print('Processo '+ '  Burst Time')
    for i in range(len(lista_processos)):
        print(f'''{lista_processos[i]}              {burst_time[i]}''')
    
    print(f'\nQuantum: {quantum}\n')
    tempo_medio(lista_processos,burst_time, quantum)