/*#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;

void exibirX(int vlrX);
void exibirY(int vlrY);

int main() {
	setlocale(LC_ALL, "Portuguese");
	int x;
	int y;

	x = 0;
	y = 0;



	exibirX(x);
	exibirY(y);

	system("pause");
	return 0;
}
void exibirX(int vlrX) {
	cout << "valor vlrx: " << vlrX << endl;
	vlrX++;

	if (vlrX == 10) {
		return;
	}

	exibirX(vlrX);
	cout << "Fim" << vlrX << endl;
}

void exibirY(int vlrY) {

	if (vlrY < 10) {
		cout << "valor vlrY: " << vlrY << endl;
		vlrY++;

		exibirY(vlrY);
	}
	
	cout << "Fim" << vlrY << endl;
}*/


/*using namespace std;
void imprime_pares(int num);

int main() {
	setlocale(LC_ALL, "Portuguese");
	int x;
	x = 0;

	imprime_pares(x);

	system("pause");
	return 0;
}

void imprime_pares(int num) {
	if (num <= 20) {
		if (num % 2 == 0) {
			cout << num << endl;			
		}
		num++;
		imprime_pares(num);				
	}	
}*/

/*#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	string nome;
	cout << "Nome: ";
	//cin >> nome; // não le o que vier após o espaço
	getline(cin, nome); //usado para ler nomes com espaço

	cout << "Nome: " << nome << endl;
	

	system("pause");
	return 0;
}*/

/*
#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	string nome;
	cout << "Nome: ";
	//cin >> nome; // não le o que vier após o espaço
	getline(cin, nome); //usado para ler nomes com espaço

	cout << "Nome: " << nome << endl;
	

	system("pause");
	return 0;
}*/

/*#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	string nome, endereco;
	int idade;

	cout << "Nome: ";
	getline(cin, nome); //usado para ler nomes com espaço

	cout << "Idade: ";
	cin >> idade;
	cin.ignore();//limpa o buffer

	cout << "Endereco :";
	getline(cin, endereco);

	system("cls");//limpa a tela dos inputs antes de imprimir as saídas

	cout << "Nome: " << nome << endl;
	cout << "Endereço: " << endereco << endl;
	cout << "Idade: " << idade << endl;

	system("pause");
	return 0;
}*/



