#include <iostream>

using namespace std;
int main() {
	int lado1, lado2, lado3;
	
	cout << "Descubra se 3 numeros formem um triangulo" << endl;
	cout << "Coloque o primeiro numero" << endl;
	cin >> lado1;
	
	cout << "Coloque o segundo numero \n";
	cin >> lado2;
	
	cout << "Coloque o terceiro e ultimo numero" << endl;
	cin >> lado3;
	
	if(lado1 + lado2 > lado3 || lado1 + lado3 > lado2 || lado3 + lado2 > lado1){
		if (lado1 == lado2 && lado1 == lado3){
			cout << "Seu triangulo e Equilatero \n";
		} else if (lado1 == lado2 && lado1 != lado3 || lado1 == lado3 && lado1 != lado2 || lado2 == lado3 && lado2 != lado1){
			cout << "Seu triangulo e Isosceles\n";
		 } else if(lado1 != lado2 && lado2 != lado3 && lado1 != lado3){
			cout << "Seu triangulo e escaleno" << endl;
		}
	} else {
		cout << "Seus numeros nao formam um triangulo" << endl;
	}
	
	return 0;
}
