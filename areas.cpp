#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

int main (){
cout << fixed << setprecision(1); 
int nu;
cout << endl;
cout << " Este programa pode calcular a area das seguintes formas: " << endl;
cout << endl;
cout << " 1. Area do triangulo retangulo;" << endl;
cout << " 2. Area do circulo; " << endl;
cout << " 3. Area do trpezio; " << endl;
cout << " 4. Area do quadrado; " << endl;
cout << " 5. Area do retangulo; " << endl;
cout << endl;
cout << " insira o numero de qual forma vc quer calcular a area:  ";
cin >> nu; 
cout << endl;

if (nu == 1){
	float a, b, c; 
	cout << " ***Area do trinagulo retangulo***" << endl;
	cout << endl;
	cout <<" insira o valor dos catetos: " << endl;
	cout << " a: "; cin >> a; 
	cout << " b: "; cin >> b;
	cout << endl;
	float A = (a * b)/2;
	cout << " Area = " << A << endl;
	
}
 

return 0;	
}

