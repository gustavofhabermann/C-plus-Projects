#include <iostream>

using namespace std;
int main() {
	int idade, peso;
	
	cout << "Por favor informe a sua idade(anos) e seu peso(kg)) a seguir" << endl;
	cout << "Idade: ";
	cin >> idade;
	cout << endl << "Peso: ";
	cin >> peso;
	
	if(peso < 60 && peso > 50){
		cout << "Voce deve tomar 875mg do remedio" << endl;
	}else if (peso >= 60){
		cout << "Voce deve tomar 1000mg do remedio, ou 40 gotas" << endl;
	}else if(idade <= 12){
		if (peso <= 15) {
			cout << "voce deve toamr 200mg do remedio \n";
		}else if (peso > 15 && peso <= 30){
			cout << "Voce deve tomar 500mg do remedio" << endl;
		}else {
			cout << "Voce deve tomar 750mg do remedio \n";
		} 
	}
	return 0;
}
