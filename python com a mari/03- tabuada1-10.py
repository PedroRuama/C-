num = int(input("Opa, tudo bom? escolha um número de 1 a 10 aqui e eu te darei a tabuada deste número:  "))

while num < 1 or num > 10: 
    print("ei, eu falei que o numero tem que ser de 1 a 10!") 
    print()
    num = int(input('tenta colocar novamente, mas lembre-se, deve ser de 1 a 10: '))

x = 0
while x < 10 :
     x = x + 1
     rs = num * x
     print(num, "x", x, "=", rs)
     

print( "Aqui esta a tabuada de número", num, "que vc escolheu :)")