#-*-coding: utf-8 -*-
#Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em cm). Calcular e imprimir o seguinte:
#− Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor da sua área
#− Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área
#− Se o número de lados for igual a 5 escrever PENTÁGONO.

lado = int(input("Insira o numero de lados " ))

if (lado == 3):

  base = int(input("Insira a medida do lado "))
  altura = int(input("Insira a medida da altura "))
  areT = (base * altura) / 2
  print("é um TRIâNGULO de área:")
  print(areT)
else:
  if (lado == 4):

    base = int(input("Insira a medida do lado "))
    areQ = base * base 

    print("é um QUADRADO de área:")
    print(areQ)
  else:
    if(lado == 5):
      print ("é um PENTÁGONO")

    else:
      if (lado >= 6):
        print("poligono com mais de cinco lados...")
      else:
        if(lado <= 2):
          print("é necessario ter mais de 2 lados para ser um poligono.")
    
# %%

# %%

# %%
