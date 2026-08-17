/* Exercício 2*/
/* Dia 17/08/2026*/
/* Faça um algoritmo que receba o valor do lucro de uma empresa e divida pelo número de sócios*/

#include<iotream>
using namespace std;

int main(){
	
	float lucro, socios, r;
	cout << "Digite o lucro";
	cin >> lucro;
	cout << "Digite a quantidade de sócios";
	cin >> socios;
	
	if (socios == 0.0){
		cout << "Nunca dividirás por zero";
	}
	else {
		R = lucro/socios;
		cout << "Resultado = " << R;
	}
	return 0;
}
