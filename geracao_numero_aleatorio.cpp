#include <iostream>
#include <iomanip>
#include <random>

/* Este programa gera 1.000 números aleatórios entre 1 e 6 
*/

using namespace std;

int gen_number(){
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1, 6);
	
	return dis(gen);
}

int main(){
	
	int aux;
	
	for(aux=0; aux<1000; aux++)
		cout << gen_number() << endl;
	
	return 0;
}
