
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


//Estrutura do Nó
struct No {
	Dados dados; //estrutura guardada dentro da lista
	No* proxNo; //aponta para o próximo Nó da lista
};


//Nó início da lista
struct Lista {
	int qtdNo;
	No* inicio;
};

Lista* criarLista();
void liberarLista(Lista* ptrLista);
void exibirLista(Lista* ptrLista);
bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media);


int main() {
	setlocale(LC_ALL, "Portuguese");

	Lista* pLista;

	pLista = criarLista();

	int matricula;
	string nome;
	float media;
	bool resultado;


	matricula = 10;
	nome = "Maria";
	media = 8.0;


	inserirListaInicio(pLista, matricula, nome, media);
	inserirListaInicio(pLista, 7, "Jose", 6.8);
	inserirListaInicio(pLista, 15, "Carlos", 9.2);

	exibirLista(pLista);


	liberarLista(pLista);	

	system("pause");

	return 0;
}

//Iniciar a lista
Lista* criarLista() {
	Lista* ptrLista;

	ptrLista = new Lista;

	//Se a lista Não pode ser criada
	if (ptrLista == NULL) {
		cout << "Não foi possível criar a lista!" << endl;
		return NULL;
	}

	//como a lista está vazia o Início aponta para o NULL
	ptrLista->qtdNo = 0;
	ptrLista->inicio = NULL;

	return ptrLista;
}

//Liberar a lista
void liberarLista(Lista* ptrLista) {
	No* ptrNoAtual;

	//Se a lista Não foi criada
	if (ptrLista == NULL) {
		cout << "A lista não está criada!" << endl;
		return;
	}

	//Exclui cada Nó da lista
	while (ptrLista->inicio != NULL) {
		ptrNoAtual = ptrLista->inicio;

		ptrLista->inicio = ptrNoAtual->proxNo;
		delete ptrNoAtual;
	}

	delete ptrLista;
}

//Inserir no início da lista
bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media) {
	No* ptrNoNovo;

	//Se a lista NÃo foi craida
	if (ptrLista == NULL) {
		cout << "A Lista não está criada!" << endl;
		return false;
	}


	//Cria o novo Nó
	ptrNoNovo = new No;

	if (ptrNoNovo == NULL) {
		cout << "Memória insuficiente! " << endl;
		return false;
	}

	ptrNoNovo->dados.matricula = matricula;
	ptrNoNovo->dados.nome = nome;
	ptrNoNovo->dados.media = media;
	ptrNoNovo->proxNo = ptrLista->inicio;

	ptrLista->inicio = ptrNoNovo;

	//Incrementa a quantidade de Nós
	ptrLista->qtdNo++;
	return true;
}

//Exibir lista
void exibirLista(Lista* ptrLista) {
	No* ptrNoAtual;

	//Se a lista NÃo foi craida
	if (ptrLista == NULL) {
		cout << "A Lista não está criada!" << endl;
		return;
	}

	//Se n~;ao tiver nehum Nó na lista
	if (ptrLista->inicio == NULL) {
		cout << "A lista está vazia!" <<endl;
		return;
	}

	ptrNoAtual = ptrLista->inicio;

	while (ptrNoAtual != NULL) {
		cout << "Matricula: " << ptrNoAtual->dados.matricula << endl;
		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
		cout << "Media: " << ptrNoAtual->dados.media << endl;
		ptrNoAtual = ptrNoAtual->proxNo;
	}
	cout << endl;
}

