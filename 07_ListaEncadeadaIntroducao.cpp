//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//
//	Aluno* proximo;//guarda o endereço do peóximo elemento da lista
//};
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//	
//	//Criando
//	Aluno* pMaria;
//	Aluno* pJose;
//	Aluno* pJesus;
//
//
//	//criacao dos Nó ou Nodo na memoria
//	pMaria = new Aluno;//alocando memoria
//	pMaria->nome = "Maria";
//	pMaria->idade = 45;
//	pMaria->media = 9.5;
//	pMaria->proximo = NULL;
//
//	pJose = new Aluno;//alocando memoria
//	pJose->nome = "Jose";
//	pJose->idade = 50;
//	pJose->media = 9;
//	pJose->proximo = NULL;
//
//	pJesus = new Aluno;//alocando memoria
//	pJesus->nome = "jesus";
//	pJesus->idade = 33;
//	pJesus->media = 10;
//	pJesus->proximo = NULL;
//
//	///Encadeamento do
//	pMaria->proximo = pJose;
//	pJose->proximo = pJesus;
//
//
//
//	//libera memoria
//	delete pMaria;
//	delete pJose;
//	delete pJesus;
//
//	system("pause");
//
//	return 0;
//}


//
//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//
//	Aluno* proximo;//guarda o endereço do peóximo elemento da lista
//};
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//
//	//Criando
//	Aluno* pMaria;
//	Aluno* pJose;
//	Aluno* pJesus;
//
//
//	//criacao dos Nó ou Nodo na memoria
//	pMaria = new Aluno;//alocando memoria
//	pMaria->nome = "Maria";
//	pMaria->idade = 45;
//	pMaria->media = 9.5;
//	pMaria->proximo = NULL;
//
//	pJose = new Aluno;//alocando memoria
//	pJose->nome = "Jose";
//	pJose->idade = 50;
//	pJose->media = 9;
//	pJose->proximo = NULL;
//
//	pJesus = new Aluno;//alocando memoria
//	pJesus->nome = "jesus";
//	pJesus->idade = 33;
//	pJesus->media = 10;
//	pJesus->proximo = NULL;
//
//	///Encadeamento do
//	pMaria->proximo = pJose;
//	pJose->proximo = pJesus;
//
//	//Exibe lista
//	cout << "Endereço: " << pMaria << endl;
//	cout << "None: " << pMaria->nome << endl;
//	cout << "Idade: " << pMaria->idade << endl;
//	cout << "Media: " << pMaria->media << endl;
//	cout << "Proximo: " << pMaria->proximo << endl << endl;
//
//	cout << "Endereço: " << pJose << endl;
//	cout << "None: " << pJose->nome << endl;
//	cout << "Idade: " << pJose->idade << endl;
//	cout << "Media: " << pJose->media << endl;
//	cout << "Proximo: " << pJose->proximo << endl << endl;
//
//	cout << "Endereço: " << pJesus << endl;
//	cout << "None: " << pJesus->nome << endl;
//	cout << "Idade: " << pJesus->idade << endl;
//	cout << "Media: " << pJesus->media << endl;
//	cout << "Proximo: " << pJesus->proximo << endl << endl;
//
//
//	//libera memoria
//	delete pMaria;
//	delete pJose;
//	delete pJesus;
//
//	system("pause");
//
//	return 0;
//}

//
//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//
//	Aluno* proximo;//guarda o endereço do peóximo elemento da lista
//};
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//
//	//Criando
//	Aluno* pMaria;
//	Aluno* pJose;
//	Aluno* pJesus;
//
//
//	//criacao dos Nó ou Nodo na memoria
//	pMaria = new Aluno;//alocando memoria
//	pMaria->nome = "Maria";
//	pMaria->idade = 45;
//	pMaria->media = 9.5;
//	pMaria->proximo = NULL;
//
//	pJose = new Aluno;//alocando memoria
//	pJose->nome = "Jose";
//	pJose->idade = 50;
//	pJose->media = 9;
//	pJose->proximo = NULL;
//
//	pJesus = new Aluno;//alocando memoria
//	pJesus->nome = "jesus";
//	pJesus->idade = 33;
//	pJesus->media = 10;
//	pJesus->proximo = NULL;
//
//	///Encadeamento do
//	pMaria->proximo = pJose;
//	pJose->proximo = pJesus;
//
//
//	Aluno* pAtual;
//	pAtual = pMaria;
//
//	//Exibe lista
//	cout << "Endereço: " << pMaria << endl;
//	cout << "None: " << pMaria->nome << endl;
//	cout << "Idade: " << pMaria->idade << endl;
//	cout << "Media: " << pMaria->media << endl;
//	cout << "Proximo: " << pMaria->proximo << endl << endl;
//
//	cout << "Endereço: " << pAtual << endl;
//	cout << "None: " << pAtual->nome << endl;
//	cout << "Idade: " << pAtual->idade << endl;
//	cout << "Media: " << pAtual->media << endl;
//	cout << "Proximo: " << pAtual->proximo << endl << endl;
//
//
//	//libera memoria
//	delete pMaria;
//	delete pJose;
//	delete pJesus;
//
//	system("pause");
//
//	return 0;
//}


//

