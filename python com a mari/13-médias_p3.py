alun = int(input("Quantos alunos têm nessa turma?:  "))

while alun < 0:
     print("Como assim tem alunos negativos?")
     alun = int(input("Quantos alunos têm nessa turma?:  "))
     

menor = 10
maior = 0
div = 0
soma = 0
while div != alun: 
    div = div + 1 
    nota = float(input("qual a nota desse aluno?: "))
    soma += nota
    if  nota > maior: 
        maior = nota
    if nota < menor:
        menor = nota

print("a média =",soma/div, "a maior nota é", maior, "a menor nota é", menor)
