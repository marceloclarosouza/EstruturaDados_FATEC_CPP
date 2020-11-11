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
//	inserirListaOrdenada(pLista, 20, "José", 9.0);
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
////--------------------------------------------------------
//// INSERIR EM LISTA ORDENADA
////--------------------------------------------------------
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
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
//	//Se a lista estiver vazia
//	if (ptrLista->inicio == NULL) {
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else
//	{
//		ptrNoAnterior = NULL;
//		ptrNoAtual = ptrLista->inicio;
//
//		// Localiza a posição de inserção
//		while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula < matricula) {
//			ptrNoAnterior = ptrNoAtual;
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//
//		// Insere no INÍCIO da lista
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
//	// Incrementa o quantidade de Nós
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
//	//Se a lista NÃO foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
//
//	//Se não tiver nenhum Nó na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	// Encontra o último nó da lista	
//	while (ptrNoAtual->proxNo != NULL)
//	{
//		// Verifica se é a menor média
//		if (ptrNoAtual->dados.media < menorMedia) {
//			matriculaMenorMedia = ptrNoAtual->dados.matricula;
//			menorMedia = ptrNoAtual->dados.media;
//		}
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	// Verifica a média do último nó
//	if (ptrNoAtual->dados.media < menorMedia) {
//
//		matriculaMenorMedia = ptrNoAtual->dados.matricula;
//		menorMedia = ptrNoAtual->dados.media;
//	}
//
//	// Volta até o nó com menor média
//	while (ptrNoAtual != NULL) {
//
//		if (ptrNoAtual->dados.matricula == matriculaMenorMedia) {
//
//			if (ptrNoAtual->antNo != NULL) {
//				cout << "<<--- NÓ ANTERIOR --->" << endl;
//				cout << "\tMatrícula: " << ptrNoAtual->antNo->dados.matricula << endl;
//				cout << "\tNome: " << ptrNoAtual->antNo->dados.nome << endl;
//				cout << "\tMédia: " << ptrNoAtual->antNo->dados.media << endl << endl;
//			}
//
//			cout << "<<--- NÓ ATUAL --->" << endl;
//			cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//			cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
//
//
//			if (ptrNoAtual->proxNo != NULL) {
//				cout << "<<--- NÓ PRÓXIMO --->" << endl;
//				cout << "\tMatrícula: " << ptrNoAtual->proxNo->dados.matricula << endl;
//				cout << "\tNome: " << ptrNoAtual->proxNo->dados.nome << endl;
//				cout << "\tMédia: " << ptrNoAtual->proxNo->dados.media << endl << endl;
//			}
//		}
//
//		ptrNoAtual = ptrNoAtual->antNo;
//	}
//}