//
///*Crie uma fun��o que concatene as listas DiscBD e DiscED,
//do exerc�cio anterior, em uma nova lista(Curso).
//Ap�s a fun��o, imprima a lista MediaGeral*/
//
//
//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//using namespace std;
//
//// Dados sobre o ALUNO
//
//struct Dados {
//	int matricula;
//	string nome;
//	float media;
//};
//
//// Estrutura do N�
//
//struct No {
//	Dados dados; // estrutura guardada dentro da lista
//	No* proxNo; // aponta para o pr�ximo N� da lista
//};
//
//// N� in�cio da lista
//
//struct Lista {
//	int qtdNo;
//	No* inicio;
//};
//
//Lista* criarLista();
//void liberarLista(Lista * ptrLista);
//void exibirLista(Lista * ptrLista);
//bool inserirListaInicio(Lista * ptrLista, int matricula, string nome, float media);
//bool inserirListaFim(Lista * ptrLista, int matricula, string nome, float media);
//bool inserirListaOrdenada(Lista * ptrLista, int matricula, string nome, float media);
//bool removerListaInicio(Lista * ptrLista);
//bool removerListaFim(Lista * ptrLista);
//bool removerListaOrdenado(Lista * ptrLista, int matricula);
//No* pesquisarDado(Lista * ptrLista, int matricula);
//void maiorMedia(Lista * ptrLista);
//void menorMedia(Lista * ptrLista);
//void salaMedia(Lista * ptrLista);
//void calcularMedia(Lista * ptrDiscBD, Lista * ptrDiscED, Lista * ptrMediaGeral);
//void calcularMediaVersao01(Lista * ptrDiscBD, Lista * ptrDiscED, Lista * ptrMediaGeral);
//void concatenarLista(Lista * pDiscBD, Lista * pDiscED, Lista * pCurso);
//
////--------------------------------------------------------
//// MAIN
////--------------------------------------------------------
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//
//	Lista* pDiscBD;
//	Lista* pDiscED;
//	Lista* pCursos;
//
//	pDiscBD = criarLista();
//	pDiscED = criarLista();
//	pCursos = criarLista();
//
//	inserirListaFim(pDiscBD, 10, "Maria", 8.0);
//	inserirListaFim(pDiscBD, 20, "Jos�", 7.5);
//	inserirListaFim(pDiscBD, 30, "Jesus", 10.0);
//
//	inserirListaFim(pDiscED, 10, "Maria", 6.5);
//	inserirListaFim(pDiscED, 20, "Jos�", 8.5);
//	inserirListaFim(pDiscED, 30, "Jesus", 10.0);
//
//	concatenarLista(pDiscBD, pDiscED, pCursos);
//
//	exibirLista(pCursos);
//
//	liberarLista(pDiscED);
//	liberarLista(pDiscBD);
//	liberarLista(pCursos);
//
//	system("pause");
//	return 0;
//}
//
////--------------------------------------------------------
//// CRIAR LISTA
////--------------------------------------------------------
//
//Lista* criarLista() {
//
//	Lista* ptrLista;
//	ptrLista = new Lista;
//
//	// Se a lista N�O pode ser criada
//
//	if (ptrLista == NULL) {
//		cout << "N�o foi poss�vel criar a lista!" << endl;
//		return NULL;
//	}
//
//	// Como a lista est� vazia o IN�CIO aponta para NULL
//
//	ptrLista->qtdNo = 0;
//	ptrLista->inicio = NULL;
//
//	return ptrLista;
//}
//
////--------------------------------------------------------
// // LIBERAR LISTA
// //--------------------------------------------------------
//
//void liberarLista(Lista * ptrLista) {
//
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//	// Exclui cada N� da lista
//
//	while (ptrLista->inicio != NULL)
//	{
//		ptrNoAtual = ptrLista->inicio;
//		ptrLista->inicio = ptrNoAtual->proxNo;
//		delete ptrNoAtual;
//	}
//
//	delete ptrLista;
//}
//
////--------------------------------------------------------
//// INSERIR NO IN�CIO DA LISTA
////--------------------------------------------------------
//
//bool inserirListaInicio(Lista * ptrLista, int matricula, string nome, float media) {
//
//	No* ptrNoNovo;
//
//	//Se a lista N�O foi criada
//
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return false;
//	}
//
//	//---------------------------------------------------------------
//	 // Cria o novo n�
//	 //---------------------------------------------------------------
//
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
//	ptrNoNovo->proxNo = ptrLista->inicio;
//
//	ptrLista->inicio = ptrNoNovo;
//
//	// Incrementa o quantidade de N�s
//
//	ptrLista->qtdNo++;
//
//	return true;
//
//}
//
////--------------------------------------------------------
//// EXIBIR A LISTA
////--------------------------------------------------------
//
//void exibirLista(Lista * ptrLista) {
//
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//	//Se n�o tiver nenhum N� na lista
//
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	while (ptrNoAtual != NULL) {
//
//		cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//
//	}
//
//	cout << endl;
//}
//
//bool inserirListaFim(Lista * ptrLista, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return false;
//	}
//
//	//Cria o novo n�
//
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Memoria insulficiente!" << endl;
//		return false;
//	}
//
//	ptrNoNovo->dados.matricula = matricula;
//	ptrNoNovo->dados.nome = nome;
//	ptrNoNovo->dados.media = media;
//	ptrNoNovo->proxNo = NULL;
//
//	ptrNoAtual = ptrLista->inicio;
//
//	//Se n�o houver nenhum n� na lista
//	if (ptrNoAtual == NULL) {
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else {
//		//Localiza o ultimo n�
//		while (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//		ptrNoAtual->proxNo = ptrNoNovo;
//	}
//
//	//Incrementa a quantidade de Nos
//	ptrLista->qtdNo++;
//
//	return true;
//}
//
//bool inserirListaOrdenada(Lista * ptrLista, int matricula, string nome, float media) {
//
//	No* ptrNoNovo;
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	//Se a lista N�O FOI CRIADA
//	if (ptrLista == NULL) {
//		cout << "Alista n�o est� criada" << endl;
//		return false;
//	}
//
//	//Cria o novo n�
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Memoria insulficiente!" << endl;
//		return false;
//	}
//
//	ptrNoNovo->dados.matricula = matricula;
//	ptrNoNovo->dados.nome = nome;
//	ptrNoNovo->dados.media = media;
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
//		//Localiza a posi��o de inser��o
//		while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula < matricula) {
//			ptrNoAnterior = ptrNoAtual;
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//
//		//Insere no Inicio da lista
//		if (ptrNoAtual == ptrLista->inicio) {
//			ptrNoNovo->proxNo = ptrLista->inicio;
//			ptrLista->inicio = ptrNoNovo;
//		}
//		else // Insere no MEIO ou no FIM da lista
//		{
//			ptrNoNovo->proxNo = ptrNoAtual;
//			ptrNoAnterior->proxNo = ptrNoNovo;
//		}
//	}
//
//	// Incrementa o quantidade de Nos
//	ptrLista->qtdNo++;
//
//	return true;
//
//}
//
//// Remover do inicio da lista
//bool removerListaInicio(Lista * ptrLista) {
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o esta criada" << endl;
//		return false;
//	}
//
//	//Se n�o tiver nenhum N� na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista est� vazia!" << endl;
//		return false;
//	}
//
//	//Ajustar o INICIO
//	ptrNoAtual = ptrLista->inicio;
//	ptrLista->inicio = ptrNoAtual->proxNo;
//
//	//Excluir o primeiro n�
//	delete ptrNoAtual;
//
//	//Declementa o quantidade de nos
//	ptrLista->qtdNo--;
//
//	return true;
//}
//
////Remover do final da lista
//bool removerListaFim(Lista * ptrLista) {
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	//Se a lista n�o foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o foi criada!" << endl;
//		return false;
//	}
//
//	//Se n�o tiver nenhum n� na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista est� vazia!" << endl;
//		return false;
//	}
//
//	ptrNoAnterior = NULL;
//	ptrNoAtual = ptrLista->inicio;
//
//	//Localiza o no final da lista
//	while (ptrNoAtual->proxNo != NULL) {
//		ptrNoAnterior = ptrNoAtual;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	//Se for o primeiro no da lista
//	if (ptrNoAtual == ptrLista->inicio) {
//		ptrLista->inicio = NULL;
//	}
//	else {
//		ptrNoAnterior->proxNo = NULL;
//	}
//
//	//Excluir o no
//	delete ptrNoAtual;
//
//	//Declementa o quantidade de Nos
//	ptrLista->qtdNo--;
//
//	return true;
//}
//
////Remover Ordenado
//bool removerListaOrdenado(Lista * ptrLista, int matricula) {
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o foi criada!" << endl;
//		return false;
//	}
//
//	//Se n�o tiver nenhum n� na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista esta vazia" << endl;
//		return false;
//	}
//
//	ptrNoAnterior = NULL;
//	ptrNoAtual = ptrLista->inicio;
//
//	//Localiza o no que sera excluido
//	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//		ptrNoAnterior = ptrNoAtual;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	if (ptrNoAtual == NULL) {
//		cout << "A matricula " << matricula << " n�o foi encontrada" << endl;
//		return false;
//	}
//
//	//Se for o primeiro no da lista
//	if (ptrNoAtual == ptrLista->inicio) {
//		ptrLista->inicio = ptrNoAtual->proxNo;
//	}
//	else {
//		ptrNoAnterior->proxNo = ptrNoAtual->proxNo;
//	}
//
//	//Exclui o no atual
//	delete ptrNoAtual;
//
//	//Declementa quantidade de nos
//	ptrLista->qtdNo--;
//
//	return true;
//}
//
////Pesquisar matricula
//No* pesquisarDado(Lista * ptrLista, int matricula) {
//	No* ptrNoAtual;
//
//	//Se lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "Alista n�o esta criada" << endl;
//		return NULL;
//	}
//
//	//Se n�o tiver nenhum no na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return NULL;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	//Localiza o no a ser alteraldo
//	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	if (ptrNoAtual == NULL) {
//		cout << "Matricula " << matricula << " n�o foi encontrada" << endl;
//		return NULL;
//	}
//
//	return ptrNoAtual;
//}
//
//void maiorMedia(Lista * ptrLista) {
//	No* ptrNoAtual;
//	float maior;
//
//	ptrNoAtual = ptrLista->inicio;
//	maior = ptrNoAtual->dados.media;
//
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.media >= maior) {
//			maior = ptrNoAtual->dados.media;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.media == maior) {
//			cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
//			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//			cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//}
//
//void menorMedia(Lista * ptrLista) {
//	No* ptrNoAtual;
//	float menor;
//
//	ptrNoAtual = ptrLista->inicio;
//	menor = ptrNoAtual->dados.media;
//
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.media <= menor) {
//			menor = ptrNoAtual->dados.media;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.media == menor) {
//			cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
//			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//			cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//}
//
//void salaMedia(Lista * ptrLista) {
//	No* ptrNoAtual;
//	float soma = 0;
//	int totalAlunos = 0;
//
//	ptrNoAtual = ptrLista->inicio;
//
//	while (ptrNoAtual != NULL) {
//		soma += ptrNoAtual->dados.media;
//		totalAlunos++;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	soma = soma / totalAlunos;
//
//	cout << "A media da classe �: " << soma << endl << endl;
//
//}
//
//void calcularMedia(Lista * ptrDiscBD, Lista * ptrDiscED, Lista * ptrMediaGeral) {
//	No* ptrNoAtualBD;
//	No* ptrNoAtualED;
//	No* ptrNoAtualMedia;
//
//	ptrNoAtualBD = ptrDiscBD->inicio;
//	ptrNoAtualED = ptrDiscED->inicio;
//	ptrNoAtualMedia = ptrMediaGeral->inicio;
//
//	while (ptrNoAtualBD != NULL) {
//		ptrNoAtualMedia->dados.media = ((ptrNoAtualBD->dados.media + ptrNoAtualED->dados.media) / 2);
//		ptrNoAtualBD = ptrNoAtualBD->proxNo;
//		ptrNoAtualED = ptrNoAtualED->proxNo;
//		ptrNoAtualMedia = ptrNoAtualMedia->proxNo;
//	}
//}
//
//void calcularMediaVersao01(Lista * ptrDiscBD, Lista * ptrDiscED, Lista * ptrMediaGeral) {
//	No* ptrNoAtualBD;
//	No* ptrNoAtualED;
//	float totalMedia;
//
//	int matricula;
//	string nome;
//	float media;
//
//	ptrNoAtualBD = ptrDiscBD->inicio;
//	ptrNoAtualED = ptrDiscED->inicio;
//
//	// Localiza a posi��o de inser��o
//	while (ptrNoAtualBD != NULL) {
//
//		matricula = ptrNoAtualBD->dados.matricula;
//		nome = ptrNoAtualBD->dados.nome;
//
//		totalMedia = ptrNoAtualBD->dados.media;
//		totalMedia += ptrNoAtualED->dados.media;
//
//		media = totalMedia / 2;
//
//		// Inser��o
//		inserirListaFim(ptrMediaGeral, matricula, nome, media);
//
//		ptrNoAtualBD = ptrNoAtualBD->proxNo;
//		ptrNoAtualED = ptrNoAtualED->proxNo;
//	}
//}
//
//void concatenarLista(Lista * pDiscBD, Lista * pDiscED, Lista * pCurso) {
//	No* ptrNoAtual;
//
//	int matricula;
//	string nome;
//	float media;
//
//	ptrNoAtual = pDiscBD->inicio;
//
//
//	// Localiza a posi��o de inser��o
//	while (ptrNoAtual != NULL) {
//
//		matricula = ptrNoAtual->dados.matricula;
//		nome = ptrNoAtual->dados.nome;
//		media = ptrNoAtual->dados.media;
//
//		inserirListaFim(pCurso, matricula, nome, media);
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	ptrNoAtual = pDiscED->inicio;
//
//	// Localiza a posi��o de inser��o
//	while (ptrNoAtual != NULL) {
//
//		matricula = ptrNoAtual->dados.matricula;
//		nome = ptrNoAtual->dados.nome;
//		media = ptrNoAtual->dados.media;
//
//		inserirListaFim(pCurso, matricula, nome, media);
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}