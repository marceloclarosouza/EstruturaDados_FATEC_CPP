#include <iostream>
#include <stdlib.h> 
#include <string>

using namespace std;

// Dados sobre o ALUNO
struct Aluno {
	int matricula;
	string nome;
	float media;
};

// Estrutura do Nó
struct No {
	No* esq;			// Aponta para o Nó à esquerda da Árvore
	Aluno dados;		// Dados
	No* dir;			// Aponta para o Nó à direita da Árvore
};

// Nó início da Árvore
struct Arvore {
	int qtdNo;
	No* raiz;
};

enum TipoExibir { PreOrdem, EmOrdem, PosOrdem };

Arvore* criarArvore();
void liberarArvore(Arvore* ptrArvore);
void liberarNo(No* ptrNoAtual);

bool inserirArvore(Arvore* ptrArvore, int matricula, string nome, float media);
bool inserirNoIterativo(Arvore* ptrArvore, No* ptrNoNovo);
No* inserirNoRecursivo(No* ptrNoAtual, No* ptrNoNovo);

void exibirArvore(Arvore* ptrArvore, TipoExibir tpExibir);
void exibirPreOrdem(No* ptrNoAtual);
void exibirEmOrdem(No* ptrNoAtual);
void exibirPosOrdem(No* ptrNoAtual);
void exibirDados(No* ptrNoAtual);

No* buscarArvore(Arvore* ptrArvore, int matricula);
No* buscarNo(No* ptrNoAtual, int matricula);


void removerArvore(Arvore* ptrArvore, int matricula);
No* removerNo(No* ptrNoAtual);

int main() {
	setlocale(LC_ALL, "Portuguese");

	Arvore* pArvore;

	// Cria a Árvore
	pArvore = criarArvore();


	////--------------------------------------
	//// Insere na Árvore
	////--------------------------------------	
	inserirArvore(pArvore, 50, "Jesus", 10);
	inserirArvore(pArvore, 30, "Maria", 9);
	inserirArvore(pArvore, 70, "José", 7);
	inserirArvore(pArvore, 60, "Pedro", 6);
	inserirArvore(pArvore, 80, "Paulo", 6);
	inserirArvore(pArvore, 20, "Miguel", 8);
	inserirArvore(pArvore, 40, "Rafael", 8);

	//--------------------------------------
	// Exibe a Árvore
	//--------------------------------------
	//exibirArvore(pArvore, PreOrdem);
	//exibirArvore(pArvore, EmOrdem);
	//exibirArvore(pArvore, PosOrdem);



	//--------------------------------------
	// Remove da Árvore
	//--------------------------------------
	removerArvore(pArvore, 70);

	cout << "\n\n================================\n\n";
	exibirArvore(pArvore, PreOrdem);




	//--------------------------------------
	// Busca na Árvore
	//--------------------------------------
	No* pNoAluno;

	pNoAluno = buscarArvore(pArvore, 80);

	if (pNoAluno != NULL) {
		pNoAluno->dados.nome = "Paulo Henrique";
		pNoAluno->dados.media = 6.5f;
	}
	else {
		cout << "Valor não cadastrado" << endl;
	}

	cout << "\n\n================================\n\n";
	exibirArvore(pArvore, PreOrdem);


	// Libera a memória alocada para a árvore
	liberarArvore(pArvore);


	system("pause");
	return 0;
}


//--------------------------------------------------------
// CRIAR ÁRVORE
//--------------------------------------------------------
Arvore* criarArvore() {
	Arvore* ptrArvore;

	ptrArvore = new Arvore;

	// Se a Árvore NÃO pode ser criada
	if (ptrArvore == NULL) {
		cout << "Não foi possível criar a árvore!" << endl;
		return NULL;
	}

	// Como a Árvore está vazia a raiz aponta para NULL	
	ptrArvore->qtdNo = 0;
	ptrArvore->raiz = NULL;

	return ptrArvore;
}

//--------------------------------------------------------
// LIBERAR ÁRVORE
//--------------------------------------------------------
void liberarArvore(Arvore* ptrArvore) {

	//Se a Árvore NÃO foi criada
	if (ptrArvore == NULL) {
		cout << "A árvore não está criada!" << endl;
		return;
	}

	liberarNo(ptrArvore->raiz);

	delete ptrArvore;
}


//--------------------------------------------------------
// LIBERAR os nós da árvore
//--------------------------------------------------------
void liberarNo(No* ptrNoAtual) {

	//Se o nó for uma FOLHA
	if (ptrNoAtual == NULL) {
		return;
	}

	liberarNo(ptrNoAtual->esq);
	liberarNo(ptrNoAtual->dir);

	delete ptrNoAtual;

	ptrNoAtual = NULL;
}


