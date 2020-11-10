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
//bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media);
//void concatenarLista(Lista* ListaA, Lista* ListaB, Lista* ListaC);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Lista* ListaA;
//	Lista* ListaB;
//	Lista* ListaC;
//
//	ListaA = criarLista();
//	ListaB = criarLista();
//	ListaC = criarLista();
//
//
//	int matricula;
//	string nome;
//	float media;
//
//	
//	inserirListaFim(ListaA, 10, "Luis", 5.3);
//	inserirListaFim(ListaA, 20, "Jos�", 7.5);
//	inserirListaFim(ListaA, 30, "Jesus", 10.0);
//
//	inserirListaFim(ListaB, 40, "Alberto", 9.5);
//	inserirListaFim(ListaB, 50, "Luiza", 7.8);
//	inserirListaFim(ListaB, 60, "Creusa", 8.2);
//
//	concatenarLista(ListaA, ListaB, ListaC);
//
//	exibirLista(ListaC);
//	
//	liberarLista(ListaA);
//	liberarLista(ListaB);
//	liberarLista(ListaC);
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
//// INSERIR NO FINAL DA LISTA
////--------------------------------------------------------
//bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return false;
//	}
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
//	ptrNoAtual = ptrLista->inicio;
//
//	// Se n�o houver nenhum n� na lista
//	if (ptrNoAtual == NULL) {
//
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else {
//
//		// Localiza o �ltimo n�
//		while (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//		ptrNoAtual->proxNo = ptrNoNovo;
//		ptrNoNovo->antNo = ptrNoAtual;
//	}
//
//	// Incrementa o quantidade de N�s
//	ptrLista->qtdNo++;
//
//	return true;
//}
//
//
//void concatenarLista(Lista* ListaA, Lista* ListaB, Lista* ListaC) {
//		No* ptrNoAtual;
//			
//		int matricula;
//		string nome;
//		float media;
//	
//		ptrNoAtual = ListaA->inicio;
//	
//		
//		while (ptrNoAtual != NULL) {
//	
//			matricula = ptrNoAtual->dados.matricula;
//			nome = ptrNoAtual->dados.nome;
//			media = ptrNoAtual->dados.media;
//	
//			inserirListaFim(ListaC, matricula, nome, media);
//	
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//	
//		ptrNoAtual = ListaB->inicio;
//	
//		// Localiza a posi��o de inser��o
//		while (ptrNoAtual != NULL) {
//	
//			matricula = ptrNoAtual->dados.matricula;
//			nome = ptrNoAtual->dados.nome;
//			media = ptrNoAtual->dados.media;
//	
//			inserirListaFim(ListaC, matricula, nome, media);
//	
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//	}