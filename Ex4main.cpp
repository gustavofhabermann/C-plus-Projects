#include <iostream>
#include <cmath>

using namespace std;
int main() {
// Perguntando a Area Total a ser pintado.	

	int area_total;
	
	cout << "Ola, seja bem vindo(a) a loja de tintas, quantos metros quadrados vai ser a area que voce ira pintar \n";
	cin >> area_total;
	
// Calculo da Lata de tinta 

	float tinta, lata_tinta;
	tinta = (area_total / 3);
	lata_tinta = ceil(tinta / 18);	// ceil é usado para arredondar as contas para cima
	
	if (lata_tinta == 1){
		cout << "voce so ira precisar de 1 lata de tinta pelo preco de 80 RS";
	}if (lata_tinta >= 2) {
		float Preco_total = lata_tinta * 80; 
		cout << "Voce ira pagar: " << Preco_total << "RS";
	}
	
	return 0;
}
