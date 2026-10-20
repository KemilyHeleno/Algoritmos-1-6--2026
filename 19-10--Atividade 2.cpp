/* 19/10/2026 */
/* Atividade 2 */
/* Faça um programa que leia um número inteiro e realize a contagem regressiva de um número */

#include<iostream>
using namespace std;

int main(){
	int numero, cont;
	cout << "Digite um numero inteiro: ";
	cin >> numero;
	
	for (cont=numero; cont>=0; cont--){
		cout<< cont << "\n";
	}
}
