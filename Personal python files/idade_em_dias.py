""""
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos 
de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas 
um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída

400

1 ano(s)
1 mes(es)
5 dia(s)
 

800

2 ano(s)
2 mes(es)
10 dia(s)


30

0 ano(s)
1 mes(es)
0 dia(s)
"""
import math


d1 = int(input("insira uma quantidade de dias: "))

a = 0 
m = 0
d2 = 0

while d1 >= 365:
    d1 = d1 - 365
    a = a + 1
 
while d1 >= 30:
    d1 = d1 - 30
    m = m + 1

while d1 < 30 and d1 > 0:
    d1 = d1 - 1
    d2 = d2 + 1 



print(a, " ano(s)")
print(m, " mes(es)")
print(d2, " dia(s)")