//--------------------------------------------------------
//			  INSERIR NA ÁRVORE - GERAL
// Efetua os ajustes iniciais do novo nó da árvore
//--------------------------------------------------------
bool inserirArvore(Arvore* ptrArvore, int matricula, string nome, float media) {
	No* ptrNoNovo;
	No* ptrNoAtual = NULL;
	No* ptrNoAnt = NULL;

	//Se a Árvore NÃO foi criada
	if (ptrArvore == NULL) {
		cout << "A árvore não está criada!" << endl;
		return false;
	}

	//---------------------------------------------------------------
	//	Cria o novo nó
	//---------------------------------------------------------------
	ptrNoNovo = new No;

	if (ptrNoNovo == NULL) {
		cout << "Memória insulficiente!" << endl;
		return false;
	}

	ptrNoNovo->dados.matricula = matricula;
	ptrNoNovo->dados.nome = nome;
	ptrNoNovo->dados.media = media;
	ptrNoNovo->esq = NULL;
	ptrNoNovo->dir = NULL;

	// Insere na árvore por ITERATIVIDADE
	//inserirIterativo(ptrArvore, ptrNoNovo);

	// Insere na árvore por RECURSIVIDADE
	ptrArvore->raiz = inserirNoRecursivo(ptrArvore->raiz, ptrNoNovo);

	return true;
}

//--------------------------------------------------------
//			 INSERIR NA ÁRVORE - ITERATIVO
// Encontra o local de inserção do nó por ITERATIVIDADE
//--------------------------------------------------------
bool inserirNoIterativo(Arvore* ptrArvore, No* ptrNoNovo) {
	No* ptrNoAtual = NULL;
	No* ptrNoAnt = NULL;
	int matricula;

	//Se a Árvore NÃO foi criada
	if (ptrArvore == NULL) {
		cout << "A árvore não está criada!" << endl;
		return false;
	}

	if (ptrArvore->raiz == NULL) {
		ptrArvore->raiz = ptrNoNovo;
	}
	else {

		ptrNoAtual = ptrArvore->raiz;
		matricula = ptrNoNovo->dados.matricula;

		// Procura o local de inserção na árvore
		while (ptrNoAtual != NULL) {
			ptrNoAnt = ptrNoAtual;

			// Verifica se o dado já se encontra na árvore
			if (matricula == ptrNoAtual->dados.matricula) {
				delete ptrNoNovo;
				return false;
			}

			if (matricula < ptrNoAtual->dados.matricula) {
				ptrNoAtual = ptrNoAtual->esq;
			}
			else {
				ptrNoAtual = ptrNoAtual->dir;
			}
		}

		// Insere o novo nó na árvore
		if (matricula < ptrNoAnt->dados.matricula) {
			ptrNoAnt->esq = ptrNoNovo;
		}
		else {
			ptrNoAnt->dir = ptrNoNovo;
		}
	}

	// Incrementa o quantidade de Nós
	ptrArvore->qtdNo++;

	return true;
}


//--------------------------------------------------------
//			 INSERIR NA ÁRVORE - RECURSIVO
// Encontra o local de inserção do nó por RECURSIVIDADE
//--------------------------------------------------------
No* inserirNoRecursivo(No* ptrNoAtual, No* ptrNoNovo) {
	int matricula;

	if (ptrNoAtual == NULL)
	{
		return ptrNoNovo;
	}

	matricula = ptrNoNovo->dados.matricula;

	// Verifica se o dado já se encontra na árvore
	if (matricula == ptrNoAtual->dados.matricula) {
		return ptrNoAtual;
	}

	if (matricula < ptrNoAtual->dados.matricula) {
		ptrNoAtual->esq = inserirNoRecursivo(ptrNoAtual->esq, ptrNoNovo);
	}
	else {
		ptrNoAtual->dir = inserirNoRecursivo(ptrNoAtual->dir, ptrNoNovo);
	}

	return ptrNoAtual;
}


//--------------------------------------------------------
// EXIBIR A ÁRVORE
//--------------------------------------------------------
void exibirArvore(Arvore* ptrArvore, TipoExibir tpExibir) {

	//Se a Árvore NÃO foi criada
	if (ptrArvore == NULL) {
		cout << "A árvore não está criada!" << endl;
		return;
	}

	//cout << "===========================================" << endl;
	//cout << "                   ÁRVORE" << endl;
	//cout << "Quantidade: " << ptrArvore->qtdNo << endl;
	//cout << "\tInício: " << ptrArvore->raiz << endl;
	//cout << "===========================================" << endl << endl;


	switch (tpExibir)
	{
	case PreOrdem:
		exibirPreOrdem(ptrArvore->raiz);
		break;

	case EmOrdem:
		exibirEmOrdem(ptrArvore->raiz);
		break;

	case PosOrdem:
		exibirPosOrdem(ptrArvore->raiz);
		break;

	default:
		break;
	}
}

//--------------------------------------------------------
// EXIBIR ==> PRÉ-ORDEM
//--------------------------------------------------------
void exibirPreOrdem(No* ptrNoAtual) {

	//Se o nó for vazio
	if (ptrNoAtual == NULL) {
		return;
	}
	else {
		exibirDados(ptrNoAtual); // Exibe os dados do Nó

		exibirPreOrdem(ptrNoAtual->esq);

		exibirPreOrdem(ptrNoAtual->dir);
	}
}


