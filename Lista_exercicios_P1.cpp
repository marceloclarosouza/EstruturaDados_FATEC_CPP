/*1) Faça um programa que aloque memória para um ponteiro do tipo inteiro a atribua o valor 100
ao mesmo.Em seguida exiba seu endereço, conteúdo e valor apontado.*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int* ptr;
//	ptr = new int;
//	*ptr = 100;
//		
//	cout << "Valor de ptr: " << *ptr << endl;
//	delete ptr;
//	
//	system("pause");
//	return 0;
//}



/*2) Faça um programa aloque dois ponteiros ptrX e ptrY e atribua valores a eles.Em seguida, crie
as seguintes funções :
2.1) Função que some os valores dos ponteiros e retorne o resultado.Após a função, exiba o
resultado.
2.2) Função que verifique e retorne o maior valor entre os ponteiros.Após a função, exiba o
resultado.
2.3) Função que troque os conteúdos de dois ponteiros.O programa deverá exibir os valores dos
ponteiros antes e depois da chamada da função.
2.4) Função que solicite na tela que o usuário digite novos valores para ptrX e ptrY(utilize cin).
Após a função, exiba os novos valores dos ponteiros.*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//void soma_ponteiros(int* ptrX, int* ptrY);
//void maior_ponteiro(int* ptrX, int* ptrY);
//void inverte_ponteiros(int* ptrX, int* ptrY);
//void novos_valores(int* ptrX, int* ptrY);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int* ptrX;
//	int* ptrY;
//
//	ptrX = new int;
//	ptrY = new int;
//
//	*ptrX = 200;
//	*ptrY = 100;
//
//	soma_ponteiros(ptrX, ptrY);
//	maior_ponteiro(ptrX, ptrY);
//	inverte_ponteiros(ptrX, ptrY);
//	novos_valores(ptrX, ptrY);
//
//		
//	delete ptrX;
//	delete ptrY;
//	system("pause");
//	return 0;
//}
//
//void soma_ponteiros(int* ptrX, int* ptrY) {
//	int* res;
//	res = new int;
//
//	*res = *ptrX + *ptrY;
//	cout << "A soma dos ponteiros ptrX e ptrY e: "<< *res << endl;
//
//	delete res;
//}
//
//void maior_ponteiro(int* ptrX, int* ptrY) {
//	if (*ptrX > * ptrY)
//		cout << "ptrX é maior que ptrY: ptrX = " << *ptrX << endl;
//	else{
//		if (*ptrY > *ptrX)
//			cout<< "ptrY é maior que ptrX: ptrY = " << *ptrY << endl;
//		else {
//			cout << "*ptrX e *ptrY são iguais" << endl;
//		}
//	}
//}
//
//void inverte_ponteiros(int* ptrX, int* ptrY) {
//
//	int aux;
//
//
//	aux = *ptrX;
//	*ptrX = *ptrY;
//	*ptrY = aux;
//
//	cout << "ptrX: " << *ptrX << endl << "ptrY: " << *ptrY << endl;
//	
//}
//
//void novos_valores(int* ptrX, int* ptrY) {
//	cin >> *ptrX;
//	cin >> *ptrY;
//
//	cout << "Os novos valores dos ponteiros ptrX e ptrY sao: " << *ptrX << " e " << *ptrY << endl;
//}




/*3) Faça um programa que aloque um ponteiro para armazenar 3 valores inteiros.Em seguida,
atribua os valores ao ponteiro e exiba - os na tela.*/
//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int vetor[3];
//	int* pv;
//	int ind;
//
//	pv = vetor;
//	cout << "Digite o 1° valor: " << endl;
//	cin >> *(pv + 0);
//	cout << "Digite o 2° valor: " << endl;
//	cin >> *(pv + 1);
//	cout << "Digite o 3° valor: " << endl;
//	cin >> *(pv + 2);
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << *(pv + ind) << endl;
//	}
//
//	system("pause");
//	return 0;
//}

/*4) Faça um programa que aloque um ponteiro para armazenar 3 valores inteiros.Passe o
ponteiro para uma função que solicitará ao usuário que digite(cin) os valores correspondentes.
Após a função, exiba os valores do ponteiro*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//void armazena_valores(int* ptr);
//void visualiza_valores(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//		
//	int* ptr;
//	ptr = new int[3];
//
//	
//	armazena_valores(ptr);
//	visualiza_valores(ptr);
//
//	delete ptr;
//
//	system("pause");
//	return 0;
//}
//
//
//void armazena_valores(int* ptr) {
//	int ind;	
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << "Digite o "<<ind+1<<" valor:"<< endl;
//		cin >> *(ptr + ind);
//	}
//
//}
//
//void visualiza_valores(int* ptr) {
//	int ind;
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << *(ptr + ind) << endl;
//	}
//
//}

/*5) Faça um programa que aloque um ponteiro para armazenar 5 valores inteiros.Atribua valores
ao ponteiro.Em seguida crie as seguintes funções.
5.1) Função que retorne a some todos os valores.Após a função, exiba o resultado.
5.2) Função que retorne o menor valor.Após a função, exiba o resultado.
5.3) Função que retorne o maior valor.Após a função, exiba o resultado.
5.4) Função que retorne a média valor.Após a função, exiba o resultado.*/

#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;
void armazena_valores(int* ptr);
void soma(int* ptr);
void menor(int* ptr);
void maior(int* ptr);
void media(int* ptr);

int main() {
	setlocale(LC_ALL, "Portuguese");
		
	int* ptr;
	ptr = new int[5];

	
	armazena_valores(ptr);
	soma(ptr);
	menor(ptr);
	maior(ptr);
	media(ptr);

	delete ptr;

	system("pause");
	return 0;
}


void armazena_valores(int* ptr) {
	int ind;	

	for (ind = 0; ind < 5; ind++) {
		cout << "Digite o "<<ind+1<<" valor:"<< endl;
		cin >> *(ptr + ind);
	}

}


void soma(int* ptr) {
	int ind;
	int* somar;
	somar = new int;
	*somar = 0;

	for (ind = 0; ind < 5; ind++) {
		*somar = *somar +  *(ptr + ind);
	}

	cout << "A soma dos numeros é: " << *somar << endl;

	delete somar;
}

void menor(int* ptr) {

	int ind;
	int* menor = new int;
	*menor = 10000;

	for (ind = 0; ind < 5; ind++) {
		if (*(ptr + ind) < *menor) {
			*menor = *(ptr + ind);
		}
	}
	cout << "O menor número é: " << *menor << endl;

	delete menor;
}

void maior(int* ptr) {

	int ind;
	int* maior = new int;
	*maior = 0;

	for (ind = 0; ind < 5; ind++) {
		if (*(ptr + ind) > *maior) {
			*maior= *(ptr + ind);
		}
	}
	cout << "O maior numero é: " << *maior << endl;

	delete maior;
}
void media(int* ptr) {

	int ind;
	int* somar;
	float* media;

	somar = new int;
	*somar = 0;

	media = new float;

	for (ind = 0; ind < 5; ind++) {
		*somar = *somar + *(ptr + ind);
	}

	*media = *somar / 5;

	cout << "A media dos numeros é: " << *media<< endl;

	delete somar;
	delete media;
}