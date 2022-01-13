par = int(input("Escolha um numero positivo, eu lhe direi todos os numeros pares entre o 0 e o seu numero escolhido: "))
while par <= 0:
    par = int(input("Opaaa, o numero tem que ser positivo... Esacolha novamente: "))
num = 0
while num < par:
    num = num + 2 
    print(num)