//--------------------------------------------------------
// EXIBIR ==> EM-ORDEM
//--------------------------------------------------------
void exibirEmOrdem(No* ptrNoAtual) {

	//Se o nó for vazio
	if (ptrNoAtual == NULL) {
		return;
	}
	else {
		exibirEmOrdem(ptrNoAtual->esq);

		exibirDados(ptrNoAtual); // Exibe os dados do Nó

		exibirEmOrdem(ptrNoAtual->dir);
	}
}

//--------------------------------------------------------
// EXIBIR ==> PÓS-ORDEM
//--------------------------------------------------------
void exibirPosOrdem(No* ptrNoAtual) {

	//Se o nó for vazio
	if (ptrNoAtual == NULL) {
		return;
	}
	else {
		exibirPosOrdem(ptrNoAtual->esq);

		exibirPosOrdem(ptrNoAtual->dir);

		exibirDados(ptrNoAtual); // Exibe os dados do Nó		
	}
}


//--------------------------------------------------------
// EXIBIR DADOS DO NÓ
//--------------------------------------------------------
void exibirDados(No* ptrNoAtual) {

	//Se o nó for vazio
	if (ptrNoAtual == NULL) {
		cout << "Nó vazio!" << endl;
		return;
	}

	/*cout << "-------------------------------------------" << endl;
	cout << "   " << ptrNoAtual << endl;
	cout << "\tEsquerdo-> " << ptrNoAtual->esq << endl;*/
	cout << "Matrícula: " << ptrNoAtual->dados.matricula << "\t";
	cout << "Nome: " << ptrNoAtual->dados.nome << "\t";
	cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
	/*cout << "\tDireito-> " << ptrNoAtual->dir << endl;

	cout << "-------------------------------------------" << endl;
	cout << endl;*/
}


//--------------------------------------------------------
// EXIBIR A ÁRVORE
//--------------------------------------------------------
No* buscarArvore(Arvore* ptrArvore, int matricula) {
	No* ptrNo = NULL;

	//Se a Árvore NÃO foi criada
	if (ptrArvore == NULL) {
		cout << "A árvore não está criada!" << endl;
		return NULL;
	}

	// Busca o Nó
	ptrNo = buscarNo(ptrArvore->raiz, matricula);

	return ptrNo;
}

//--------------------------------------------------------
// EXIBIR DADOS DO NÓ
//--------------------------------------------------------
No* buscarNo(No* ptrNoAtual, int matricula) {

	if (ptrNoAtual == NULL) {
		return NULL;
	}

	// Se encontrou o nó pesquisado
	if (matricula == ptrNoAtual->dados.matricula) {
		return  ptrNoAtual;
	}

	if (matricula < ptrNoAtual->dados.matricula) {
		return buscarNo(ptrNoAtual->esq, matricula);

	}
	else {
		return buscarNo(ptrNoAtual->dir, matricula);
	}
}

//--------------------------------------------------------
// EXIBIR DADOS DO NÓ
//--------------------------------------------------------
void removerArvore(Arvore* ptrArvore, int matricula) {
	No* ptrNoPai = NULL;
	No* ptrNoAtual = NULL;

	//Se a Árvore NÃO foi criada
	if (ptrArvore == NULL) {
		cout << "A árvore não está criada!" << endl;
		return;
	}

	ptrNoAtual = ptrArvore->raiz;

	while (ptrNoAtual != NULL) {

		// Se encontrou o nó a ser removido
		if (matricula == ptrNoAtual->dados.matricula) {

			if (ptrNoAtual == ptrArvore->raiz)
			{
				ptrArvore->raiz = removerNo(ptrNoAtual);
			}
			else {
				if (ptrNoPai->dir == ptrNoAtual) {
					ptrNoPai->dir = removerNo(ptrNoAtual);
				}
				else {
					ptrNoPai->esq = removerNo(ptrNoAtual);
				}
			}
			return;
		}

		// Procura o nó a ser removido
		ptrNoPai = ptrNoAtual;

		if (matricula < ptrNoAtual->dados.matricula) {
			ptrNoAtual = ptrNoAtual->esq;
		}
		else {
			ptrNoAtual = ptrNoAtual->dir;
		}
	}
}



//--------------------------------------------------------
// REMOVE O NÓ
//--------------------------------------------------------
No* removerNo(No* ptrNoAtual) {
	No* ptrNoP = NULL;
	No* ptrNoQ = NULL;

	if (ptrNoAtual->esq == NULL) {
		ptrNoQ = ptrNoAtual->dir;
		delete ptrNoAtual;
		return ptrNoQ;
	}

	ptrNoP = ptrNoAtual;
	ptrNoQ = ptrNoAtual->esq;

	while (ptrNoQ->dir != NULL) {
		ptrNoP = ptrNoQ;
		ptrNoQ = ptrNoQ->dir;
	}

	if (ptrNoP != ptrNoAtual) {
		ptrNoP->dir = ptrNoQ->esq;
		ptrNoQ->esq = ptrNoAtual->esq;
	}

	ptrNoQ->dir = ptrNoAtual->dir;

	delete ptrNoAtual;
	return ptrNoQ;
}


