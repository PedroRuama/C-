from random import randint

ran = randint(0, 10)

print ('você tem 3 tentativas para acertar um numero gerado aleatoriamente entre 0 a 10, em cada tentaiva você não deve colocar o mesmo numero, pois o numero sorteado não muda ate o fim da partida, mas então bora lá')

print()

usr = int(input('insira o valor de 0 a 10:'))

# verifica se a tentativa é válida
while usr > 10 or usr < 0:
  print()
  print ('so vale numeros entre 0 a 10')

  usr = int(input('insira outro valor, de 0 a 10:'))

# tentativas restantes
tr = 2

while tr > 0 and usr != ran:
  tr = tr - 1
  print()
  usr = int(input('errou, insira novamente:'))

  while usr > 10 or usr < 0:
    print()
    print ('so vale numeros entre 0 a 10')
    usr = int(input('insira outro valor, de 0 a 10:'))

# porque o loop foi finalmente interrompido?
if usr == ran:
  print("um verdadeiro guru")
else:
  print("que pena")

print('o valor sorteado é ', ran)