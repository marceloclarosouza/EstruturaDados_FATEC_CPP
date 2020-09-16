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
//	int* ptr1;
//	int* ptr2;
//	int* ptr3;
//
//	ptr1 = new int;//aloca a memoria
//	ptr2 = new int;
//	ptr3 = new int;
//
//	*ptr1 = 100;
//	*ptr2 = 200;
//	*ptr3 = *ptr1 + *ptr2;
//
//	cout << *ptr3 << endl;
//
//
//	delete ptr1;//libera  a memoria
//	delete ptr2;
//	delete ptr3;
//
//
//	system("pause");
//	return 0;
//}

//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//float* aloca_memoria();
//void desaloca_memoria(float* pt);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	float* ptr;
//	ptr = aloca_memoria();
//
//	*ptr = 100;
//	cout << *ptr << endl << endl;
//
//	desaloca_memoria(ptr);
//
//	system("pause");
//	return 0;
//}
//
//float* aloca_memoria() {//funcao p alocar memoria
//	float* pt;
//	pt = new float;
//	return pt;
//
//}
//
//void desaloca_memoria(float* pt) {
//	
//	delete pt;
//
//}



//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//int* aloca_memoria();
//void desaloca_memoria(int* pt);
//void imprimir_dados(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int* vetor;
//
//	vetor = aloca_memoria();
//
//	*(vetor + 0) = 100;
//	*(vetor + 1) = 200;
//	*(vetor + 2) = *(vetor + 0) + *(vetor + 1);
//
//	imprimir_dados(vetor);
//	desaloca_memoria(vetor);
//
//	system("pause");
//	return 0;
//}
//
//int* aloca_memoria() {
//	int* ptr;
//	ptr = new int[3];
//
//		return ptr;
//}
//
//void desaloca_memoria(int* ptr) {
//	delete[] ptr;
//}
//
//void imprimir_dados(int* ptr) {
//	int ind;
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << "Valor: " << *(ptr + ind) << endl;
//	}
//}

//
//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//int* aloca_memoria();
//void desaloca_memoria(int* pt);
//void imprimir_dados(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int* ptr1, *ptr2, *ptr3;
//
//	ptr1 = aloca_memoria();
//	ptr2 = aloca_memoria();
//	ptr3 = aloca_memoria();
//
//	*(ptr1 + 0) = 10;
//	*(ptr1 + 1) = 20;
//	*(ptr1 + 2) = 30;
//
//	*(ptr2 + 0) = 30;
//	*(ptr2 + 1) = 40;
//	*(ptr2 + 2) = 50;
//
//	*(ptr3 + 0) = *(ptr1 + 0) + *(ptr2 + 0);
//	*(ptr3 + 1) = *(ptr1 + 1) + *(ptr2 + 1);
//	*(ptr3 + 2) = *(ptr1 + 2) + *(ptr2 + 2);
//
//	imprimir_dados(ptr3);
//	desaloca_memoria(ptr3);
//
//	system("pause");
//	return 0;
//}
//
//int* aloca_memoria() {
//	int* ptr;
//	ptr = new int[3];
//
//	return ptr;
//}
//
//void desaloca_memoria(int* ptr) {
//	delete[] ptr;
//}
//
//void imprimir_dados(int* ptr) {
//	int ind;
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << "Valor: " << *(ptr + ind) << endl;
//	}
//}


//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//};
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	Aluno* ptAluno;
//	ptAluno = new Aluno;
//
//	ptAluno->nome = "Maria";
//	ptAluno->idade = 35;
//	ptAluno->media = 10.0;
//
//	cout << "NOme: " << ptAluno->nome << endl;
//	cout << "NOme: " << ptAluno->idade << endl;
//	cout << "NOme: " << ptAluno->media << endl << endl;;
//	delete ptAluno;
//
//
//	system("pause");
//	return 0;
//}
//
//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//};
//
//using namespace std;
//void digitardados(Aluno* ptr);//chamar a funcao abaixo da struct
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Aluno* ptAluno;
//	ptAluno = new Aluno;
//
//	digitardados(ptAluno);
//
//	cout << "NOme: " << ptAluno->nome << endl;
//	cout << "idade: " << ptAluno->idade << endl;
//	cout << "media: " << ptAluno->media << endl << endl;;
//	delete ptAluno;
//
//	
//	system("pause");
//	return 0;
//}
//
//void digitardados(Aluno* ptr) {
//
//	cout << "Digite o nome: ";
//	getline(cin, ptr->nome);
//
//	cout << "Digite a idade: ";
//	cin>> ptr->idade;
//
//	cout << "Digite a media: ";
//	cin>> ptr->media;
//}
//
//
//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//};
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int ind;
//
//	Aluno* ptAluno;
//	ptAluno = new Aluno[3];
//
//
//	(ptAluno + 0)->nome = "Maria";//nao coloca o asterirsco pq é vetor
//	(ptAluno + 0)->idade = 35;
//	(ptAluno + 0)->media = 2.2;
//
//
//	(ptAluno + 1)->nome = "Marcia";
//	(ptAluno + 1)->idade = 35;
//	(ptAluno + 1)->media = 5;
//
//
//	(ptAluno + 2)->nome = "Claudia";
//	(ptAluno + 2)->idade = 99;
//	(ptAluno + 2)->media = 2;
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << "Nome: " << (ptAluno + ind)->nome << endl;
//		cout << "Idade: " << (ptAluno + ind)->idade << endl;
//		cout << "media: " << (ptAluno + ind)->media << endl;
//	}
//
//	delete[] ptAluno;
//
//	system("pause");
//	return 0;
//}


