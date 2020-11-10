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
//	char sexo;
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
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media, char sexo);
//bool inputUser(Lista* pListaM, Lista* pListaF);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int ind;
//
//	Lista* pListaM;
//	Lista* pListaF;	
//	pListaM = criarLista();
//	pListaF = criarLista();
//
//
//	int matricula;
//	string nome;
//	float media;
//	char sexo;
//
//	inputUser(pListaM, pListaF);
//
//	cout << "Masculino" << endl << endl;
//	exibirLista(pListaM);
//	cout << endl << endl;
//	cout << "Feminino" << endl << endl;
//	exibirLista(pListaF);
//	cout << endl << endl;
//	
//	liberarLista (pListaM);
//	liberarLista (pListaF);
//
//	system("pause");
//	return 0;
//}
//
////--------------------------------------------------------
//// CRIAR LISTA
////--------------------------------------------------------
//Lista* criarLista() {
//	Lista* ptrLista;
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
//		cout << "Média: " << ptrNoAtual->dados.media << endl;
//		cout << "Sexo: " << ptrNoAtual->dados.sexo << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//
////--------------------------------------------------------
//// INSERIR EM LISTA ORDENADA
////--------------------------------------------------------
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media, char sexo) {
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
//	ptrNoNovo->dados.sexo = sexo;
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
//bool inputUser(Lista* pListaM, Lista* pListaF) {
//
//	int matricula, ind;
//	string nome;
//	float media;
//	char sexo;
//	
//
//	for (ind = 0; ind < 4; ind++) {
//		cout << "Matricula: ";
//		cin >> matricula;
//		cin.ignore();
//
//		cout << "Nome: ";
//		getline(cin, nome);
//
//		cout << "Media : ";
//		cin >> media;
//
//		cout << "Sexo: ";
//		cin >> sexo;
//
//		if (sexo == 'F' || sexo == 'f') {
//			inserirListaOrdenada(pListaF, matricula, nome, media, sexo);
//		}
//		else if (sexo == 'M' || sexo == 'm') {
//			inserirListaOrdenada(pListaM, matricula, nome, media, sexo);
//		}
//
//	}
//	return true;
//}