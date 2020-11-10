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
//// Estrutura do Nó
//struct No {
//	No* antNo;			// aponta para o Nó anterior da lista
//	Dados dados;	// estrutura guardada dentro da lista	
//	No* proxNo;			// aponta para o próximo Nó da lista
//};
//
//// Nó início da lista
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
//	inserirListaFim(ListaA, 20, "José", 7.5);
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
//	// Se a lista NÃO pode ser criada
//	if (ptrLista == NULL) {
//		cout << "Não foi possível criar a lista!" << endl;
//		return NULL;
//	}
//
//	// Como a lista está vazia o INÍCIO aponta para NULL	
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
//	//Se a lista NÃO foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
//
//	// Exclui cada Nó da lista
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
//	//Se a lista NÃO foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
//
//
//	//Se não tiver nenhum Nó na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	while (ptrNoAtual != NULL) {
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
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
//	//Se a lista NÃO foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return false;
//	}
//
//	//---------------------------------------------------------------
//	//	Cria o novo nó
//	//---------------------------------------------------------------
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Memória insulficiente!" << endl;
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
//	// Se não houver nenhum nó na lista
//	if (ptrNoAtual == NULL) {
//
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else {
//
//		// Localiza o último nó
//		while (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//		ptrNoAtual->proxNo = ptrNoNovo;
//		ptrNoNovo->antNo = ptrNoAtual;
//	}
//
//	// Incrementa o quantidade de Nós
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
//		// Localiza a posição de inserção
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