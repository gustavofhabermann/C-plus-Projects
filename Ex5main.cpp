#include <iostream>

using namespace std;
int main() {
	int size, veloc_internet, time;
	
	cout << "Me passe o tamanho do seu arquivo em (Mb)" << endl;
	cin >> size;
	
	cout << "Me fale qual e a velocidade da sua internet em (Mbps)" << endl;
	cin >> veloc_internet;
	
	time = size/(veloc_internet * 60);
	
	cout << "O tempo que vai demorar para baixar esse arquivo e de: " << time << " minutos";
	return 0;
}
