//Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas
//e a mensagem de aprovado ou reprovado, considerando para aprovação média 7.

#include <iostream>

using namespace std;

int main () {
	float nota1, nota2, nota3, nota4, media;
	
	cout << "Insira a primeira nota: ";
	cin >> nota1;
	
	cout << "Insira a segunda nota: ";
	cin >> nota2;
	
	cout << "Insira a terceira nota: ";
	cin >> nota3;
	
	cout << "Insira a quarta nota: ";
	cin >> nota4;
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	if (media >= 7)
	 cout << "Sua média eh: " << media << ". Voce esta APROVADO";
	 
	 else
	 cout << "Sua media eh: " << media << ". Voce esta REPROVADO";
			
	return 0;
}