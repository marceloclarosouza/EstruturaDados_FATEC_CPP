#include <iostream>
#include <locale.h>
#include <stdlib.h> // system
#include <string>   // Textos em geral

using namespace std;

// Dados sobre o ALUNO
struct Dados {
	int matricula;
	string nome;
	float media;
};

// Estrutura do N�
struct No {
	No* antNo;			// aponta para o N� anterior da lista
	Dados dados;	// estrutura guardada dentro da lista	
	No* proxNo;			// aponta para o pr�ximo N� da lista
};

// N� in�cio da lista
struct Lista {
	int qtdNo;
	No* inicio;
};


Lista* criarLista();
void liberarLista(Lista* ptrLista);

int main() {
	setlocale(LC_ALL, "Portuguese");

	Lista* pLista;
	pLista = criarLista();











	liberarLista (pLista);
	system("pause");
	return 0;
}

//--------------------------------------------------------
// CRIAR LISTA
//--------------------------------------------------------
Lista* criarLista() {
	Lista* ptrLista;

	ptrLista = new Lista;

	// Se a lista N�O pode ser criada
	if (ptrLista == NULL) {
		cout << "N�o foi poss�vel criar a lista!" << endl;
		return NULL;
	}

	// Como a lista est� vazia o IN�CIO aponta para NULL	
	ptrLista->qtdNo = 0;
	ptrLista->inicio = NULL;

	return ptrLista;
}

//--------------------------------------------------------
// LIBERAR LISTA
//--------------------------------------------------------
void liberarLista(Lista* ptrLista) {
	No* ptrNoAtual;

	//Se a lista N�O foi criada
	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return;
	}

	// Exclui cada N� da lista
	while (ptrLista->inicio != NULL)
	{
		ptrNoAtual = ptrLista->inicio;

		ptrLista->inicio = ptrLista->inicio->proxNo;

		delete  ptrNoAtual;
	}

	delete ptrLista;
}

//--------------------------------------------------------
// EXIBIR A LISTA
//--------------------------------------------------------
void exibirLista(Lista* ptrLista) {
	No* ptrNoAtual;

	//Se a lista N�O foi criada
	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return;
	}


	//Se n�o tiver nenhum N� na lista
	if (ptrLista->inicio == NULL) {
		cout << "A lista esta vazia!" << endl;
		return;
	}

	ptrNoAtual = ptrLista->inicio;

	while (ptrNoAtual != NULL) {
		cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
		cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl;

		ptrNoAtual = ptrNoAtual->proxNo;
	}
}