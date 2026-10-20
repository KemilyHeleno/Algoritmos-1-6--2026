/* 19/10/2026 */
/* Atividade 1 */
/* Faça um algoritmo para calcular a tabuada de um número */

#include<iostream>
using namespace std;

int main(){
	int n, cont, calc;
	cout <<"Digite um nº: ";
	cin>> n;
	
	for (cont=0; cont<=10; cont++){
		calc = n*cont;
		cout << n << " * " << cont << " = " << calc << "\n";
	}
	return 0;
	
}
