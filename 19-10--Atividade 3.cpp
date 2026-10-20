/* 19/10/2026 */
/* Atividade 3 */
/* Uma empresa de transporte de passageiros irá entrevistar uma amostra de 500 usuários. 
	O formulário eletrônico deverá receber a opinião em relação aos serviços, conforme a tabela:
	
	CÓDIGO 	|	OPINIÃO
	   1	|	  BOM
	   2	|	REGULAR
	   3	|	 RUIM
	
	Verifique:
	a) Quantos opinaram por Ruim
	b) Quantos opinaram por Regular
	
	Regras:
	1 - Utilize WHILE para contar usuários
	2 - Valide a opinião conforme a tabela, usando do...while
*/

#include<iostream>
using namespace std;

int main(){
	int codigo, qtd;
	int ruim = 0;
	int regular = 0;
	int bom = 0;
	qtd = 3;
	
	while (qtd > 0) {
		do {
			cout << "Digite a sua avaliação (Sendo 1 para Bom, 2 para Regular e 3 para Ruim)\n";
			cin >> codigo;
			
			if (codigo != 3 && codigo != 2 && codigo != 1){
				cout << "\nDigite apenas 1, 2 ou 3\n\n";
			} 
		} while (codigo != 3 && codigo != 2 && codigo != 1);
		
		if (codigo == 3){
			ruim++;
			
		} else if (codigo == 2){
			regular ++;
			
		} else if (codigo == 1) {
			bom++;
			
		}
		
		qtd--;
	}
	
	cout << "\n\n " << ruim << " - pessoas avaliaram como RUIM\n " << regular << " - pessoas avaliaram como REGULAR\n " << bom << " - pessoas avaliaram como BOM\n ";		
	 
}
