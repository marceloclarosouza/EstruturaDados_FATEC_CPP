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
//
//void exibirMenorMedia(Lista* ptrLista);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Lista* pLista;
//	pLista = criarLista();
//
//
//	int matricula;
//	string nome;
//	float media;
//
//	
//	inserirListaOrdenada(pLista, 30, "Maria", 9.5);
//	inserirListaOrdenada(pLista, 10, "Jesus", 10.0);
//	inserirListaOrdenada(pLista, 20, "Jos�", 9.0);
//	inserirListaOrdenada(pLista, 50, "Paulo", 7.5);
//	inserirListaOrdenada(pLista, 40, "Pedro", 8.0);
//
//	exibirMenorMedia(pLista);
//	cout << "\n\n";
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
//// EXIBIR A LISTA
////--------------------------------------------------------
//void exibirMenorMedia(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	int matriculaMenorMedia = 0;
//	float menorMedia = 100;
//
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//	//Se n�o tiver nenhum N� na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	// Encontra o �ltimo n� da lista	
//	while (ptrNoAtual->proxNo != NULL)
//	{
//		// Verifica se � a menor m�dia
//		if (ptrNoAtual->dados.media < menorMedia) {
//			matriculaMenorMedia = ptrNoAtual->dados.matricula;
//			menorMedia = ptrNoAtual->dados.media;
//		}
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	// Verifica a m�dia do �ltimo n�
//	if (ptrNoAtual->dados.media < menorMedia) {
//
//		matriculaMenorMedia = ptrNoAtual->dados.matricula;
//		menorMedia = ptrNoAtual->dados.media;
//	}
//
//	// Volta at� o n� com menor m�dia
//	while (ptrNoAtual != NULL) {
//
//		if (ptrNoAtual->dados.matricula == matriculaMenorMedia) {
//
//			if (ptrNoAtual->antNo != NULL) {
//				cout << "<<--- N� ANTERIOR --->" << endl;
//				cout << "\tMatr�cula: " << ptrNoAtual->antNo->dados.matricula << endl;
//				cout << "\tNome: " << ptrNoAtual->antNo->dados.nome << endl;
//				cout << "\tM�dia: " << ptrNoAtual->antNo->dados.media << endl << endl;
//			}
//
//			cout << "<<--- N� ATUAL --->" << endl;
//			cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
//			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//			cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl;
//
//
//			if (ptrNoAtual->proxNo != NULL) {
//				cout << "<<--- N� PR�XIMO --->" << endl;
//				cout << "\tMatr�cula: " << ptrNoAtual->proxNo->dados.matricula << endl;
//				cout << "\tNome: " << ptrNoAtual->proxNo->dados.nome << endl;
//				cout << "\tM�dia: " << ptrNoAtual->proxNo->dados.media << endl << endl;
//			}
//		}
//
//		ptrNoAtual = ptrNoAtual->antNo;
//	}
//}