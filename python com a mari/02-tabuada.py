
num = int(input("Opa, tudo bom? escolha um número natural aqui e eu te darei a tabuada deste número:  "))

while num < 0: 
    print("ei, eu falei que o numero tem que ser natural, ou seja, positivo...") 
    print()
    num = int(input('insira novamente: '))

x = 0
while x < 10 :
     x = x + 1
     rs = num * x
     print(num, "x", x, "=", rs)
     

print( "Aqui esta a tabuada de número", num, "que vc escolheu")
      

