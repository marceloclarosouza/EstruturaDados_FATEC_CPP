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

// Estrutura do N�
struct No {
	No* esq;			// Aponta para o N� � esquerda da �rvore
	Aluno dados;		// Dados
	No* dir;			// Aponta para o N� � direita da �rvore
};

// N� in�cio da �rvore
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

	// Cria a �rvore
	pArvore = criarArvore();


	////--------------------------------------
	//// Insere na �rvore
	////--------------------------------------	
	inserirArvore(pArvore, 50, "Jesus", 10);
	inserirArvore(pArvore, 30, "Maria", 9);
	inserirArvore(pArvore, 70, "Jos�", 7);
	inserirArvore(pArvore, 60, "Pedro", 6);
	inserirArvore(pArvore, 80, "Paulo", 6);
	inserirArvore(pArvore, 20, "Miguel", 8);
	inserirArvore(pArvore, 40, "Rafael", 8);

	//--------------------------------------
	// Exibe a �rvore
	//--------------------------------------
	//exibirArvore(pArvore, PreOrdem);
	//exibirArvore(pArvore, EmOrdem);
	//exibirArvore(pArvore, PosOrdem);



	//--------------------------------------
	// Remove da �rvore
	//--------------------------------------
	removerArvore(pArvore, 70);

	cout << "\n\n================================\n\n";
	exibirArvore(pArvore, PreOrdem);




	//--------------------------------------
	// Busca na �rvore
	//--------------------------------------
	No* pNoAluno;

	pNoAluno = buscarArvore(pArvore, 80);

	if (pNoAluno != NULL) {
		pNoAluno->dados.nome = "Paulo Henrique";
		pNoAluno->dados.media = 6.5f;
	}
	else {
		cout << "Valor n�o cadastrado" << endl;
	}

	cout << "\n\n================================\n\n";
	exibirArvore(pArvore, PreOrdem);


	// Libera a mem�ria alocada para a �rvore
	liberarArvore(pArvore);


	system("pause");
	return 0;
}


//--------------------------------------------------------
// CRIAR �RVORE
//--------------------------------------------------------
Arvore* criarArvore() {
	Arvore* ptrArvore;

	ptrArvore = new Arvore;

	// Se a �rvore N�O pode ser criada
	if (ptrArvore == NULL) {
		cout << "N�o foi poss�vel criar a �rvore!" << endl;
		return NULL;
	}

	// Como a �rvore est� vazia a raiz aponta para NULL	
	ptrArvore->qtdNo = 0;
	ptrArvore->raiz = NULL;

	return ptrArvore;
}

//--------------------------------------------------------
// LIBERAR �RVORE
//--------------------------------------------------------
void liberarArvore(Arvore* ptrArvore) {

	//Se a �rvore N�O foi criada
	if (ptrArvore == NULL) {
		cout << "A �rvore n�o est� criada!" << endl;
		return;
	}

	liberarNo(ptrArvore->raiz);

	delete ptrArvore;
}


//--------------------------------------------------------
// LIBERAR os n�s da �rvore
//--------------------------------------------------------
void liberarNo(No* ptrNoAtual) {

	//Se o n� for uma FOLHA
	if (ptrNoAtual == NULL) {
		return;
	}

	liberarNo(ptrNoAtual->esq);
	liberarNo(ptrNoAtual->dir);

	delete ptrNoAtual;

	ptrNoAtual = NULL;
}


