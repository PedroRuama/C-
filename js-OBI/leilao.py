N = int(input())
maior = 0

while N > 0:
    nome = input()
    lance = int(input())
    N = N - 1
    if lance >= maior and lance != maior:
        ganhador = nome
        maior = lance

print(ganhador)
print(maior)

   