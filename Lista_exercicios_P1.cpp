/*1) Fa�a um programa que aloque mem�ria para um ponteiro do tipo inteiro a atribua o valor 100
ao mesmo.Em seguida exiba seu endere�o, conte�do e valor apontado.*/

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



/*2) Fa�a um programa aloque dois ponteiros ptrX e ptrY e atribua valores a eles.Em seguida, crie
as seguintes fun��es :
2.1) Fun��o que some os valores dos ponteiros e retorne o resultado.Ap�s a fun��o, exiba o
resultado.
2.2) Fun��o que verifique e retorne o maior valor entre os ponteiros.Ap�s a fun��o, exiba o
resultado.
2.3) Fun��o que troque os conte�dos de dois ponteiros.O programa dever� exibir os valores dos
ponteiros antes e depois da chamada da fun��o.
2.4) Fun��o que solicite na tela que o usu�rio digite novos valores para ptrX e ptrY(utilize cin).
Ap�s a fun��o, exiba os novos valores dos ponteiros.*/

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
//		cout << "ptrX � maior que ptrY: ptrX = " << *ptrX << endl;
//	else{
//		if (*ptrY > *ptrX)
//			cout<< "ptrY � maior que ptrX: ptrY = " << *ptrY << endl;
//		else {
//			cout << "*ptrX e *ptrY s�o iguais" << endl;
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




/*3) Fa�a um programa que aloque um ponteiro para armazenar 3 valores inteiros.Em seguida,
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
//	cout << "Digite o 1� valor: " << endl;
//	cin >> *(pv + 0);
//	cout << "Digite o 2� valor: " << endl;
//	cin >> *(pv + 1);
//	cout << "Digite o 3� valor: " << endl;
//	cin >> *(pv + 2);
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << *(pv + ind) << endl;
//	}
//
//	system("pause");
//	return 0;
//}


