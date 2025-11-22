#include <iostream>

using namespace std;

int doub(int *);


int main(){
	
	int num;
	num = 20;
	
	doub(&num);
	
	cout << num;
	
	return 0;
}
	
int doub (int *ptr_num){
	(*ptr_num) = (*ptr_num) * 2;
	return *ptr_num;
}
