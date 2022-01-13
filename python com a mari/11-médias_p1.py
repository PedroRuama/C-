alun = int(input("Quantos alunos têm nessa turma?:  "))

while alun < 0:
     print("Como assim tem alunos negativos?")
     alun = int(input("Quantos alunos têm nessa turma?:  "))

div = 0
soma = 0
while div != alun: 
    soma += float(input("qual a nota desse aluno?: ")) 
    div = div + 1  
    
print("A média =", soma/div)
