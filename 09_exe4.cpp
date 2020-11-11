//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string>   // Textos em geral
//
//using namespace std;
//
//// Dados sobre o ALUNO
//struct Dados {
//	int matricula;
//	string nome;
//	float media;
//};
//
//// Estrutura do N�
//struct No {
//	No* antNo;			// aponta para o N� anterior da lista
//	Dados dados;	// estrutura guardada dentro da lista	
//	No* proxNo;			// aponta para o pr�ximo N� da lista
//};
//
//// N� in�cio da lista
//struct Lista {
//	int qtdNo;
//	No* inicio;
//};
//
//
//Lista* criarLista();
//void liberarLista(Lista* ptrLista);
//void exibirLista(Lista* ptrLista);
//
////Inserir
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media);
////Remover
//
//bool removerListaOrdenada(Lista* ptrLista, int matricula);
////Pesquisar matricula
//No* pesquisarDado(Lista* ptrLista, int matricula);
//
//void alteraMatricula(Lista* ptrLista, int matricula, int novamatricula);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Lista* pLista;
//	pLista = criarLista();
//
//
//	int matricula, novamatricula;
//	string nome;
//	float media;
//
//	//--------------------------------------
//	// Insere ORDENADO na lista
//	//--------------------------------------
//	inserirListaOrdenada(pLista, 30, "Maria", 9.5);
//	inserirListaOrdenada(pLista, 10, "Jesus", 10.0);
//	inserirListaOrdenada(pLista, 20, "Jos�", 9.0);
//	inserirListaOrdenada(pLista, 50, "Paulo", 7.5);
//	inserirListaOrdenada(pLista, 40, "Pedro", 8.0);
//
//	
//	alteraMatricula(pLista, 10, 100);
//	exibirLista(pLista);
//	
//	liberarLista (pLista);
//	system("pause");
//	return 0;
//}
//
////--------------------------------------------------------
//// CRIAR LISTA
////--------------------------------------------------------
//Lista* criarLista() {
//	Lista* ptrLista;
//
//	ptrLista = new Lista;
//
//	// Se a lista N�O pode ser criada
//	if (ptrLista == NULL) {
//		cout << "N�o foi poss�vel criar a lista!" << endl;
//		return NULL;
//	}
//
//	// Como a lista est� vazia o IN�CIO aponta para NULL	
//	ptrLista->qtdNo = 0;
//	ptrLista->inicio = NULL;
//
//	return ptrLista;
//}
//
////--------------------------------------------------------
//// LIBERAR LISTA
////--------------------------------------------------------
//void liberarLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//	// Exclui cada N� da lista
//	while (ptrLista->inicio != NULL)
//	{
//		ptrNoAtual = ptrLista->inicio;
//
//		ptrLista->inicio = ptrLista->inicio->proxNo;
//
//		delete  ptrNoAtual;
//	}
//
//	delete ptrLista;
//}
//
////--------------------------------------------------------
//// EXIBIR A LISTA
////--------------------------------------------------------
//void exibirLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//
//	//Se n�o tiver nenhum N� na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	while (ptrNoAtual != NULL) {
//		cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//
////--------------------------------------------------------
//// INSERIR EM LISTA ORDENADA
////--------------------------------------------------------
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	//---------------------------------------------------------------
//	//	Cria o novo n�
//	//---------------------------------------------------------------
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Mem�ria insulficiente!" << endl;
//		return false;
//	}
//
//	ptrNoNovo->dados.matricula = matricula;
//	ptrNoNovo->dados.nome = nome;
//	ptrNoNovo->dados.media = media;
//
//	ptrNoNovo->antNo = NULL;
//	ptrNoNovo->proxNo = NULL;
//
//	//Se a lista estiver vazia
//	if (ptrLista->inicio == NULL) {
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else
//	{
//		ptrNoAnterior = NULL;
//		ptrNoAtual = ptrLista->inicio;
//
//		// Localiza a posi��o de inser��o
//		while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula < matricula) {
//			ptrNoAnterior = ptrNoAtual;
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//
//		// Insere no IN�CIO da lista
//		if (ptrNoAtual == ptrLista->inicio) {
//			ptrNoNovo->proxNo = ptrLista->inicio;
//			ptrLista->inicio->antNo = ptrNoNovo;
//			ptrLista->inicio = ptrNoNovo;
//		}
//		else { // Insere no MEIO ou FIM da lista
//
//			ptrNoNovo->proxNo = ptrNoAtual;
//			ptrNoNovo->antNo = ptrNoAnterior;
//
//			ptrNoAnterior->proxNo = ptrNoNovo;
//
//			// Se for o meio da lista
//			if (ptrNoAtual != NULL) {
//				ptrNoAtual->antNo = ptrNoNovo;
//			}
//		}
//	}
//
//	// Incrementa o quantidade de N�s
//	ptrLista->qtdNo++;
//
//	return true;
//}
//
//
////--------------------------------------------------------
//// REMOVER DO MEIO DA LISTA
////--------------------------------------------------------
//bool removerListaOrdenada(Lista* ptrLista, int matricula) {
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	// Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return false;
//	}
//
//	ptrNoAnterior = NULL;
//	ptrNoAtual = ptrLista->inicio;
//
//	// Localizao n� que ser� exclu�do
//	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//		ptrNoAnterior = ptrNoAtual;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	if (ptrNoAtual == NULL) {
//		cout << "A matr�cula " << matricula << " n�o foi encontrada!" << endl;
//		return false;
//	}
//
//	// Se for o primeiro n� da lista
//	if (ptrNoAtual->antNo == NULL) {
//		ptrLista->inicio = ptrNoAtual->proxNo;
//
//		// Se houver mais que um n� na lista
//		if (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual->proxNo->antNo = NULL;
//		}
//	}
//	else {
//		ptrNoAnterior->proxNo = ptrNoAtual->proxNo;
//
//		// Se houver mais que um n� na lista
//		if (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual->proxNo->antNo = ptrNoAnterior;
//		}
//	}
//
//	// Exclui o n� atual
//	delete ptrNoAtual;
//
//	// Decrementa o quantidade de N�s
//	ptrLista->qtdNo--;
//
//	return true;
//}
//
////--------------------------------------------------------
//// PESQUISAR MATR�CULA
////--------------------------------------------------------
//No* pesquisarDado(Lista* ptrLista, int matricula) {
//	No* ptrNoAtual;
//
//	// Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return NULL;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	// Localiza a posi��o do n�
//	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	if (ptrNoAtual == NULL) {
//		cout << "A matr�cula " << matricula << " n�o foi encontrada!" << endl;
//	}
//
//	return ptrNoAtual;
//}
//
////--------------------------------------------------------
//// INSERIR DADOS
////--------------------------------------------------------
//void alteraMatricula(Lista* lista, int matriculaOld, int matriculaNew) {
//
//	int matricula;
//	string nome;
//	float media;
//	
//	No* noProvisorio;
//
//	noProvisorio = pesquisarDado(lista, matriculaOld);
//
//	matricula = matriculaNew;
//	nome = noProvisorio->dados.nome;
//	media = noProvisorio->dados.media;
//	
//
//	removerListaOrdenada(lista, matriculaOld);
//
//	inserirListaOrdenada(lista, matricula, nome, media);
//
//}