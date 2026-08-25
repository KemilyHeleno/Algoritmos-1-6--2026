/* 24/08/2026 */
/* Aula 3 */
/* 	Faça um algoritmo que leia a nota de um aluno e exiba o conceito,
	conforme as regras a seguir:
	de 0,0 a 2,9 - Conceito E
	de 3,0 a 4,9 - Conceito D
	de 5,0 a 6,9 - Conceito C
	de 7,0 a 8,9 - Conceito B
	de 9,0 a 10 - Conceito A
	
	OBS.: Todos os exercícios devem ser resolvidos utilizando operadores lógicos */
	
#include<iostream>
using namespace std;
 int main() {
 	float nota_aluno;
 	char escolha;
 	
 	do{
	 	do{	 	
			cout << "Digite a nota do aluno (de zero a dez)  ";
			cin >> nota_aluno;
		
			if (nota_aluno < 0 || nota_aluno > 10){
				cout << "Nota incorreta, digite novamente\n\n";
			}
 	
		} while (nota_aluno < 0 || nota_aluno > 10);
	
		if (nota_aluno >= 0  && nota_aluno <= 2.9){
			cout << "O conceito do aluno foi E"; 
 			
		} else if (nota_aluno >=3 && nota_aluno <= 4.9) {
			cout << "O conceito do aluno foi D"; 
		
		} else if (nota_aluno >=5 && nota_aluno <=6.9){
			cout << "O conceito do aluno foi C";
			
		} else if (nota_aluno >= 7 && nota_aluno <=7.9){
			cout << "O conceito do aluno foi B";
			
		} else if (nota_aluno >= 9 && nota_aluno <= 10) {
			cout << "O conceito do aluno foi A";
				
		}
		
		cout << "\n\n Deseja continuar? (S/N) \n";
		cin >> escolha;
			
	} while (escolha == 'S' || escolha == 's');
	
	return 0;
 }