//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//};
//
//Aluno* alocar_memoria();
//void desalocar_memoria(Aluno* ptr);
//void obter_dados(Aluno* ptr);
//void imprimir_dados(Aluno* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int ind;
//
//	Aluno* ptAluno;
//	ptAluno = alocar_memoria();
//	obter_dados(ptAluno);
//	imprimir_dados(ptAluno);
//
//	desalocar_memoria(ptAluno);
//
//	system("pause");
//	return 0;
//}
//Aluno* alocar_memoria() {
//	Aluno* ptr;
//	ptr = new Aluno[3];
//	return ptr;
//
//}
//
//void desalocar_memoria(Aluno* ptr) {
//	delete[] ptr;
//
//}
//void obter_dados(Aluno* ptr) {
//	(ptr + 0)->nome = "Maria";//nao coloca o asterirsco pq é vetor
//	(ptr + 0)->idade = 35;
//	(ptr + 0)->media = 2.2;
//
//
//	(ptr + 1)->nome = "Marcia";
//	(ptr + 1)->idade = 35;
//	(ptr + 1)->media = 5;
//
//
//	(ptr + 2)->nome = "Claudia";
//	(ptr + 2)->idade = 99;
//	(ptr + 2)->media = 2;
//}
//
//void imprimir_dados(Aluno* ptr) {
//	int ind;
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << "Nome: " << (ptr + ind)->nome << endl;
//		cout << "Idade: " << (ptr + ind)->idade << endl;
//		cout << "media: " << (ptr + ind)->media << endl;
//	}
//}

///Conta bancaria

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct Cliente{
//	string nome;
//	int codigo;
//	int n_conta;
//	float saldo;
//};
//
//Cliente* alocar_memoria();
//void obter_dados(Cliente* cliente);
//void desalocar_memoria(Cliente* cliente);
//void imprimir_dados(Cliente* cliente);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	Cliente* cliente;
//
//	cliente = alocar_memoria();
//	obter_dados(cliente);
//	imprimir_dados(cliente);
//	desalocar_memoria(cliente);
//
//
//	system("pause");
//	return 0;
//}
//
//Cliente* alocar_memoria() {//retorna a struct
//	Cliente* cliente;
//	cliente = new Cliente[2];
//	return cliente;
//}
//
//void obter_dados(Cliente* cliente) {
//	(cliente + 0)->nome = "Marcelo";
//	(cliente + 0)->codigo = 123456789;
//	(cliente + 0)->n_conta = 96385522;
//	(cliente + 0)->saldo = 2096;
//
//	(cliente + 1)->nome = "Lucas";
//	(cliente + 1)->codigo = 1239;
//	(cliente + 1)->n_conta =522;
//	(cliente + 1)->saldo = 20;
//}
//void desalocar_memoria(Cliente* cliente) {
//	
//	delete[] cliente;//deletar o vetor
//}
//
//void imprimir_dados(Cliente * cliente) {
//	int ind;
//	
//	for (ind = 0; ind <2; ind++) {
//		cout << "Nome: " << (cliente + ind)->nome << endl;
//		cout << "codigo: " << (cliente+ ind)->codigo << endl;
//		cout << "n_conta: " << (cliente + ind)->n_conta << endl;
//		cout << "saldo: " << (cliente + ind)->saldo << endl;
//	}
//}
////////
////////
////////#include <iostream>
////////#include <locale.h>
////////#include <stdlib.h> // system
////////#include <string> // Textos em geral
////////
////////
////////using namespace std;
////////
////////
////////struct ContaBancaria
////////{
////////	int codCliente;
////////	string nome;
////////	int nroCta = 0;
////////	float saldo = 0;
////////};
////////
////////
////////ContaBancaria* alocarMemoria();
////////void desalocarMemoria(ContaBancaria* ptr);
////////void obterDados(ContaBancaria* ptr);
////////void imprimirDados(ContaBancaria* ptr);
////////
////////int main() {
////////
////////	setlocale(LC_ALL, "Portuguese");
////////	ContaBancaria* ptctaCorrente;
////////	ptctaCorrente = alocarMemoria();
////////	obterDados(ptctaCorrente);
////////	imprimirDados(ptctaCorrente);
////////	desalocarMemoria(ptctaCorrente);
////////	system("pause");
////////
////////	return 0;
////////}
////////
////////
////////
////////ContaBancaria* alocarMemoria() {
////////	ContaBancaria* ptr;
////////	ptr = new ContaBancaria[2];
////////	return ptr;
////////}
////////
////////
////////
////////void desalocarMemoria(ContaBancaria* ptr) {
////////	delete[] ptr;
////////}
////////
////////
////////
////////void obterDados(ContaBancaria* ptr) {
////////	int ind;
////////
////////	for (ind = 0; ind < 2; ind++) {
////////		cout << "Digite o Código: ";
////////		cin >> (ptr + ind)->codCliente;
////////		cin.ignore();
////////
////////		cout << "Digite o Nome: ";
////////		getline(cin, (ptr + ind)->nome);
////////		cout << "Digite o Nro Conta: ";
////////		cin >> (ptr + ind)->nroCta;
////////		cout << "Digite o saldo: ";
////////		cin >> (ptr + ind)->saldo;
////////		cout << "\n\n";
////////	}
////////}
////////
////////
////////void imprimirDados(ContaBancaria* ptr) {
////////	int ind;
////////
////////	for (ind = 0; ind < 2; ind++) {
////////		cout << "Código Cliente: " << (ptr + ind)->codCliente << endl;
////////		cout << "Nome: " << (ptr + ind)->nome << endl;
////////		cout << "Nro Conta: " << (ptr + ind)->nroCta << endl;
////////		cout << "Saldo: " << (ptr + ind)->saldo << endl << endl;
////////	}
////////}