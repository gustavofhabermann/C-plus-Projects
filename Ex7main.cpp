#include <iostream>

using namespace std;
int main() {
	
	int n1, n2, n3;
	
	cout << endl << "Coloque os um numero natural: ";
	cin >> n1;
	
	cout << endl << "Coloque outro numero natural: ";
	cin >> n2;
	
	cout << endl << "Coloque o ultimo numero natural: ";
	cin >> n3;
	
	if (n1 > n2 && n1 > n3){
		cout << n1 << endl;
		if (n2 > n3){
			cout << n2 << endl << n3;
		}
		else if (n3 > n2){
			cout << n3 << endl << n2;
		}
	} else if (n2 > n1 && n2 > n3){
		cout << n2 << endl;
		if (n1 > n3){
			cout << n1 << endl << n3;
		}
		else if (n3 > n1){
			cout << n3 << endl << n1;
		}
	} else if (n3 > n1 && n3 > n2){
		cout << n3 << endl;
		if (n1 > n2){
			cout << n1 << endl << n2;
		}
		else if (n2 > n1){
			cout << n2 << endl << n1;
		}
	} else {
		cout << "Seus numeros sao todos iguais";
	}
	
	
	
	return 0;
}
