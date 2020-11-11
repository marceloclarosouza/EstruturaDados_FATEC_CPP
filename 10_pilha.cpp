#include <iostream>
#include <stdlib.h> 
#include <string>

using namespace std;


// Dados sobre o ALUNO
struct Dados {
	int matricula;
	string nome;
	float media;
};

// Estrutura do Nó
struct No {
	Dados dados;	// estrutura guardada dentro da lista
	No* proxNo;			// aponta para o próximo Nó da lista
};

// Nó topo da Pilha
struct Pilha {
	int qtdNo;
	No* topo;
};

int main() {
	setlocale(LC_ALL, "Portuguese");




	system("pause");
	return 0;
}

//--------------------------------------------------------
// CRIAR PILHA
//--------------------------------------------------------
Pilha* criarPilha() {
	Pilha* ptrPilha;

	ptrPilha = new Pilha;

	// Se a PILHA NÃO pode ser criada
	if (ptrPilha == NULL) {
		cout << "Não foi possível criar a pilha!" << endl;
		return NULL;
	}

	// Como a pilha está vazia o INÍCIO aponta para NULL	
	ptrPilha->qtdNo = 0;
	ptrPilha->topo = NULL;

	return ptrPilha;
}

//--------------------------------------------------------
// LIBERAR PILHA
//--------------------------------------------------------
void liberarPilha(Pilha* ptrPilha) {
	No* ptrNoAtual;

	//Se a PILHA NÃO foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha não está criada!" << endl;
		return;
	}

	// Exclui cada Nó da pilha
	while (ptrPilha->topo != NULL)
	{
		ptrNoAtual = ptrPilha->topo;

		ptrPilha->topo = ptrNoAtual->proxNo;

		delete  ptrNoAtual;
	}

	delete ptrPilha;
}

