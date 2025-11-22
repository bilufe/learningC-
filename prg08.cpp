#include <iostream>

using namespace std;

int main() {
	
	int i, base, potencia, resultado;
	resultado = 0;
	
	cout << "Digite o número da base: ";
	cin >> base;
	cout << "Digite o número da potência: ";
	cin >> potencia;
	
	
	for(i = 1; i < potencia; i++){
		resultado += base * base;
	}
	
	cout << "O resultado é: " << resultado << endl;
	
	return 0;
}
