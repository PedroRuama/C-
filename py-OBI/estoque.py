X, Y = input().split()
M = int(X) #Linas
N = int(Y) #Colunas

iv = []
# jv[]
stop = 1

while stop <= M:
    
    l = input().split()
    iv.append(l)
    stop = stop + 1
    
#.split
vendas = 0
pedidos = int(input())
while pedidos > 0:
    t1, t2 = input().split()
    i = int(t1) - 1 #Linha
    j = int(t2) - 1 #Colunas
    iv[i][j] = int(iv[i][j])

    if iv[i][j] > 0:
        iv[i][j] = iv[i][j] - 1
        vendas = vendas + 1
    else:
        vendas = vendas + 0  
    # print(jv[t2])
    pedidos = pedidos - 1
print(vendas)
