# Algoritmo Não Preemptivo First Come First Served (FCFS)

# Função que calculará o tempo médio de espera do processo
def tempo_medio(lista_processos, burst_time):

    # Pegando o número de processos
    num_processos = len(lista_processos)

    # Pegando os processos
    processos = lista_processos

    # Variável que guardará a soma de todos os processos
    soma_total = 0

    # Calculando o tempo médio de espera
    for i in range(0, num_processos):

        if i == 0:
            processos[0] = 0

        else:
            processos[i] = processos[i - 1] + burst_time[i - 1]
    
        # Calculando a soma dos processos
        soma_total += processos[i]

    media = soma_total / num_processos
    print(f'\nNúmero processos: {num_processos}')
    print(f'TEPs: {processos}')
    print(f'Tempo média: {media} ms')


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
    

    # Mostrar os processos e seus burst-times
    print(f'\n========================= DADOS =========================\n')
    print('Processo '+ '  Burst Time')
    for i in range(len(lista_processos)):
        print(f'''{lista_processos[i]}          {burst_time[i]}''')
    
    tempo_medio(lista_processos,burst_time)