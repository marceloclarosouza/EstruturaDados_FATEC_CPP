//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int x;
//	int* px;
//
//	x = 100;
//	px = &x;
//
//	cout << "Endereço de x " << &x << endl;
//	cout << "Valor de *px " << *px << endl;
//	cout << "Conteudo de px: " << px << endl;
//
//	px++;//altera o endereco de memória. O valor varia de acordo com o tipo char, int, float, long, 
//	cout << "Conteudo de px: " << px << endl;
//	cout << "Valor de *px " << *px << endl;
//
//	px++;
//	cout << "Conteudo de px: " << px << endl;
//	cout << "Valor de *px " << *px << endl;
//
//	px--;
//	cout << "Conteudo de px: " << px << endl;
//	cout << "Valor de *px " << *px << endl;
//
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5] = { 10, 20, 30, 40, 50 };
	int* pv;
	int ind;

	pv = vetor;
	cout << "Endereço do vetor: " << vetor<< endl;//vetor na;o usa & para passar o endereco
	cout << "Conteudo de pv : " << pv << endl<<endl<<endl;

	cout << "Valor1: " << *pv << endl;
	//pv++;//vai par o próximo valor do vetor
	//cout << "Valor2: " << *pv << endl << endl << endl;

	for (ind = 0; ind < 5; ind++) {
		cout << "valor: " << *(pv + ind) << endl;//trava o vetor na primeira posicao e corre os demais valores sem alterar o valor de pv
	}//usar este!!!

	cout << endl << endl;		
	
	for (ind = 0; ind < 5; ind++) {//correr o vetor pelos pponteiros alterando o valor de pv
		cout << "Valor: " << *pv << endl;
		pv++;
	}//nao usar!!!


	system("pause");
	return 0;
}