//--------------------------------------------------------
//			  INSERIR NA �RVORE - GERAL
// Efetua os ajustes iniciais do novo n� da �rvore
//--------------------------------------------------------
bool inserirArvore(Arvore* ptrArvore, int matricula, string nome, float media) {
	No* ptrNoNovo;
	No* ptrNoAtual = NULL;
	No* ptrNoAnt = NULL;

	//Se a �rvore N�O foi criada
	if (ptrArvore == NULL) {
		cout << "A �rvore n�o est� criada!" << endl;
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
	ptrNoNovo->esq = NULL;
	ptrNoNovo->dir = NULL;

	// Insere na �rvore por ITERATIVIDADE
	//inserirIterativo(ptrArvore, ptrNoNovo);

	// Insere na �rvore por RECURSIVIDADE
	ptrArvore->raiz = inserirNoRecursivo(ptrArvore->raiz, ptrNoNovo);

	return true;
}

//--------------------------------------------------------
//			 INSERIR NA �RVORE - ITERATIVO
// Encontra o local de inser��o do n� por ITERATIVIDADE
//--------------------------------------------------------
bool inserirNoIterativo(Arvore* ptrArvore, No* ptrNoNovo) {
	No* ptrNoAtual = NULL;
	No* ptrNoAnt = NULL;
	int matricula;

	//Se a �rvore N�O foi criada
	if (ptrArvore == NULL) {
		cout << "A �rvore n�o est� criada!" << endl;
		return false;
	}

	if (ptrArvore->raiz == NULL) {
		ptrArvore->raiz = ptrNoNovo;
	}
	else {

		ptrNoAtual = ptrArvore->raiz;
		matricula = ptrNoNovo->dados.matricula;

		// Procura o local de inser��o na �rvore
		while (ptrNoAtual != NULL) {
			ptrNoAnt = ptrNoAtual;

			// Verifica se o dado j� se encontra na �rvore
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

		// Insere o novo n� na �rvore
		if (matricula < ptrNoAnt->dados.matricula) {
			ptrNoAnt->esq = ptrNoNovo;
		}
		else {
			ptrNoAnt->dir = ptrNoNovo;
		}
	}

	// Incrementa o quantidade de N�s
	ptrArvore->qtdNo++;

	return true;
}


//--------------------------------------------------------
//			 INSERIR NA �RVORE - RECURSIVO
// Encontra o local de inser��o do n� por RECURSIVIDADE
//--------------------------------------------------------
No* inserirNoRecursivo(No* ptrNoAtual, No* ptrNoNovo) {
	int matricula;

	if (ptrNoAtual == NULL)
	{
		return ptrNoNovo;
	}

	matricula = ptrNoNovo->dados.matricula;

	// Verifica se o dado j� se encontra na �rvore
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
// EXIBIR A �RVORE
//--------------------------------------------------------
void exibirArvore(Arvore* ptrArvore, TipoExibir tpExibir) {

	//Se a �rvore N�O foi criada
	if (ptrArvore == NULL) {
		cout << "A �rvore n�o est� criada!" << endl;
		return;
	}

	//cout << "===========================================" << endl;
	//cout << "                   �RVORE" << endl;
	//cout << "Quantidade: " << ptrArvore->qtdNo << endl;
	//cout << "\tIn�cio: " << ptrArvore->raiz << endl;
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
// EXIBIR ==> PR�-ORDEM
//--------------------------------------------------------
void exibirPreOrdem(No* ptrNoAtual) {

	//Se o n� for vazio
	if (ptrNoAtual == NULL) {
		return;
	}
	else {
		exibirDados(ptrNoAtual); // Exibe os dados do N�

		exibirPreOrdem(ptrNoAtual->esq);

		exibirPreOrdem(ptrNoAtual->dir);
	}
}


//--------------------------------------------------------
// EXIBIR ==> EM-ORDEM
//--------------------------------------------------------
void exibirEmOrdem(No* ptrNoAtual) {

	//Se o n� for vazio
	if (ptrNoAtual == NULL) {
		return;
	}
	else {
		exibirEmOrdem(ptrNoAtual->esq);

		exibirDados(ptrNoAtual); // Exibe os dados do N�

		exibirEmOrdem(ptrNoAtual->dir);
	}
}

//--------------------------------------------------------
// EXIBIR ==> P�S-ORDEM
//--------------------------------------------------------
void exibirPosOrdem(No* ptrNoAtual) {

	//Se o n� for vazio
	if (ptrNoAtual == NULL) {
		return;
	}
	else {
		exibirPosOrdem(ptrNoAtual->esq);

		exibirPosOrdem(ptrNoAtual->dir);

		exibirDados(ptrNoAtual); // Exibe os dados do N�		
	}
}


//--------------------------------------------------------
// EXIBIR DADOS DO N�
//--------------------------------------------------------
void exibirDados(No* ptrNoAtual) {

	//Se o n� for vazio
	if (ptrNoAtual == NULL) {
		cout << "N� vazio!" << endl;
		return;
	}

	/*cout << "-------------------------------------------" << endl;
	cout << "   " << ptrNoAtual << endl;
	cout << "\tEsquerdo-> " << ptrNoAtual->esq << endl;*/
	cout << "Matr�cula: " << ptrNoAtual->dados.matricula << "\t";
	cout << "Nome: " << ptrNoAtual->dados.nome << "\t";
	cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl;
	/*cout << "\tDireito-> " << ptrNoAtual->dir << endl;

	cout << "-------------------------------------------" << endl;
	cout << endl;*/
}


//--------------------------------------------------------
// EXIBIR A �RVORE
//--------------------------------------------------------
No* buscarArvore(Arvore* ptrArvore, int matricula) {
	No* ptrNo = NULL;

	//Se a �rvore N�O foi criada
	if (ptrArvore == NULL) {
		cout << "A �rvore n�o est� criada!" << endl;
		return NULL;
	}

	// Busca o N�
	ptrNo = buscarNo(ptrArvore->raiz, matricula);

	return ptrNo;
}

//--------------------------------------------------------
// EXIBIR DADOS DO N�
//--------------------------------------------------------
No* buscarNo(No* ptrNoAtual, int matricula) {

	if (ptrNoAtual == NULL) {
		return NULL;
	}

	// Se encontrou o n� pesquisado
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
// EXIBIR DADOS DO N�
//--------------------------------------------------------
void removerArvore(Arvore* ptrArvore, int matricula) {
	No* ptrNoPai = NULL;
	No* ptrNoAtual = NULL;

	//Se a �rvore N�O foi criada
	if (ptrArvore == NULL) {
		cout << "A �rvore n�o est� criada!" << endl;
		return;
	}

	ptrNoAtual = ptrArvore->raiz;

	while (ptrNoAtual != NULL) {

		// Se encontrou o n� a ser removido
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

		// Procura o n� a ser removido
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
// REMOVE O N�
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


