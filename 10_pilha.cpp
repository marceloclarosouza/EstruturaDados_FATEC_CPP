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


Pilha* criarPilha();
void liberarPilha(Pilha* ptrPilha);
void exibirPilha(Pilha* ptrPilha);
bool empilharPush(Pilha* ptrPilha, int matricula, string nome, float media);
bool desempilharPop(Pilha* ptrPilha);
No* consultarPilhaTop(Pilha* ptrPilha);


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

//--------------------------------------------------------
// EXIBIR A PILHA
//--------------------------------------------------------
void exibirPilha(Pilha* ptrPilha) {
	No* ptrNoAtual;

	//Se a PILLHA N�O foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha n�o est� criada!" << endl;
		return;
	}


	//Se n�o tiver nenhum N� na pilha
	if (ptrPilha->topo == NULL) {
		cout << "A pilha esta vazia!" << endl;
		return;
	}

	ptrNoAtual = ptrPilha->topo;

	while (ptrNoAtual != NULL) {
		cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
		cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl;

		ptrNoAtual = ptrNoAtual->proxNo;
	}
}


//--------------------------------------------------------
// EMPILHA NO TOPO DA PILHA
//--------------------------------------------------------
bool empilharPush(Pilha* ptrPilha, int matricula, string nome, float media) {
	No* ptrNoNovo;

	//Se a pilha N�O foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha n�o est� criada!" << endl;
		return false;
	}

	//---------------------------------------------------------------
	//	Cria o novo n�
	//---------------------------------------------------------------
	ptrNoNovo = new No;

	if (ptrNoNovo == NULL) {
		cout << "Mem�ria insulficiente!" << endl;
		return false;
	}

	ptrNoNovo->dados.matricula = matricula;
	ptrNoNovo->dados.nome = nome;
	ptrNoNovo->dados.media = media;
	ptrNoNovo->proxNo = ptrPilha->topo;

	// Empilha
	ptrPilha->topo = ptrNoNovo;

	// Incrementa o quantidade de N�s
	ptrPilha->qtdNo++;

	return true;
}

//--------------------------------------------------------
// DESEMPILHA DO TOPO DA PILHA
//--------------------------------------------------------
bool desempilharPop(Pilha* ptrPilha) {
	No* ptrNoAtual;

	// Se a PILHA N�O foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha n�o est� criada!" << endl;
		return false;
	}

	//Se n�o tiver nenhum N� na pilha
	if (ptrPilha->topo == NULL) {
		cout << "A pilha est� vazia!" << endl;
		return false;
	}

	// Ajusta o topo
	ptrNoAtual = ptrPilha->topo;
	ptrPilha->topo = ptrNoAtual->proxNo;

	// Exclui o n� do topo
	delete ptrNoAtual;

	// Decrementa o quantidade de N�s
	ptrPilha->qtdNo--;

	return true;
}

//--------------------------------------------------------
// CONSULTAR O TOPO DA PILHA
//--------------------------------------------------------
No* consultarPilhaTop(Pilha* ptrPilha) {
	No* ptrNoAtual;

	// Se a PILHA N�O foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha n�o est� criada!" << endl;
		return NULL;
	}

	ptrNoAtual = ptrPilha->topo;

	return ptrNoAtual;
}