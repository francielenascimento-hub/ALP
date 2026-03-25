//Faça um programa que receba duas notas, calcule e mostre a média aritmética 
//e a mensagem que se encontra na tabela.

#include <iostream>;

using namespace std;

int main () {
	float nota1, nota2, media;

	cout << "Insira a primeira nota: ";
	cin >> nota1;
	
	cout << "Insira a segunda nota: ";
	cin >> nota2;
	
	media = (nota1 + nota2)/2;
	
	cout << "Sua media final eh: " << media << endl;
	
	if (media < 3) 
		cout << "Voce esta Reprovado.";
	
	else if (media < 7) 
		cout << "Voce precisara fazer o Exame." << endl;
	
	else 
		cout << "Voce esta Aprovado!" << endl;
	
	return 0;
}