//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//
//	Aluno* proximo;//guarda o endereço do peóximo elemento da lista
//};
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//
//	//Criando
//	Aluno* pMaria;
//	Aluno* pJose;
//	Aluno* pJesus;
//
//
//	//criacao dos Nó ou Nodo na memoria
//	pMaria = new Aluno;//alocando memoria
//	pMaria->nome = "Maria";
//	pMaria->idade = 45;
//	pMaria->media = 9.5;
//	pMaria->proximo = NULL;
//
//	pJose = new Aluno;//alocando memoria
//	pJose->nome = "Jose";
//	pJose->idade = 50;
//	pJose->media = 9;
//	pJose->proximo = NULL;
//
//	pJesus = new Aluno;//alocando memoria
//	pJesus->nome = "jesus";
//	pJesus->idade = 33;
//	pJesus->media = 10;
//	pJesus->proximo = NULL;
//
//	///Encadeamento do
//	pMaria->proximo = pJose;
//	pJose->proximo = pJesus;
//
//
//	Aluno* pAtual;
//
//	pAtual = pMaria;
//
//	//Exibe lista
//	cout << "Endereço: " << pAtual << endl;
//	cout << "None: " << pAtual->nome << endl;
//	cout << "Idade: " << pAtual->idade << endl;
//	cout << "Media: " << pAtual->media << endl;
//	cout << "Proximo: " << pAtual->proximo << endl << endl;
//
//	//pAtual = pJose;
//	pAtual = pAtual->proximo;//é o mesmo endereco de pAtual=pJose
//
//	//Exibe lista
//	cout << "Endereço: " << pAtual << endl;
//	cout << "None: " << pAtual->nome << endl;
//	cout << "Idade: " << pAtual->idade << endl;
//	cout << "Media: " << pAtual->media << endl;
//	cout << "Proximo: " << pAtual->proximo << endl << endl;
//
//	//pAtual = pJesus;
//	pAtual = pAtual->proximo;
//
//	//Exibe lista
//	cout << "Endereço: " << pAtual << endl;
//	cout << "None: " << pAtual->nome << endl;
//	cout << "Idade: " << pAtual->idade << endl;
//	cout << "Media: " << pAtual->media << endl;
//	cout << "Proximo: " << pAtual->proximo << endl << endl;
//
//	//libera memoria
//	delete pMaria;
//	delete pJose;
//	delete pJesus;
//
//	system("pause");
//
//	return 0;
//}

//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//struct Aluno {
//	string nome;
//	int idade;
//	float media;
//
//	Aluno* proximo;//guarda o endereço do peóximo elemento da lista
//};
//
//struct Lista {
//	Aluno* inicio;
//};
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//
//	Lista* pLista;
//	pLista = new Lista;
//
//	//Criando
//	Aluno* pMaria;
//	Aluno* pJose;
//	Aluno* pJesus;
//
//
//	//criacao dos Nó ou Nodo na memoria
//	pMaria = new Aluno;//alocando memoria
//	pMaria->nome = "Maria";
//	pMaria->idade = 45;
//	pMaria->media = 9.5;
//	pMaria->proximo = NULL;
//
//	pJose = new Aluno;//alocando memoria
//	pJose->nome = "Jose";
//	pJose->idade = 50;
//	pJose->media = 9;
//	pJose->proximo = NULL;
//
//	pJesus = new Aluno;//alocando memoria
//	pJesus->nome = "Jesus";
//	pJesus->idade = 33;
//	pJesus->media = 10;
//	pJesus->proximo = NULL;
//
//	///Encadeamento do
//	pLista->inicio = pMaria;
//	pMaria->proximo = pJose;
//	pJose->proximo = pJesus;
//
//
//	Aluno* pAtual;
//
//	pAtual = pLista->inicio;
//
//	while (pAtual != NULL) {
//		cout << "None: " << pAtual->nome << endl;
//		cout << "Idade: " << pAtual->idade << endl;
//		cout << "Media: " << pAtual->media << endl<<endl;
//
//		pAtual = pAtual->proximo;
//	}
//
//	//libera memoria
//	delete pMaria;
//	delete pJose;
//	delete pJesus;
//	delete pLista;
//
//	system("pause");
//
//	return 0;
//}

#include <iostream>
#include <locale.h>
#include <stdlib.h> // system
#include <string> // Textos em geral


using namespace std;

struct Aluno {
	string nome;
	int idade;
	float media;

	Aluno* proximo;//guarda o endereço do peóximo elemento da lista
};

struct Lista {
	Aluno* inicio;
};

int main() {

	setlocale(LC_ALL, "Portuguese");

	Lista* pLista;
	pLista = new Lista;

	//Criando
	Aluno* pMaria;
	Aluno* pJose;
	Aluno* pJesus;


	//criacao dos Nó ou Nodo na memoria
	pMaria = new Aluno;//alocando memoria
	pMaria->nome = "Maria";
	pMaria->idade = 45;
	pMaria->media = 9.5;
	pMaria->proximo = NULL;

	pJose = new Aluno;//alocando memoria
	pJose->nome = "Jose";
	pJose->idade = 50;
	pJose->media = 9;
	pJose->proximo = NULL;

	pJesus = new Aluno;//alocando memoria
	pJesus->nome = "Jesus";
	pJesus->idade = 33;
	pJesus->media = 10;
	pJesus->proximo = NULL;

	///Encadeamento do
	pLista->inicio = pMaria;
	pMaria->proximo = pJose;
	pJose->proximo = pJesus;


	Aluno* pAtual;

	pAtual = pLista->inicio;

	while (pAtual != NULL) {
		cout << "None: " << pAtual->nome << endl;
		cout << "Idade: " << pAtual->idade << endl;
		cout << "Media: " << pAtual->media << endl << endl;

		pAtual = pAtual->proximo;
	}

	//libera memoria
	delete pMaria;
	delete pJose;
	delete pJesus;
	delete pLista;

	system("pause");

	return 0;
}