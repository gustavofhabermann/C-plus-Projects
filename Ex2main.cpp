#include <iostream>

using namespace std;
int main() {
	int num1, num2;
	float num3, eq1, eq2, eq3;
	
	cout << "Escreva um numero inteiro: ";
	cin >> num1;
	
	cout << "Escreva outro numero inteiro: ";
	cin >> num2;
	
	cout << "Escreva um numero real: ";
	cin >> num3;
	
	eq1 = ((num1 * 2) * (num2 / 2));
	
	eq2 = (num1 * 3) + num3;
	
	eq3 = num3 * num3 * num3;
	
	cout << eq1 << endl << eq2 << endl << eq3;
	
	
	return 0;
}
