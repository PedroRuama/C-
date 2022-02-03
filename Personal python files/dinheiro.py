import math 

x = float(input("R$"))
x =  float("%.2f" % x)

cem = 0 
cinquenta = 0
vinte = 0
dez = 0 
cinco = 0
dois = 0 
um_r = 0
cinq_c = 0 
vintci = 0
dez_c = 0
cinc_c = 0
um_c = 0 


while x >= 100:
    x = x - 100
    cem = cem + 1 

while x >= 50:
    x = x - 50 
    cinquenta = cinquenta + 1 

while x >= 20: 
    x = x - 20 
    vinte = vinte + 1

while x >= 10:
    x = x - 10 
    dez = dez +1 

while x >= 5:
    x = x - 5 
    cinco = cinco + 1 

while x >= 2: 
    x = x -2 
    dois = dois +1 

while x >= 1 :
    x = x-1
    um_r = um_r+1

while x >= 0.50: 
    x = x-0.50
    cinq_c = cinq_c+1

while x>= 0.25:
    x = x - 0.25
    vintci = vintci + 1 

while x >= 0.10:
    x = x - 0.10
    dez_c = dez_c + 1

while x >= 0.05:
    x = x - 0.05
    cinc_c = cinc_c +1 

while x >= 0.01:
    x = x - 0.01
    um_c = um_c + 1
   
print( "NOTAS:")
print(cem, "nota(s) de R$ 100.00")
print(cinquenta, "nota(s) de R$ 50.00")
print(vinte,  "nota(s) de R$ 20.00")
print(dez, "nota(s) de R$ 10.00")
print(cinco, "nota(s) de R$ 5.00")
print(dois,  "nota(s) de R$ 2.00")
print()
print( "MOEDAS:") 
print(um_r, "moeda(s) de R$ 1.00")
print(cinq_c, "moeda(s) de R$ 0.50")
print(vintci, "moeda(s) de R$ 0.25")
print(dez_c, "moeda(s) de R$ 0.10")
print(cinc_c, "moeda(s) de R$ 0.05")
print(um_c, "moeda(s) de R$ 0.01")

