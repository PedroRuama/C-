

print("vamos calcular como esta o seu indice de massa corpora")
pes = float(input("Insira seu peso: "))
alt = float(input("Insira sua altura: "))

imc = pes/(alt*alt)

if imc < 19:
    print("ABAIXO DO IDEAL", imc)

elif imc >= 19 and imc <= 25: 
    print("PESO IDEAL", imc)

elif imc >= 26 and imc <= 30:
     print("SOBREPESO", imc)

elif imc >= 31 and imc <= 35:
    print("OBESIDADE I", imc)

elif imc >= 36 and imc <= 40:
    print("OBESIDADE II", imc)

elif imc > 40:
    print("OBESIDADE MORBIDA", imc)