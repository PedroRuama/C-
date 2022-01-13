#include <iostream>
#include <iomanip>

using namespace std;

int main (){

	cout << "Este programa compila todas atividades propostas" << endl;
	cout << "Selecione qual atividade deseja executar digitando o numero da mesma:" << endl;
		
	int dnv = 1;
	while (dnv == 1){
		
		int at;
		cout << "" << endl;
		cout << "" << endl;
		cout << "0.  Converter Reais (R$) em Dolares ($)." << endl;
		cout << "" << endl;
		cout << "1.  Imprimir a tabuada de qualquer numero n." << endl;
		cout << "" << endl;
		cout << "2.  Calcular IMC. " << endl;
		cout << "" << endl;
		cout << "3.  Ler numero e exibir mensagem dizendo se e par ou impar. " << endl;
		cout << "" << endl;
		cout << "4.  Dados 3 valores quaisquer (a, b e c) representando as medidas dos lados de um triangulo, faca um algoritmo" << endl;
		cout << " para descobrir se formam ou nao um triangulo, se for triangulo qual seria: isosceles, escaleno ou equilatero." << endl;
		cout << "" << endl;
		cout << "5.  Inserir 3 numeros e exibir o maior deles. " << endl;
		cout << "" << endl;
		cout << "6.  Montar programa solicitando descricao do produto, preço e % de desconto, exibir preço final com o desconto." << endl;
		cout << "" << endl;
		cout << "7.  Ler a idade de uma pessoa e informar a sua classe eleitoral: Menor, Opcional votar, Obrigatorio ou Dispensado." << endl;
		cout << "" << endl;
		cout << "8.  Solicitar salario, prestação. Se prestação for maior que 20% do salário, imprimir: Empréstimo não pode ser concedido." << endl;
		cout << "Senão imprimir Empréstimo pode ser concedido." << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "insira o numero de qual deseja executar: ";
		cin >> at; 
		
	
		while (at > 8){
	 	cout << "insira um valor valido:";	
		 cin >> at; 
		}
		
		cout << "" << endl;
		cout << "" << endl;	
		
		if (at == 0){
			float reais, cotacao, conversao;
			
			cout << "Esse programa converte reais em dolares" << endl;
			
			cout << "quantos reais vc quer converter?" << endl;
			cin >>reais;
			
			cout << "qual o valor da cotacao do dolar atualmente?" << endl;
			cin >>cotacao;
			
				cout<< fixed << setprecision(1);
			conversao = reais/cotacao;
			cout <<"seus " << reais <<" reias, equivalem a "<< conversao << " dolares." <<endl;
		}
		
		if (at == 1){
			float num; 

			cout <<"Escolha um numero para ser exibido sua tabuada"<< endl;
			cin >> num;
			
			int i = 1;
			while ( i <= 10){
				
				cout << num << "x" << i << " = " << num * i << endl;
				i = i + 1;  
			}
		}
		
		if (at == 2){
			float peso, alt;
	
			cout << "Insira seu peso (em Kg): " << endl;
			cin >> peso;
			while (peso <0) {
				cout << "Insira um peso valido: " << endl;
				cin >> peso;
			}
			
			cout << "Insira sua altura (em metros): " << endl;
			cin >> alt;
			while (alt < 0) {
				cout << "Insira uma altura valida: " << endl;
				cin >> alt;
			}
			
			
			float imc = peso / (alt * alt);
			cout<< fixed << setprecision(1);
			cout << "O seu IMC e " << imc;
			
			if (imc < 19) {
			    cout << " abaixo do peso ideal" << endl;
			}
			
			if (imc >= 19 and imc <= 25){
			    cout << " no peso ideal" << endl; 
			}
			if (imc > 25 and imc <= 30){
				cout << " em sobrepeso" << endl;
			}
			if (imc > 30 and imc <= 35){
			    cout << " em obesidade I" << endl;
			}
			if (imc > 35 and imc <= 40){
				cout << " em obesidade II" << endl;
			}
			if (imc > 40){
			    cout << " em obesidade morbida" << endl;
			}
		}
		
		if (at == 3){
			int num;
	
			cout << "Insira um numero para verificar se ele e impar ou par: " << endl;
			cin >> num;
			
			if (num % 2 == 0) {
				cout << "O numero " << num << " e par";
			}
			else {
				cout << "O numero " << num << " e impar";
			}
		}
		
		if (at == 4){
			float a, b, c;

			cout << "Insira o valor dos lados desse triangulo:" << endl;
			cout << "a: ";
			cin >> a;
			cout << "b: ";
			cin >> b;
			cout << "c: ";
			cin >> c;
			
			while (a>b+c or b>c+a or c>a+b){
				cout << "Nao e possivel formar um triangulo com as essas medidas de lado." << endl;
				cout << "Por favor insira novamente os lados:  " << endl;
				cout << "a: ";
				cin >> a;
				cout << "b: ";
				cin >> b;
				cout << "c: ";
				cin >> c;
			} 
			
			cout << "o triangulo formado e um Triangulo ";
			
			if (a == b and a == c){
				cout << "Equilatero " << endl;
			} 
			
			if (a == b and a != c or b == c and b != a or a == c and b != c){
				cout << "Isoceles" << endl;
			}
			
			if (a != b and b != c and a != c){
				cout << "Escaleno " << endl;
			}
			
		}
		
		if (at == 5){
			
			float a, b, c;
			cout << "insira o valor de tres numeros (a, b, c) e esse programa qual e o maior valor:" << endl;
			cout << "a: ";
			cin >> a;
			cout << "b: ";
			cin >> b;
			cout << "c: ";
			cin >> c;
			
			if (a > b and a > c) {
				cout << "o maior e o valor a (" << a << ")" << endl;
			}
			
			if (b > a and b > c) {
				cout << "o maior e o valor b (" << b << ")" << endl;
			}
			
			if (c > b and c > a) {
				cout << "o maior e o valor a (" << c << ")" << endl;
				
			}
			
			
			 
		}
		
		if (at == 6){
				
	
			float pri, por, dis, total;
		
			cout << "Insira o preco do produto: " << endl;
			cin >> pri;
			while (pri < 0) {
				cout << "Insira um preco valido: " << endl;
				cin >> pri;
			}
			
			cout << "Insira quanto % de desconto: " << endl;
			cin >> por;
			while (por < 0) {
				cout << "Insira um desconto valido: " << endl;
				cin >> por;
			}
			
			dis = (pri / 100) * por;
			
			total = pri - dis;
			
			cout << "O preco final com desconto e R$ " << total;
	
		}
		
		if (at == 7){
			int years;

			cout << "Insiraa sua idade para saber sua idade eleitoral:" << endl;
			cin >> years;
				
			while (years < 0) {
				cout << "Insira um valor valido." << endl;
				cin >> years;	
			}	
			
			if (years < 16) {
				cout << "menor de idade" << endl;
			}
				
			if (years == 16 or years == 17 ) {
					cout << "Voto opicional" << endl;
			}
				
			if (years >= 18 and years < 70){
					cout << "Voto obrigatorio" << endl;
			}
				
			if (years >= 70){
				
				cout << "Dispensado da  vortação" << endl;
			}
		}
		
		if (at == 8){	
			float sal, em, pre, i, x;
	
			cout << "insira qual o valor do seu salario: ";
			cin >> sal; 
			cout << "insira o valor do emprestimo: ";
			cin >> em; 
			cout << "insira em quantas parcelas pagara o emprestimo: ";
			cin >> pre ; 
			
			i = em / pre;
			float por = 0;
			por = sal * 0.2;
				
			while (i > por){
				int x;
				cout <<"O emprestimo nao pde ser concedido pois o valor da parcela e maior que 20% sde seu salario." << endl;
				cout << "" << endl;
				cout << "Por favor insira em quantas parcelas pagara o emprestimo novamente ou insira um novo valor:  ";
				cout << "insira 1 para alterar o valor do emprestimo ou insira 2 para alterar a quantidade de parcelas ";
				cin >> x;
						
				if (x == 1){
					cout << "insira o valor do emprestimo: ";
					cin >> em; 	
				}
				
				if (x == 2){
					cout << "insira em quantas parcelas pagara o emprestimo: ";
					cin >> pre; 
				}
				
				i = em / pre;
			}		
			
			if (i < por){
				cout << endl;
				cout << "O emprestimo pode ser concedido com sucesso." << endl;
				
			}	
					
		}
		
		cout << "" << endl;
		cout << "" << endl;
		cout << "Deseja selecionar outra atividade? digite 1 para exibir a lista de atividades novamente ou digite qualuqer outra tecla para encerrar: ";
		cin >> dnv;
		cout << "" << endl;
}
	return 0;


}
