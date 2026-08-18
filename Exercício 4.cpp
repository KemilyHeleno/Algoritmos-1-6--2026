/* Exercício 4*/
/* Dia 17/08/2026*/
/* Faça um programa que leia a idade de uma pessoa e informe: "Maior de idade" se tiver 18 anos ou mais; "Menor de idade" caso contrário. */

#include<iostream>
using namespace std;

int main(){
	int idade;
	cout << "Digite a sua idade ";
	cin >> idade;
	
	if (idade <= 0){
		cout << "Idade incorreta, digite novamente ";
		cin >> idade;
	} else {
		
		if (idade < 18) {
			cout << "Menor de idade";
		} else {
			cout << "Maior de idade";
		}
	}
	return 0;	
}
