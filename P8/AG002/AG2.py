# Importando as bibliotecas necessárias
import pymysql
import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.metrics import accuracy_score
from sklearn.ensemble import RandomForestClassifier
 
# Atribuindo a conexão ao banco SQL na variável 'con'
con = pymysql.connect(host='localhost', user='root', password='admin', database='statlog')

# Importando os dados do banco SQL com o Pandas
df = pd.read_sql_query("select * from germancredit", con, parse_dates=True)
print(df)

# Preparando os dados e definindo a porcentagem de teste e treino
X = df.iloc[:,1:-1].to_numpy()
y = df.iloc[:,-1:].T.to_numpy()[0]

test_size = 0.2
random_state = 0

X_train, X_test, y_train, y_test = train_test_split(
    X,
    y,
    test_size=test_size,
    random_state=random_state
)

print(f"\nTamanho X de treino: {X_train.shape}")
print(f"Tamanho X de teste: {X_test.shape}")
print(f"Tamanho y de treino: {y_train.shape}")
print(f"Tamanho y de teste: {y_test.shape}\n")

# Treinando o modelo
rf = RandomForestClassifier()
rf.fit(X_train, y_train)

# Fazendo a predição
rf_predict = rf.predict(X_test)

# Taxa de sucesso do Modelo
rf_score = accuracy_score(y_test, rf_predict)
print(f'O modelo está com eficácia de {rf_score}\n')

# Entrando com os dados do usuário 
Data = []       # Vetor que guardará os dados entrados pelo usuário
flag = True     # Flag para sair do while

print(f'================= ENTRADADA DE DADOS =================')

while flag:
    
    controle = True

    # Crítica de dados 'laufkont'
    x = int(input(f"Entre com o valor 'laufkont' (1 <= x <= 4): "))

    while x < 1 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'laufkont' (1 <= x <= 4): "))
    
    Data.append(x)

    # Crítica de dados 'laufzeit'
    x = int(input(f"Entre com o valor 'laufzeit': "))
    Data.append(x)
    
    # Crítica de dados 'moral'
    x = int(input(f"Entre com o valor 'moral' (0 <= x <= 4): "))

    while x < 0 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'moral' (0 <= x <= 4):"))
    
    Data.append(x)

    # Crítica de dados 'verw'
    x = int(input(f"Entre com o valor 'verw' (0 <= x <= 10): "))

    while x < 0 or x > 10:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'verw' (0 <= x <= 10):"))
    
    Data.append(x)

    # Crítica de dados 'hoehe'
    x = int(input(f"Entre com o valor 'hoehe': "))
    Data.append(x)

    # Crítica de dados 'sparkont'
    x = int(input(f"Entre com o valor 'sparkont' (1 <= x <= 5): "))

    while x < 1 or x > 5:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'sparkont' (1 <= x <= 5):"))
    
    Data.append(x)

    # Crítica de dados 'beszeit'
    x = int(input(f"Entre com o valor 'beszeit' (1 <= x <= 5): "))

    while x < 1 or x > 5:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'beszeit' (1 <= x <= 5):"))
    
    Data.append(x)

    # Crítica de dados 'rate'
    x = int(input(f"Entre com o valor 'rate' (1 <= x <= 4): "))

    while x < 1 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'rate' (1 <= x <= 4):"))
    
    Data.append(x)

    # Crítica de dados 'famges'
    x = int(input(f"Entre com o valor 'famges' (1 <= x <= 4): "))

    while x < 1 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'famges' (1 <= x <= 4):"))
    
    Data.append(x)

    # Crítica de dados 'buerge'
    x = int(input(f"Entre com o valor 'buerge' (1 <= x <= 3): "))

    while x < 1 or x > 3:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'buerge' (1 <= x <= 3):"))
    
    Data.append(x)

    # Crítica de dados 'wohnzeit'
    x = int(input(f"Entre com o valor 'wohnzeit' (1 <= x <= 4): "))

    while x < 1 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'wohnzeit' (1 <= x <= 4):"))
    
    Data.append(x)

    # Crítica de dados 'verm'
    x = int(input(f"Entre com o valor 'verm' (1 <= x <= 4): "))

    while x < 1 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'verm' (1 <= x <= 4):"))
    
    Data.append(x)

    # Crítica de dados 'alter'
    x = int(input(f"Entre com o valor 'alter': "))
    Data.append(x)

    # Crítica de dados 'weitkred'
    x = int(input(f"Entre com o valor 'weitkred' (1 <= x <= 3): "))

    while x < 1 or x > 3:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'weitkred' (1 <= x <= 3):"))
    
    Data.append(x)

    # Crítica de dados 'wohn'
    x = int(input(f"Entre com o valor 'wohn' (1 <= x <= 3): "))

    while x < 1 or x > 3:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'wohn' (1 <= x <= 3):"))
    
    Data.append(x)

    # Crítica de dados 'bishkred'
    x = int(input(f"Entre com o valor 'bishkred' (1 <= x <= 4): "))

    while x < 1 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'bishkred' (1 <= x <= 4):"))
    
    Data.append(x)

    # Crítica de dados 'beruf'
    x = int(input(f"Entre com o valor 'beruf' (1 <= x <= 4): "))

    while x < 1 or x > 4:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'beruf' (1 <= x <= 4):"))
    
    Data.append(x)

    # Crítica de dados 'pers'
    x = int(input(f"Entre com o valor 'pers' (1 <= x <= 2): "))

    while x < 1 or x > 2:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'pers' (1 <= x <= 2):"))
    
    Data.append(x)

    # Crítica de dados 'telef'
    x = int(input(f"Entre com o valor 'telef' (1 <= x <= 2): "))

    while x < 1 or x > 2:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'telef' (1 <= x <= 2):"))
    
    Data.append(x)

    # Crítica de dados 'gastarb'
    x = int(input(f"Entre com o valor 'gastarb' (1 <= x <= 2): "))

    while x < 1 or x > 2:

        x = int(input(f"Valor incorreto. Entre com o valor correto para 'gastarb' (1 <= x <= 2):"))
    
    Data.append(x)

    flag = False 
    
# Transformando para Numpy Array
Data = np.array(Data)

# Classificando os dados inseridos
results = rf.predict(Data.reshape(1, -1))

# Mostrando o risco de crédito
if results:
    print(f'\nO risco de crédito é BOM!')
else:
    print(f'\nO risco de crédito é RUIM!')