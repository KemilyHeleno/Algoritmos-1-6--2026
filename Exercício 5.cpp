/* Exercício 5*/
/* Dia 17/08/2026*/
/* Faça um programa que leia a média final de um aluno. 
Se a média for maior ou igual a 6,0 apresente: Aluno Aprovado. 
Caso contrário: Aluno Reprovado. */

#include<iostream>
using namespace std;

int main(){
	float nota, notas_somadas, media_final;
	
	for (int i=0; i<4; i++) {
		cout << "Digite a sua nota no bimestre ";
		cin >> nota;
		if (nota > 10 || nota <= 0){
			cout << "Nota INCORRETA, digite novamente";
			cin >> nota;
		} else {
			notas_somadas += nota;
		}
	}
	
	media_final = notas_somadas/4;
	cout << "Sua media final eh " << media_final;
	
	if (media_final < 6.0){
		cout << " Aluno Reprovado";
	} else {
		cout << " Aluno Aprovado";
	}
	
	return 0;
}
