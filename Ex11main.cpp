#include <iostream>

using namespace std;
int main() {
	int numero;
	
	cout << "Escolha um numero menor que 1000 para ver sua centena, dezena e unidade: ";
	cin >> numero;
	
	int centena = numero / 100;
	int dezena = (numero/10) % 10;
	int unidade = (numero % 100) % 10;
	
	if (numero > 99){
		cout << numero << " = " << centena << " centenas, " << dezena << " dezenas e " << unidade << " unidades";
	}else if (numero < 100 && numero > 9){
		cout << numero << " = " << dezena << " dezenas e " << unidade << " unidades";
	}else if (numero < 10){
		cout << numero << " = " << unidade << " unidades";
	}
	
	
	return 0;
}
