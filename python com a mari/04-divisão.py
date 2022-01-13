print("Vc denovo? ta bem, escolha dois numeros, vamos dividir eles, trateos como uma fração...")
n = int(input("escolha o dividendo/numerador: "))
d = int(input("escolha o divisor/denominador: "))

print()

while d == 0:
    print('OPAAA! Não é possivel dividir nada por 0, vc não sabia? ')
    d = int(input('tente novamente inserir o divisor/denominador, mas lembre-se, não é possivel dividir por 0...: ')) 
print()


print (n,"÷", d, "=", n/d)