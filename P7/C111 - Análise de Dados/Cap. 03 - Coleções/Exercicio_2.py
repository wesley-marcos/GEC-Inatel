#Exercício 2

loja_a = {'S20', 'S20 Fe', 'S20+', 'S21 Ultra', 'Iphone 11', 'Iphone 12', 'S20'}
loja_b = {'S20 Fe', 'S20+', 'Iphone 11', 'Iphone 12'}

print(f'Quantidade de modelos disponíveis na Loja A = {loja_a.__len__()}')
print(f'Quantidade de modelos disponíveis na Loja B = {loja_b.__len__()}')
print(f'Quantidade de modelos disponíveis nas duas lojas = {loja_a & loja_b}')

