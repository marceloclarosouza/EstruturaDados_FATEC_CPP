#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	int x;
	int *px;

	x = 10;
	px = &x;

	cout << "Endereço de &x: " << &x << endl;
	cout << "Valor de x: " << x << endl;
	cout << "Endereço de &px: " << &px << endl;
	cout << "Conteudo de px:" << px << endl;
	cout << "Valor de *px: " << *px << endl;

	system("pause");
	return 0;
}