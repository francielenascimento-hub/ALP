//Faça um programa que receba três números e mostre o maior.

#include <iostream>

using namespace std;

int main () {
	int num1, num2;
	
	cout << "Insira um numero: ";
	cin >> num1;
	
	cout << "Insira outro numero: ";
	cin >> num2;
	
	if (num1 > num2)
	cout << "O maior numero eh o: " << num1;
	
	else
	if (num2 > num1)
	cout << "O maior numero eh o: " << num2;

	else 
	cout << "Os numeros escolhidos sao iguais." << endl;

	return 0;
}
