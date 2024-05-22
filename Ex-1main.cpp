#include <iostream>

using namespace std;
int main() {
	string name;
	int hour_worked, pay_time, payment;
	
	cout << "Qual seu nome?" << endl;
	cin >> name;
	
	cout << "Quanto voce ganha por hora trabalhada" << endl;
	cin >> pay_time;
	
	cout << "Quantas horas voce trabalha por mes?" << endl;
	cin >> hour_worked;
	
	payment = pay_time * hour_worked;
	
	cout << "O total de salario que voce ganha no final do mes e: " << payment;
	 
	
	return 0;
}
