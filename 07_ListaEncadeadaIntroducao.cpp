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
//
//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//struct Dados {
//
//	string nome;
//	int idade;
//	float media;
//	
//};
//
//struct No {
//
//	Dados dados;
//	No* proximo;
//};
//
//struct Lista {
//
//	No* inicio;
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
//	No* pMaria;//a struct No aponta para os dados
//	No* pJose;
//	No* pJesus;
//
//
//	//criacao dos Nó ou Nodo na memoria
//	pMaria = new No;//alocando memoria
//	pMaria->dados.nome = "Maria";
//	pMaria->dados.idade = 45;
//	pMaria->dados.media = 9.5;
//	pMaria->proximo = NULL;
//
//	pJose = new No;//alocando memoria
//	pJose->dados.nome = "Jose";
//	pJose->dados.idade = 50;
//	pJose->dados.media = 9;
//	pJose->proximo = NULL;
//
//	pJesus = new No;//alocando memoria
//	pJesus->dados.nome = "Jesus";
//	pJesus->dados.idade = 33;
//	pJesus->dados.media = 10;
//	pJesus->proximo = NULL;
//
//	///Encadeamento do
//	pLista->inicio = pMaria;
//	pMaria->proximo = pJose;
//	pJose->proximo = pJesus;
//
//
//	No* pAtual;
//
//	pAtual = pLista->inicio;
//
//	while (pAtual != NULL) {
//		cout << "None: " << pAtual->dados.nome << endl;
//		cout << "Idade: " << pAtual->dados.idade << endl;
//		cout << "Media: " << pAtual->dados.media << endl << endl;
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

//
//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//struct Dados {
//
//	string nome;
//	int idade;
//	float media;
//
//};
//
//struct No {
//
//	Dados dados;
//	No* proximo;
//};
//
//struct Lista {
//
//	No* inicio;
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
//	No* pMaria;//a struct No aponta para os dados
//	No* pJose;
//	No* pJesus;
//
//
//	//criacao dos Nó ou Nodo na memoria
//	pMaria = new No;//alocando memoria
//	pMaria->dados.nome = "Maria";
//	pMaria->dados.idade = 45;
//	pMaria->dados.media = 9.5;
//	pMaria->proximo = NULL;
//
//	pJose = new No;//alocando memoria
//	pJose->dados.nome = "Jose";
//	pJose->dados.idade = 50;
//	pJose->dados.media = 9;
//	pJose->proximo = NULL;
//
//	pJesus = new No;//alocando memoria
//	pJesus->dados.nome = "Jesus";
//	pJesus->dados.idade = 33;
//	pJesus->dados.media = 10;
//	pJesus->proximo = NULL;
//
//	///Encadeamento do
//	pLista->inicio = pMaria;
//	pMaria->proximo = pJose;
//	pJose->proximo = pJesus;
//
//
//	No* pAtual;
//
//	pAtual = pLista->inicio;
//
//	while (pAtual != NULL) {
//
//		if (pAtual->dados.nome == "Jose") {
//			pAtual->dados.media = 7;
//			break;
//		}
//
//		pAtual = pAtual->proximo;
//	}
//
//	float total = 0;
//	int qtd = 0;
//	pAtual = pLista->inicio;
//
//	while (pAtual != NULL) {
//
//		total += pAtual->dados.media;
//		pAtual = pAtual->proximo;
//		qtd++;
//	}
//
//	cout <<"Total: " <<total << endl << endl;
//	cout << "Media: " << total / qtd << endl << endl;
//
//	pAtual = pLista->inicio;
//
//	while (pAtual != NULL) {
//
//		cout << "None: " << pAtual->dados.nome << endl;
//		cout << "Idade: " << pAtual->dados.idade << endl;
//		cout << "Media: " << pAtual->dados.media << endl << endl;
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

struct Dados {
	int codigo;
	string desc;
	float preco;

};

struct No {
	Dados dados;
	No* proximo;
};

struct Lista {
	No* inicio;
};

int main() {
	setlocale(LC_ALL, "Portuguese");

	Lista* pLista;
	pLista = new Lista;

	//Criando
	No* pProd1;//a struct No aponta para os dados
	No* pProd2;
	No* pProd3;


	//criacao dos Nó ou Nodo na memoria
	pProd1 = new No;//alocando memoria
	pProd1->dados.codigo = 100;
	pProd1->dados.desc = "ovo";
	pProd1->dados.preco = 5.5;
	pProd1->proximo = NULL;

	pProd2 = new No;//alocando memoria
	pProd2->dados.codigo = 200;
	pProd2->dados.desc = "Coca Cola";
	pProd2->dados.preco = 8.0;
	pProd2->proximo = NULL;

	pProd3 = new No;//alocando memoria
	pProd3->dados.codigo = 300;
	pProd3->dados.desc = "pao";
	pProd3->dados.preco = 4.5;
	pProd3->proximo = NULL;

	///Encadeamento do
	pLista->inicio = pProd1;
	pProd1->proximo = pProd2;
	pProd2->proximo = pProd3;


	No* pAtual;

	pAtual = pLista->inicio;

	while (pAtual != NULL) {
		cout << "Codigo: " << pAtual->dados.codigo << endl;
		cout << "Desconto: " << pAtual->dados.desc << endl;
		cout << "Preço: " << pAtual->dados.preco << endl << endl;

		pAtual = pAtual->proximo;
	}

	//libera memoria
	delete pProd1;
	delete pProd2;
	delete pProd3;
	delete pLista;

	system("pause");

	return 0;
}