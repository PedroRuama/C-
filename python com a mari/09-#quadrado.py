lado = int(input("Escolha o numero do lado do quadrado (tem que ser positivo hein): "))

while lado < 0: 
    lado = int(input("Opaa, tenho certeza que disse que o numero tem que ser positivo... Escolha novamente: "))

lin = lado
while  lin > 0:
    print(" #" * lado)
    lin = lin - 1 