/* 14/09/2026 */
/* Aula 5 */
//Lista de exercícios
/* 	Exercício 1 - Escreva um programa que leia duas variáveis inteiras e troque o conteúdo entre elas */
	
#include<iostream>
using namespace std;
 int main() {
 	int valor1, valor2, aux;
 	cout << "Digite o valor 1  ";
 	cin >> valor1;
	cout << "Digite o valor 2  ";
	cin >> valor2;
	
	aux = valor1;
	valor1 = valor2;
	valor2 = aux;
	
	cout << "\n\nvalor 1 = " << valor1;
	cout << "\nvalor 2 = " << valor2;
}
