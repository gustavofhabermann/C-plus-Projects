#include <iostream>

using namespace std;
int main() {
	int valor;
	
	cout << "Bem vindo ao sistema bancario onde voce pode retirar notas de	1, 5, 10, 50, 100" << endl;
	cout << "Para isso voce devera colocar um valor maior que 10 e menor que 600" << endl;
	
	cout << "qual valor voce que colocar: ";
	cin >> valor;
	
	if (valor < 10 || valor > 600){
		cout << "Esse valor esta indisponivel";
	} else{
		int cem = valor / 100;
		int cinquenta = (valor - (100 * cem))/ 50;
		int dez = (valor - (100 * cem) - (50 * cinquenta)) / 10;
		int cinco = (valor - (100 * cem) - (50 * cinquenta) - (10 * dez)) / 5;
		int um = (valor - (100 * cem) - (50 * cinquenta) - (10 * dez) - (5 * cinco));
		cout << valor << " = " << cem << " nota(s) de cem, " << cinquenta << " nota(s) de cinquenta, "
		<< dez << " nota(s) de dez, " << cinco << " nota(s) de cinco e " << um << " nota(s) de um";
	}
	
	return 0;
}
