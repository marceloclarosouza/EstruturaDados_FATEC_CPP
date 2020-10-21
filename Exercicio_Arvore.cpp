///*Escreva uma fun��o que conte o n�mero de n�s de uma lista
//encadeada.
//Altura.A altura de um n� N em uma lista encadeada � a dist�ncia
//entre N e o fim da lista.Mais precisamente, a altura de N � o n�mero
//de passos do caminho que leva de N at� o �ltimo n� da lista.Escreva
//uma fun��o que calcule a altura de um dado n�.
//Profundidade.A profundidade de um n� N em uma lista encadeada
//� o n�mero de passos do �nico caminho que vai do primeiro n� da
//lista at� N.Escreva uma fun��o que calcule a profundidade de um
//dado n�.*/
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
//void liberarLista(Lista* ptrLista);
//void exibirLista(Lista* ptrLista);
//bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media);
//bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media);
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media);
//bool removerListaInicio(Lista* ptrLista);
//bool removerListaFim(Lista* ptrLista);
//bool removerListaOrdenado(Lista* ptrLista, int matricula);
//No* pesquisarDado(Lista* ptrLista, int matricula);
//void maiorMedia(Lista* ptrLista);
//void menorMedia(Lista* ptrLista);
//void salaMedia(Lista* ptrLista);
//void profundidade(Lista* ptrLista, int valor);
//
////--------------------------------------------------------
//// MAIN
////--------------------------------------------------------
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//
//	Lista* pLista;
//
//	pLista = criarLista();
//
//	int matricula;
//	string nome;
//	float media;
//	bool resultado;
//
//	inserirListaFim(pLista, 10, "Maria", 9.5);
//	inserirListaFim(pLista, 20, "Jos�", 9.5);
//	inserirListaFim(pLista, 30, "Jesus", 9.0);
//	inserirListaFim(pLista, 40, "Pedro", 8.0);
//	inserirListaFim(pLista, 50, "Paulo", 5.0);
//	inserirListaFim(pLista, 60, "Tiago", 8.5);
//	inserirListaFim(pLista, 70, "Mateus", 6.5);
//	inserirListaFim(pLista, 80, "Felipe", 7.0);
//	inserirListaFim(pLista, 90, "Susana", 7.5);
//	inserirListaFim(pLista, 100, "Gabriela", 10.0);
//
//	profundidade(pLista, 40);
//
//	liberarLista(pLista);
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
//void liberarLista(Lista* ptrLista) {
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
//bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media) {
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
//void exibirLista(Lista* ptrLista) {
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
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media) {
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
//bool removerListaInicio(Lista* ptrLista) {
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
//bool removerListaFim(Lista* ptrLista) {
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
//bool removerListaOrdenado(Lista* ptrLista, int matricula) {
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
//No* pesquisarDado(Lista* ptrLista, int matricula) {
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
//void maiorMedia(Lista* ptrLista) {
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
//void menorMedia(Lista* ptrLista) {
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
//void salaMedia(Lista* ptrLista) {
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
//void profundidade(Lista* ptrLista, int valor) {
//	No* ptrNoAtual;
//	int profundidade = 0;
//	int altura = 0;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		profundidade++;
//		if (ptrNoAtual->dados.matricula == valor) {
//			break;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		altura++;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	altura -= profundidade;
//
//	cout << "Profundidade = " << profundidade << endl;
//	cout << "Altura = " << altura << endl << endl;
//}