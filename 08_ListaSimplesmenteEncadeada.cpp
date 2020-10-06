
#include <iostream>
#include <locale.h>
#include <stdlib.h> // system
#include <string> // Textos em geral


using namespace std;

//Dados sobre o Aluno
struct Dados {
	int matricula;
	string nome;
	float media;
};


//Estrutura do N�
struct No {
	Dados dados; //estrutura guardada dentro da lista
	No* proxNo; //aponta para o pr�ximo N� da lista
};


//N� in�cio da lista
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










	liberarLista(pLista);	

	system("pause");

	return 0;
}

//Iniciar a lista
Lista* criarLista() {
	Lista* ptrLista;

	ptrLista = new Lista;

	//Se a lista N�o pode ser criada
	if (ptrLista == NULL) {
		cout << "N~;ao foi poss�vel criar a lista!" << endl;
		return NULL;
	}

	//como a lista est� vazia o In�cio aponta para o NULL
	ptrLista->qtdNo = 0;
	ptrLista->inicio = NULL;

	return ptrLista;

}

//Liberar a lista
void liberarLista(Lista* ptrLista) {
	No* ptrNoAtual;

	//Se a lista N�o foi criada
	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return;
	}

	//Exclui cada N� da lista
	while (ptrLista->inicio != NULL) {
		ptrNoAtual = ptrLista->inicio;

		ptrLista->inicio = ptrNoAtual->proxNo;
		delete ptrNoAtual;
	}

	delete ptrLista;

}

//Inserir no in�cio da lista
bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media) {
	No* ptrNoNovo;

	//Se a lista N�o foi craida
	if (ptrLista == NULL) {
		cout << "A Lista n�o est� criada!" << endl;
		return false;
	}


	//Cria o novo N�
	ptrNoNovo = new No;

	if (ptrNoNovo = NULL) {
		cout << "Mem�ria insuficiente! " << endl;
		return false;
	}

	ptrNoNovo->dados.matricula = matricula;
	ptrNoNovo->dados.nome = nome;
	ptrNoNovo->dados.media = media;
	ptrNoNovo->proxNo = ptrLista->inicio;

	ptrLista->inicio = ptrNoNovo;

	//Incrementa a quantidade de N�s
	ptrLista->qtdNo++;
	return true;
}