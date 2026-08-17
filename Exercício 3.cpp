/* Exercício 3*/
/* Dia 17/08/2026*/
/* Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%*/

#include<iostream>
using namespace std;

int main(){
	float salario = 0;
	float novo_salario = 0;
	
	cout << "Digite o valor do seu salario atual ";
	cin >> salario;
	
	novo_salario = salario * 1.25;
	cout << "Parabens o seu novo salario eh " << novo_salario;
	
	return 0;
}
