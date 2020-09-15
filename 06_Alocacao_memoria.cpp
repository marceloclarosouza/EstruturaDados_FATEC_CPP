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

