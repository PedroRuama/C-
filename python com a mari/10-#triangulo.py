cate = int(input("Escolha valor do cateto do triangulo (tem que ser positivo hein): "))
while cate < 0: 
    cate = int(input("Opaa, tenho certeza que disse que o numero tem que ser positivo... Escolha novamente: "))
lin = 1
while  lin <= cate:
    print(" #" * lin)
    lin = lin + 1 