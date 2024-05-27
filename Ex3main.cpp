#include <iostream>

using namespace std;
int main() {
	float salario_hora, horas_trabalhadas, salario_bruto;
	
// Calculo para salário bruto
 	
	cout << "Me diga qual seu salario/hora" << endl;
	cin >> salario_hora;
	
	cout << "Me diga quanntas horas por mes voce trabalha" << endl;
	cin >> horas_trabalhadas;
	
	salario_bruto = salario_hora * horas_trabalhadas;
	
// Calculo para Descontos

	float IR, INSS, sindicato, salario_liquido;
	
	IR = (salario_bruto * 11) / 100;
	
	INSS = (salario_bruto * 8) / 100;
	
	sindicato = (salario_bruto * 5) / 100;
	
	salario_liquido = salario_bruto - (IR + INSS + sindicato);
	
	cout << "Agora vamos mostrar para voce os dados que conseguimos: " << endl;
	cout << "Salario Bruto: " << salario_bruto << endl;
	cout << "O quanto pagou para o INSS: " << INSS << endl;
	cout << "O quanto pagou para o sindicato: " << sindicato << endl;
	cout << "E o seu salario liquido: " << salario_liquido << endl;
	
	
	
	return 0;
}
