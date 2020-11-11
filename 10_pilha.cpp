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

// Estrutura do N�
struct No {
	Dados dados;	// estrutura guardada dentro da lista
	No* proxNo;			// aponta para o pr�ximo N� da lista
};

// N� topo da Pilha
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

	// Se a PILHA N�O pode ser criada
	if (ptrPilha == NULL) {
		cout << "N�o foi poss�vel criar a pilha!" << endl;
		return NULL;
	}

	// Como a pilha est� vazia o IN�CIO aponta para NULL	
	ptrPilha->qtdNo = 0;
	ptrPilha->topo = NULL;

	return ptrPilha;
}

//--------------------------------------------------------
// LIBERAR PILHA
//--------------------------------------------------------
void liberarPilha(Pilha* ptrPilha) {
	No* ptrNoAtual;

	//Se a PILHA N�O foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha n�o est� criada!" << endl;
		return;
	}

	// Exclui cada N� da pilha
	while (ptrPilha->topo != NULL)
	{
		ptrNoAtual = ptrPilha->topo;

		ptrPilha->topo = ptrNoAtual->proxNo;

		delete  ptrNoAtual;
	}

	delete ptrPilha;
}

