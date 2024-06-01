#include <iostream>
#include <cmath>

using namespace std;
int main() {
	float a, b, c;
	
	
	cout << "Informe o valor a: ";
	cin >> a;
	
	if (a == 0){
		
		cout << "A equacao nao e de segundo grau" << endl;
	
	}else{
		
		cout << "\nInforme o valor de b: ";
		cin >> b;
		
		cout << "\nInforme o valor de c: ";
		cin >> c;
	
		float delta = b * b - (4 * a * c);
		float x_pos = -b + sqrt(delta) / 2 * a;
		float x_neg = -b - sqrt(delta) / 2 * a;

		if (delta < 0){
			cout << "A equacao nao tem raizes reais" << endl;	
		}else if(delta == 0){
			cout << "A equacao possui apenas uma raiz real" << endl << x_pos;
		}else if(delta > 0){
			cout << "A equacao possui duas raizes reais" << endl << x_pos << " e " << x_neg;
		}
	}
	
	return 0;
}
