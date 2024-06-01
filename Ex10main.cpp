#include <iostream>

using namespace std;
int main() {
	int ano;
	
	cout << "Escolha qual ano voce quer ver se é bissexto" << endl;
	cin >> ano;
	
	if (ano % 4 == 0 && ano % 100 != 0 || ano & 400 ==0){
		cout << "O ano " << ano << " e bissexto";
	}else {
		cout << "O ano " << ano << " nao e bissexto";
	}
	
	return 0;
}
