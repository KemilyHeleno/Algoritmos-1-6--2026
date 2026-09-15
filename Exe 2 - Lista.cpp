/* 14/09/2026 */
/* Aula 5 */
//Lista de exercícios
/* 	Exercício 2 - Desenvolva um programa C/C++ que leia as nota de um aluno e o seu respectivo tipo:
		* R -> Aluno Regular;
		* E -> Aluno em Regime Especial 
	O programa deve utilizar a estrutura de controle switch para identificar o tipo de aluno e calcular a média conforme as regras abaixo:
		a. Aluno Regular (R):
			* Informar as notas das duas provas (P1 e P2);
			* Informar as notas de duas listas de exercícios (L1 e L2);
			* Informar o fator de produtividade (FP) correspondente à frequência do aluno nas aulas;
			* Calcular a média;
			OBS: O calculo da média será: MEDIA = (((P1 + P2) /2) *0.5) + (((L1+L2) /2) *0.4) + (FP*0.1)
		b. Aluno em Regime Especial (E):
			* Informar as notas das duas provas (P1 e P2);
			* Calcular a média;
			OBS: O cálculo da média será: MEDIA = (P1 + P2) / 2.0
		c. Classificação Final
			O programa deve utilizar a estrutura de condicional if para verificar a média do aluno, conforme as regras abaixo:
				* Média maior ou igual a 6.0 -> Exibir mensagem "Aprovado"
				* Média entre 2.0 e 5.9 -> Exibir mensagem "Substitutiva"
				* Média inferior a 2.0 -> Exibir mensagem "Reprovado"
*/
	
#include<iostream>
using namespace std;
 int main() {
 	char tipo_aluno;
 	float P1, P2, L1, L2, FP, MEDIA;
 	
 	
 	do{
 		cout << "Qual o tipo de aluno(a)? \nDigite R para Aluno Regular ou E para aluno em Regime Especial\n";
 		cin >> tipo_aluno;
 		
 		if (tipo_aluno != 'R' && tipo_aluno != 'r' && tipo_aluno != 'E' && tipo_aluno != 'e') { // se for digitado algo diferente das opções solicitadas, ele apresenta o erro na tela
 			cout << "\n\nResposta invalida, digite novamente";
	 	}
	 	
	} while (tipo_aluno != 'R' && tipo_aluno != 'r' && tipo_aluno != 'E' && tipo_aluno != 'e'); // se for digitado algo diferente das opções solicitadas, ele força um novo preenchimento
	
	switch (tipo_aluno){
		case 'R':
		case 'r':
			do {
				cout << "\nDigite a nota da Primeira Prova: ";
				cin >> P1;
			
				cout << "\nDigite a nota da Segunda Prova:  ";
				cin >> P2;
			
				cout << "\nDigite a nota da Primeira Lista: ";
				cin >> L1;
			
				cout << "\nDigite a nota da Segunda Lista:  ";
				cin >> L2;
			
				cout << "\nDigite a porcentagem da frequência: ";
				cin >> FP;
				
				if ((P1 < 0 && P1 > 10) || (P2 < 0 && P2 > 10) || (L1 < 0 && L1 > 10) || (L2 < 0 && L2 > 10) || (FP < 0 && FP > 10)){
					cout 
				}
			} while ((P1 < 0 && P1 > 10) || (P2 < 0 && P2 > 10) || (L1 < 0 && L1 > 10) || (L2 < 0 && L2 > 10) || (FP < 0 && FP > 10));
			
			break;
			
		case 'E':
		case 'e':
			cout << "\nDigite a nota da Primeira Prova: ";
			cin >> P1;
			
			cout << "\nDigite a nota da Segunda Prova:  ";
			cin >> P2;
			break;	
	}
	
	MEDIA = (((P1 + P2) /2) *0.5) + (((L1+L2) /2) *0.4) + (FP*0.1);
 	
}
