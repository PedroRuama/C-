continuar = True 
while continuar:

    print("escolha duas notas escolares para que se crie uma média entre elas: ")

    n1 = int(input("1° nota: "))
    n2 = int(input("2° nota: "))

    m = (n1 + n2)/2

    print( "a média de", n1, "e", n2, "é igual a", m)

    resposta = input("deseja continuar sim ou não? ")
    continuar = resposta == 'sim'
   
print("ok então")

