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
//		cout << "M�dia: " << ptrNoAtual->dados.media << endl;
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