#include <iostream>
#include <iomanip>


using namespace std; 

int main (){

/* Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.

Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima,
sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser 
apresentado com 1 dígitos após o ponto decimal.*/
	
	
 
float A, B, C; 
cout << " Este programa pode calcular a area de algumas formas" << endl;
cout << endl;
cout << " primeramente insara valores A, B e C" << endl;
cout << " A:";
cin >> A;
cout << " B:";
cin >> B;
cout << " C:";
cin >> C;

cout << endl;
cout << fixed << setprecision(1); 
cout << " a) a area do triangulo retangulo que tem A por base e C por altura, e = " << (A*C)/2 << endl;
cout << " b) a area do circulo de raio C. (pi = 3.14159), e  = " << 3.14159*(C*C) << endl;
cout << " c) a area do trapezio que tem A e B por bases e C por altura, e = "<< (A+B)/2 << endl;
cout << " d)a area do quadrado que tem lado B, e = "<< B*B << endl;
cout << " e) a area do retangulo que tem lados A e B, e = "<< A*B << endl;
cout << endl;
cout << endl;

int s = 1, end = 2;
cout << endl;

while ( end == 2){
cout << " Selecionar e definir os valores de alguma forma separadamente? "<<endl;
cout << " se sim digite 1: ";
cin >> s;
cout << endl;
cout << endl;

	if (s == 1){
		int f;
		cout << " escolha qual forma vc deseja calcular a area especifica: " << endl; 
		cout << endl;
		cout << " 1. A area do triangulo retangulo "<< endl;
		cout << " 2. A area do circulo" << endl;
		cout << " 3. A area do trapezio"<< endl;
		cout << " 4. A area do quadrado "<< endl;
		cout << " 5. A area do retangulo"<< endl;
		cout << endl;
		cout << "Selecione o numero de qual forma quer calcular a area: ";
		cin >> f;
		cout << endl;
		if (f == 1){
			float a, b;
			cout << "***Triangulo retangulo***" << endl;
			cout << endl;
			cout << " insira os valores dos catetos a e b:"<<endl;
			cout << " a: ";
			cin >> a;
			cout << " b: ";
			cin >> b;
			cout << endl;
			cout << "Area = " << (a*b)/2 << endl;			
		}
		
		else if (f == 2){
			cout << "***Circulo***" << endl;
			cout << endl;
			float r;
			cout << " insira o valor do raio do circulo: ";
			cin >> r;
			cout << endl;
			cout << "Area = " << 3.14159*(r*r) << endl;
			
			
		}
		else if (f == 3){
			float B, b, h;
			cout << "***Trapezio***" << endl;
			cout << endl;
			cout << "insira o valor do Besao (B): ";
			cin >> B;
			cout << "insira o valor do Besinho (b): ";
			cin >> b;
			cout << "insira o valor da Altura (h): ";
			cin >> h;
			cout << endl;
			cout << "Area = "<< h*(B+b)/2 <<endl;
			
		}
		
		
		else if (f == 4){ 
			float l;
			cout << "***Quadrado***" << endl;
			cout << " insira o valor do lado: ";
			cin >> l;
			cout << endl;
			cout << "Area = "<< l*l << endl;
		}
		else if (f == 5){
			cout << "***Retangulo***" << endl;
			float l1, l2;
			cout << " insira o valor do lado menor: ";
			cin >> l1;
			cout << " insira o valor do lado maior: ";
			cin >> l2;
			cout << endl;
			cout << "Area = "<< l1*l2 << endl;
		}
		
}
cout << endl;
cout << endl;
cout << "deseja encerrar o programa? se sim digite 1, se nao 2:  ";
cin >> end;
cout << endl;
}
  


return 0;	
}

