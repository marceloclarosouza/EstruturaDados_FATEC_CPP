////
//////#include <iostream>
//////#include <locale.h>
//////#include <stdlib.h> // system
//////#include <string> // Textos em geral
//////
//////
//////using namespace std;
//////
//////
////////Dados sobre o Aluno
//////struct Dados {
//////	int matricula;
//////	string nome;
//////	float media;
//////};
//////
//////
////////Estrutura do N�
//////struct No {
//////	Dados dados; //estrutura guardada dentro da lista
//////	No* proxNo; //aponta para o pr�ximo N� da lista
//////};
//////
//////
////////N� in�cio da lista
//////struct Lista {
//////	int qtdNo;
//////	No* inicio;
//////};
//////
//////Lista* criarLista();
//////void liberarLista(Lista* ptrLista);
//////void exibirLista(Lista* ptrLista);
//////
//////bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media);
//////bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media);
//////bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media);
//////
//////bool removerListaInicio(Lista* ptrLista);
//////bool removerListaFim(Lista* ptrLista);
//////bool removerListaOrdenada(Lista* ptrLista, int matricula);
//////
//////
//////No* pesquisarDados(Lista* ptrLista, int matricula);
//////
//////
//////int main() {
//////	setlocale(LC_ALL, "Portuguese");
//////
//////	Lista* pLista;
//////
//////	pLista = criarLista();
//////
//////	int matricula;
//////	string nome;
//////	float media;
//////	bool resultado;
//////
//////
//////	matricula = 10;
//////	nome = "Maria";
//////	media = 8.0;
//////
//////
//////	/*inserirListaInicio(pLista, matricula, nome, media);
//////	inserirListaInicio(pLista, 7, "Jose", 6.8);
//////	inserirListaInicio(pLista, 15, "Carlos", 9.2);*/
//////
//////	/*inserirListaFim(pLista, matricula, nome, media);
//////	inserirListaFim(pLista, 7, "Jose", 6.8);
//////	inserirListaFim(pLista, 15, "Carlos", 9.2);*/
//////
//////	inserirListaOrdenada(pLista, matricula, nome, media);
//////	inserirListaOrdenada(pLista, 7, "Jose", 6.8);
//////	inserirListaOrdenada(pLista, 15, "Carlos", 9.2);
//////	inserirListaOrdenada(pLista, 10, "Lui", 5);
//////	inserirListaOrdenada(pLista, 75, "Valerio", 9.7);
//////
//////	//Antes de exluir
//////	exibirLista(pLista);
//////
//////
//////	//depois de excluir
//////	//removerListaInicio(pLista);
//////	//removerListaFim(pLista);
//////	//removerListaOrdenada(pLista, 15);
//////	//exibirLista(pLista);
//////
//////	
//////
//////	//pesquisa e altera aluo
//////
//////	No* pNoAluno;
//////	pNoAluno = pesquisarDados(pLista, 15);
//////
//////	if (pNoAluno != NULL) {
//////
//////		pNoAluno->dados.nome = "Jose";
//////		pNoAluno->dados.media = 6.8;
//////	}
//////	else {
//////		cout << "Ocorreu um erro na procura dos dados" << endl;
//////	}
//////
//////	exibirLista(pLista);
//////
//////	liberarLista(pLista);	
//////
//////	system("pause");
//////
//////	return 0;
//////}
//////
//////
//////
////////Iniciar a lista
//////Lista* criarLista() {
//////	Lista* ptrLista;
//////
//////	ptrLista = new Lista;
//////
//////	//Se a lista N�o pode ser criada
//////	if (ptrLista == NULL) {
//////		cout << "N�o foi poss�vel criar a lista!" << endl;
//////		return NULL;
//////	}
//////
//////	//como a lista est� vazia o In�cio aponta para o NULL
//////	ptrLista->qtdNo = 0;
//////	ptrLista->inicio = NULL;
//////
//////	return ptrLista;
//////}
//////
//////
//////
////////Liberar a lista
//////void liberarLista(Lista* ptrLista) {
//////	No* ptrNoAtual;
//////
//////	//Se a lista N�o foi criada
//////	if (ptrLista == NULL) {
//////		cout << "A lista n�o est� criada!" << endl;
//////		return;
//////	}
//////
//////	//Exclui cada N� da lista
//////	while (ptrLista->inicio != NULL) {
//////		ptrNoAtual = ptrLista->inicio;
//////
//////		ptrLista->inicio = ptrNoAtual->proxNo;
//////		delete ptrNoAtual;
//////	}
//////
//////	delete ptrLista;
//////}
//////
//////
//////
////////Inserir no in�cio da lista
//////bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media) {
//////	No* ptrNoNovo;
//////
//////	//Se a lista N�o foi craida
//////	if (ptrLista == NULL) {
//////		cout << "A Lista n�o est� criada!" << endl;
//////		return false;
//////	}
//////
//////
//////	//Cria o novo N�
//////	ptrNoNovo = new No;
//////
//////	if (ptrNoNovo == NULL) {
//////		cout << "Mem�ria insuficiente! " << endl;
//////		return false;
//////	}
//////
//////	ptrNoNovo->dados.matricula = matricula;
//////	ptrNoNovo->dados.nome = nome;
//////	ptrNoNovo->dados.media = media;
//////	ptrNoNovo->proxNo = ptrLista->inicio;
//////
//////	ptrLista->inicio = ptrNoNovo;
//////
//////	//Incrementa a quantidade de N�s
//////	ptrLista->qtdNo++;
//////	return true;
//////}
//////
//////
//////
////////Exibir lista
//////void exibirLista(Lista* ptrLista) {
//////	No* ptrNoAtual;
//////
//////	//Se a lista N�o foi craida
//////	if (ptrLista == NULL) {
//////		cout << "A Lista n�o est� criada!" << endl;
//////		return;
//////	}
//////
//////	//Se n~;ao tiver nehum N� na lista
//////	if (ptrLista->inicio == NULL) {
//////		cout << "A lista est� vazia!" <<endl;
//////		return;
//////	}
//////
//////	ptrNoAtual = ptrLista->inicio;
//////
//////	while (ptrNoAtual != NULL) {
//////		cout << "Matricula: " << ptrNoAtual->dados.matricula << endl;
//////		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//////		cout << "Media: " << ptrNoAtual->dados.media << endl;
//////		ptrNoAtual = ptrNoAtual->proxNo;
//////	}
//////	cout << endl;
//////}
//////
//////
//////
////////Inserir no final da lista
//////bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media) {
//////	No* ptrNoNovo;
//////	No* ptrNoAtual;
//////
//////	//Se a lista N�O foi criada
//////	if (ptrLista == NULL) {
//////		cout << "A lista n�o est� criada!" << endl;
//////		return false;
//////	}
//////
//////	//---------------------------------------------------------------
//////   // Cria o novo n�
//////   //---------------------------------------------------------------
//////	ptrNoNovo = new No;
//////
//////	if (ptrNoNovo == NULL) {
//////		cout << "Mem�ria insulficiente!" << endl;
//////		return false;
//////	}
//////
//////	ptrNoNovo->dados.matricula = matricula;
//////	ptrNoNovo->dados.nome = nome;
//////	ptrNoNovo->dados.media = media;
//////	ptrNoNovo->proxNo = NULL;
//////	ptrNoAtual = ptrLista->inicio;
//////
//////	// Se n�o houver nenhum n� na lista
//////	if (ptrNoAtual == NULL) {
//////		ptrLista->inicio = ptrNoNovo;
//////	}
//////	else {
//////		// Localiza o �ltimo n�
//////		while (ptrNoAtual->proxNo != NULL) {
//////			ptrNoAtual = ptrNoAtual->proxNo;
//////		}
//////		ptrNoAtual->proxNo = ptrNoNovo;
//////	}
//////	// Incrementa o quantidade de N�s
//////	ptrLista->qtdNo++;
//////
//////	return true;
//////}
//////
//////
//////
////////Inserir Lista Ordenada
//////bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media) {
//////	No* ptrNoNovo;
//////	No* ptrNoAnterior;
//////	No* ptrNoAtual;
//////
//////	//Se a Lista N�O foi Criada
//////	if (ptrLista == NULL) {
//////		cout << "A Lista N�o Est� Criada!" << endl;
//////		return false;
//////	}
//////	//-------------------------
//////	//Cria Novo N�
//////	//------------------------
//////	ptrNoNovo = new No;
//////
//////	if (ptrNoNovo == NULL) {
//////		cout << "Memoria insulficiente" << endl;
//////		return false;
//////	}
//////
//////	ptrNoNovo->dados.matricula = matricula;
//////	ptrNoNovo->dados.nome = nome;
//////	ptrNoNovo->dados.media = media;
//////	ptrNoNovo->proxNo = NULL;
//////	
//////	//se a lista estiver vazia
//////	if (ptrNoNovo == NULL) {
//////		ptrLista->inicio == ptrNoNovo;
//////				
//////	}
//////	else {
//////		ptrNoAnterior = NULL;
//////		ptrNoAtual = ptrLista->inicio;
//////
//////		//Localiza a Posi��o de Inser��o
//////		while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula < matricula) {
//////			ptrNoAnterior = ptrNoAtual;
//////			ptrNoAtual = ptrNoAtual->proxNo;
//////		}
//////
//////		//Insere No �nicio da Lista
//////		if (ptrNoAtual == ptrLista->inicio) {
//////			ptrLista->inicio = ptrNoNovo;
//////		}
//////		else {//Insere no Meio ou no Fim da Lista
//////			ptrNoNovo->proxNo = ptrNoAtual;
//////			ptrNoAnterior->proxNo = ptrNoNovo;
//////		}
//////	}
//////
//////	//Incrementa a Quantidade de N�
//////	ptrLista->qtdNo++;
//////	return true;
//////}
//////
//////
//////
////////Remover do inicio da lista
//////bool removerListaInicio(Lista* ptrLista) {
//////	No* ptrNoAtual;
//////
//////	//Se a lista n~;ao foi criada
//////	if (ptrLista == NULL) {
//////		cout << "A lista n~;ao est� criada" << endl;
//////		return false;
//////	}
//////
//////	//Se n~;ao tiver nenhum N� na ista
//////	if (ptrLista->inicio == NULL) {
//////		cout << "A lista est� vazia" << endl;
//////		return false;
//////	}
//////
//////	//Ajusta o inicio
//////	ptrNoAtual = ptrLista->inicio;
//////	ptrLista->inicio = ptrNoAtual->proxNo;
//////
//////	//Exclui o primeiro n�
//////	delete ptrNoAtual;
//////
//////	//Decrementa a quantidade de N�s
//////	ptrLista->qtdNo--;
//////	return true;
//////}
//////
//////
//////
////////Remover o final da lista
//////bool removerListaFim(Lista* ptrLista) {
//////	No* ptrNoAnterior;
//////	No* ptrNoAtual;
//////
//////	//Se a lista n~;ao foi criada
//////	if (ptrLista == NULL) {
//////		cout << "A lista n~;ao est� criada" << endl;
//////		return false;
//////	}
//////
//////	//Se n~;ao tiver nenhum N� na lista
//////	if (ptrLista->inicio == NULL) {
//////		cout << "A lista est� vazia" << endl;
//////		return false;
//////	}
//////
//////	ptrNoAnterior = NULL;
//////	ptrNoAtual = ptrLista->inicio;
//////
//////	//Localiza o n� final da lista
//////	while (ptrNoAtual->proxNo != NULL) {
//////		ptrNoAnterior = ptrNoAtual;
//////		ptrNoAtual = ptrNoAtual->proxNo;
//////
//////	}
//////
//////	//Se for o primeiro n� da ista
//////	if (ptrNoAtual == ptrLista->inicio) {
//////		ptrLista->inicio = NULL;
//////	}
//////	else {
//////		ptrNoAnterior->proxNo = NULL;
//////	}
//////	
//////	//Exclui o n�
//////	delete ptrNoAtual;
//////
//////	//Decrementa a quantidade de n�s
//////	ptrLista->qtdNo--;
//////
//////	return true;
//////
//////}
//////
//////
////////Remover ordenado
//////bool removerListaOrdenada(Lista* ptrLista, int matricula) {
//////	No* ptrNoAnterior;
//////	No* ptrNoAtual;
//////
//////	//Se a lista n~;ao foi criada
//////	if (ptrLista == NULL) {
//////		cout << "Alista n~;ao esta criada" << endl;
//////		return false;
//////	}
//////
//////	//Se n~;ao tiver nenhum N� na lista
//////	if (ptrLista->inicio == NULL) {
//////		cout<<"A lista est� vazia" << endl;
//////		return false;
//////	}
//////
//////	ptrNoAnterior = NULL;
//////	ptrNoAtual = ptrLista->inicio;
//////
//////	//localizar o n� que ser� exluido
//////	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//////		ptrNoAnterior = ptrNoAtual;
//////		ptrNoAtual = ptrNoAtual->proxNo;
//////	}
//////
//////	if (ptrNoAtual == NULL) {
//////		cout << "A matricula " << matricula << "n�o foi encontrada" << endl;
//////		return false;
//////	}
//////
//////	//Se for o primeiro n� da lista
//////	if (ptrNoAtual == ptrLista->inicio) {
//////		ptrLista->inicio = ptrNoAtual->proxNo;
//////	}
//////	else {
//////		ptrNoAnterior->proxNo = ptrNoAtual->proxNo;
//////	}
//////
//////	//Exclui o n� atual
//////	delete ptrNoAtual;
//////
//////	//Decrementa a quantidade de n�s
//////	ptrLista->qtdNo--;
//////
//////	return true;
//////
//////}
//////
////////pesquisar matricula
//////No* pesquisarDados(Lista* ptrLista, int matricula) {
//////	No* ptrNoAtual;
//////
//////	//Se a lista n~;ao foi criada
//////	if (ptrLista == NULL) {
//////		cout << "Alista n~;ao esta criada" << endl;
//////		return NULL;
//////	}
//////
//////	//Se n~;ao tiver nenhum N� na lista
//////	if (ptrLista->inicio == NULL) {
//////		cout << NULL;
//////	}
//////
//////	ptrNoAtual = ptrLista->inicio;
//////
//////	//Localiza o n� a ser alterado
//////	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//////		ptrNoAtual = ptrNoAtual->proxNo;
//////	}
//////
//////	if (ptrNoAtual == NULL) {
//////		cout << "A matricula " << matricula << " nao foi encontrada" << endl;
//////		return NULL;
//////	}
//////	return ptrNoAtual;
//////}
//////
////
////
////
////
////
////
////
////Insira, via programa��o, 10 alunos a uma lista. Em seguida,
////crie 3 fun��es, todas recebem como par�metro a lista.
////A primeira deve encontrar e imprimir a maior m�dia.
////A segunda deve encontrar a imprimir a menor m�dia.
////A terceira deve calcular e imprimir a m�dia geral.
//////////////
//////////////#include <iostream>
//////////////#include <locale.h>
//////////////#include <stdlib.h> // system
//////////////#include <string> // Textos em geral
//////////////
//////////////
//////////////using namespace std;
//////////////
//////////////
////////////////Dados sobre o Aluno
//////////////struct Dados {
//////////////	int matricula;
//////////////	string nome;
//////////////	float media;
//////////////};
//////////////
//////////////
////////////////Estrutura do N�
//////////////struct No {
//////////////	Dados dados; //estrutura guardada dentro da lista
//////////////	No* proxNo; //aponta para o pr�ximo N� da lista
//////////////};
//////////////
//////////////
////////////////N� in�cio da lista
//////////////struct Lista {
//////////////	int qtdNo;
//////////////	No* inicio;
//////////////};
//////////////
//////////////Lista* criarLista();
//////////////void liberarLista(Lista* ptrLista);
//////////////void exibirLista(Lista* ptrLista);
//////////////
//////////////bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media);
//////////////bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media);
//////////////bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media);
//////////////
//////////////bool removerListaInicio(Lista* ptrLista);
//////////////bool removerListaFim(Lista* ptrLista);
//////////////bool removerListaOrdenada(Lista* ptrLista, int matricula);
//////////////
//////////////
//////////////void encontrarMenorMedia(Lista* ptrLista);
//////////////void encontrarMaiorMedia(Lista* ptrLista);
//////////////
//////////////
//////////////No* pesquisarDados(Lista* ptrLista, int matricula);
//////////////
//////////////
//////////////int main() {
//////////////	setlocale(LC_ALL, "Portuguese");
//////////////
//////////////	Lista* pLista;
//////////////
//////////////	pLista = criarLista();
//////////////
//////////////	int matricula;
//////////////	string nome;
//////////////	float media;
//////////////	bool resultado;
//////////////
//////////////
//////////////	inserirListaOrdenada(pLista, 7, "Jose", 6.8);
//////////////	inserirListaOrdenada(pLista, 15, "Carlos", 9.2);
//////////////	inserirListaOrdenada(pLista, 10, "Lui", 5);
//////////////	inserirListaOrdenada(pLista, 75, "Valerio", 9.7);
//////////////
//////////////	//Antes de exluir
//////////////	exibirLista(pLista);
//////////////	encontrarMenorMedia(pLista);
//////////////	encontrarMaiorMedia(pLista);
//////////////
//////////////	//pesquisa e altera aluo
//////////////
//////////////	No* pNoAluno;
//////////////	pNoAluno = pesquisarDados(pLista, 15);
//////////////
//////////////	if (pNoAluno != NULL) {
//////////////
//////////////		pNoAluno->dados.nome = "Jose";
//////////////		pNoAluno->dados.media = 6.8;
//////////////	}
//////////////	else {
//////////////		cout << "Ocorreu um erro na procura dos dados" << endl;
//////////////	}
//////////////
//////////////	exibirLista(pLista);
//////////////
//////////////	liberarLista(pLista);	
//////////////
//////////////	system("pause");
//////////////
//////////////	return 0;
//////////////}
//////////////
//////////////
//////////////
////////////////Iniciar a lista
//////////////Lista* criarLista() {
//////////////	Lista* ptrLista;
//////////////
//////////////	ptrLista = new Lista;
//////////////
//////////////	//Se a lista N�o pode ser criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "N�o foi poss�vel criar a lista!" << endl;
//////////////		return NULL;
//////////////	}
//////////////
//////////////	//como a lista est� vazia o In�cio aponta para o NULL
//////////////	ptrLista->qtdNo = 0;
//////////////	ptrLista->inicio = NULL;
//////////////
//////////////	return ptrLista;
//////////////}
//////////////
//////////////
//////////////
////////////////Liberar a lista
//////////////void liberarLista(Lista* ptrLista) {
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a lista N�o foi criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A lista n�o est� criada!" << endl;
//////////////		return;
//////////////	}
//////////////
//////////////	//Exclui cada N� da lista
//////////////	while (ptrLista->inicio != NULL) {
//////////////		ptrNoAtual = ptrLista->inicio;
//////////////
//////////////		ptrLista->inicio = ptrNoAtual->proxNo;
//////////////		delete ptrNoAtual;
//////////////	}
//////////////
//////////////	delete ptrLista;
//////////////}
//////////////
//////////////
//////////////
////////////////Inserir no in�cio da lista
//////////////bool inserirListaInicio(Lista* ptrLista, int matricula, string nome, float media) {
//////////////	No* ptrNoNovo;
//////////////
//////////////	//Se a lista N�o foi craida
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A Lista n�o est� criada!" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////
//////////////	//Cria o novo N�
//////////////	ptrNoNovo = new No;
//////////////
//////////////	if (ptrNoNovo == NULL) {
//////////////		cout << "Mem�ria insuficiente! " << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	ptrNoNovo->dados.matricula = matricula;
//////////////	ptrNoNovo->dados.nome = nome;
//////////////	ptrNoNovo->dados.media = media;
//////////////	ptrNoNovo->proxNo = ptrLista->inicio;
//////////////
//////////////	ptrLista->inicio = ptrNoNovo;
//////////////
//////////////	//Incrementa a quantidade de N�s
//////////////	ptrLista->qtdNo++;
//////////////	return true;
//////////////}
//////////////
//////////////
//////////////
////////////////Exibir lista
//////////////void exibirLista(Lista* ptrLista) {
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a lista N�o foi craida
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A Lista n�o est� criada!" << endl;
//////////////		return;
//////////////	}
//////////////
//////////////	//Se n~;ao tiver nehum N� na lista
//////////////	if (ptrLista->inicio == NULL) {
//////////////		cout << "A lista est� vazia!" <<endl;
//////////////		return;
//////////////	}
//////////////
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	while (ptrNoAtual != NULL) {
//////////////		cout << "Matricula: " << ptrNoAtual->dados.matricula << endl;
//////////////		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//////////////		cout << "Media: " << ptrNoAtual->dados.media << endl;
//////////////		ptrNoAtual = ptrNoAtual->proxNo;
//////////////	}
//////////////	cout << endl;
//////////////}
//////////////
//////////////
//////////////
////////////////Inserir no final da lista
//////////////bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media) {
//////////////	No* ptrNoNovo;
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a lista N�O foi criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A lista n�o est� criada!" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	//---------------------------------------------------------------
//////////////   // Cria o novo n�
//////////////   //---------------------------------------------------------------
//////////////	ptrNoNovo = new No;
//////////////
//////////////	if (ptrNoNovo == NULL) {
//////////////		cout << "Mem�ria insulficiente!" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	ptrNoNovo->dados.matricula = matricula;
//////////////	ptrNoNovo->dados.nome = nome;
//////////////	ptrNoNovo->dados.media = media;
//////////////	ptrNoNovo->proxNo = NULL;
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	// Se n�o houver nenhum n� na lista
//////////////	if (ptrNoAtual == NULL) {
//////////////		ptrLista->inicio = ptrNoNovo;
//////////////	}
//////////////	else {
//////////////		// Localiza o �ltimo n�
//////////////		while (ptrNoAtual->proxNo != NULL) {
//////////////			ptrNoAtual = ptrNoAtual->proxNo;
//////////////		}
//////////////		ptrNoAtual->proxNo = ptrNoNovo;
//////////////	}
//////////////	// Incrementa o quantidade de N�s
//////////////	ptrLista->qtdNo++;
//////////////
//////////////	return true;
//////////////}
//////////////
//////////////
//////////////
////////////////Inserir Lista Ordenada
//////////////bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media) {
//////////////	No* ptrNoNovo;
//////////////	No* ptrNoAnterior;
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a Lista N�O foi Criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A Lista N�o Est� Criada!" << endl;
//////////////		return false;
//////////////	}
//////////////	//-------------------------
//////////////	//Cria Novo N�
//////////////	//------------------------
//////////////	ptrNoNovo = new No;
//////////////
//////////////	if (ptrNoNovo == NULL) {
//////////////		cout << "Memoria insulficiente" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	ptrNoNovo->dados.matricula = matricula;
//////////////	ptrNoNovo->dados.nome = nome;
//////////////	ptrNoNovo->dados.media = media;
//////////////	ptrNoNovo->proxNo = NULL;
//////////////	
//////////////	//se a lista estiver vazia
//////////////	if (ptrNoNovo == NULL) {
//////////////		ptrLista->inicio == ptrNoNovo;
//////////////				
//////////////	}
//////////////	else {
//////////////		ptrNoAnterior = NULL;
//////////////		ptrNoAtual = ptrLista->inicio;
//////////////
//////////////		//Localiza a Posi��o de Inser��o
//////////////		while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula < matricula) {
//////////////			ptrNoAnterior = ptrNoAtual;
//////////////			ptrNoAtual = ptrNoAtual->proxNo;
//////////////		}
//////////////
//////////////		//Insere No �nicio da Lista
//////////////		if (ptrNoAtual == ptrLista->inicio) {
//////////////			ptrLista->inicio = ptrNoNovo;
//////////////		}
//////////////		else {//Insere no Meio ou no Fim da Lista
//////////////			ptrNoNovo->proxNo = ptrNoAtual;
//////////////			ptrNoAnterior->proxNo = ptrNoNovo;
//////////////		}
//////////////	}
//////////////
//////////////	//Incrementa a Quantidade de N�
//////////////	ptrLista->qtdNo++;
//////////////	return true;
//////////////}
//////////////
//////////////
//////////////
////////////////Remover do inicio da lista
//////////////bool removerListaInicio(Lista* ptrLista) {
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a lista n~;ao foi criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A lista n~;ao est� criada" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	//Se n~;ao tiver nenhum N� na ista
//////////////	if (ptrLista->inicio == NULL) {
//////////////		cout << "A lista est� vazia" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	//Ajusta o inicio
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////	ptrLista->inicio = ptrNoAtual->proxNo;
//////////////
//////////////	//Exclui o primeiro n�
//////////////	delete ptrNoAtual;
//////////////
//////////////	//Decrementa a quantidade de N�s
//////////////	ptrLista->qtdNo--;
//////////////	return true;
//////////////}
//////////////
//////////////
//////////////
////////////////Remover o final da lista
//////////////bool removerListaFim(Lista* ptrLista) {
//////////////	No* ptrNoAnterior;
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a lista n~;ao foi criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A lista n~;ao est� criada" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	//Se n~;ao tiver nenhum N� na lista
//////////////	if (ptrLista->inicio == NULL) {
//////////////		cout << "A lista est� vazia" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	ptrNoAnterior = NULL;
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	//Localiza o n� final da lista
//////////////	while (ptrNoAtual->proxNo != NULL) {
//////////////		ptrNoAnterior = ptrNoAtual;
//////////////		ptrNoAtual = ptrNoAtual->proxNo;
//////////////
//////////////	}
//////////////
//////////////	//Se for o primeiro n� da ista
//////////////	if (ptrNoAtual == ptrLista->inicio) {
//////////////		ptrLista->inicio = NULL;
//////////////	}
//////////////	else {
//////////////		ptrNoAnterior->proxNo = NULL;
//////////////	}
//////////////	
//////////////	//Exclui o n�
//////////////	delete ptrNoAtual;
//////////////
//////////////	//Decrementa a quantidade de n�s
//////////////	ptrLista->qtdNo--;
//////////////
//////////////	return true;
//////////////
//////////////}
//////////////
//////////////
////////////////Remover ordenado
//////////////bool removerListaOrdenada(Lista* ptrLista, int matricula) {
//////////////	No* ptrNoAnterior;
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a lista n~;ao foi criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "Alista n~;ao esta criada" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	//Se n~;ao tiver nenhum N� na lista
//////////////	if (ptrLista->inicio == NULL) {
//////////////		cout<<"A lista est� vazia" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	ptrNoAnterior = NULL;
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	//localizar o n� que ser� exluido
//////////////	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//////////////		ptrNoAnterior = ptrNoAtual;
//////////////		ptrNoAtual = ptrNoAtual->proxNo;
//////////////	}
//////////////
//////////////	if (ptrNoAtual == NULL) {
//////////////		cout << "A matricula " << matricula << "n�o foi encontrada" << endl;
//////////////		return false;
//////////////	}
//////////////
//////////////	//Se for o primeiro n� da lista
//////////////	if (ptrNoAtual == ptrLista->inicio) {
//////////////		ptrLista->inicio = ptrNoAtual->proxNo;
//////////////	}
//////////////	else {
//////////////		ptrNoAnterior->proxNo = ptrNoAtual->proxNo;
//////////////	}
//////////////
//////////////	//Exclui o n� atual
//////////////	delete ptrNoAtual;
//////////////
//////////////	//Decrementa a quantidade de n�s
//////////////	ptrLista->qtdNo--;
//////////////
//////////////	return true;
//////////////
//////////////}
//////////////
////////////////pesquisar matricula
//////////////No* pesquisarDados(Lista* ptrLista, int matricula) {
//////////////	No* ptrNoAtual;
//////////////
//////////////	//Se a lista n~;ao foi criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "Alista n~;ao esta criada" << endl;
//////////////		return NULL;
//////////////	}
//////////////
//////////////	//Se n~;ao tiver nenhum N� na lista
//////////////	if (ptrLista->inicio == NULL) {
//////////////		cout << NULL;
//////////////	}
//////////////
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	//Localiza o n� a ser alterado
//////////////	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
//////////////		ptrNoAtual = ptrNoAtual->proxNo;
//////////////	}
//////////////
//////////////	if (ptrNoAtual == NULL) {
//////////////		cout << "A matricula " << matricula << " nao foi encontrada" << endl;
//////////////		return NULL;
//////////////	}
//////////////	return ptrNoAtual;
//////////////}
//////////////
//////////////
//////////////
//////////////
//////////////void encontrarMaiorMedia(Lista* ptrLista) {
//////////////	No* ptrNoAtual;
//////////////	float maiorMedia = 0
//////////////
//////////////
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	// Localiza a posi��o de inser��o
//////////////	while (ptrNoAtual != NULL) {
//////////////
//////////////		if (ptrNoAtual->dados.media > maiorMedia) {
//////////////			maiorMedia = ptrNoAtual->dados.media;
//////////////		}
//////////////
//////////////		ptrNoAtual = ptrNoAtual->proxNo;
//////////////	}
//////////////
//////////////	cout << "Maior m�dia: " << maiorMedia;
//////////////}
//////////////
//////////////
//////////////void encontrarMenorMedia(Lista* ptrLista) {
//////////////	No* ptrNoAtual;
//////////////	float menorMedia = 11;
//////////////
//////////////
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	// Localiza a posi��o de inser��o
//////////////	while (ptrNoAtual != NULL) {
//////////////
//////////////		if (ptrNoAtual->dados.media < menorMedia) {
//////////////			menorMedia = ptrNoAtual->dados.media;
//////////////		}
//////////////
//////////////		ptrNoAtual = ptrNoAtual->proxNo;
//////////////	}
//////////////
//////////////	cout << "Menor m�dia: " << maiorMedia;
//////////////}
//////////////
//////////////void encontrarMediaGeral(Lista* ptrLista) {
//////////////	No* ptrNoAtual;
//////////////
//////////////	float totalMedia = 0;
//////////////	float mediaGeral;
//////////////	int totalAlunos = 0;
//////////////
//////////////
//////////////	// Se a lista N�O foi criada
//////////////	if (ptrLista == NULL) {
//////////////		cout << "A lista n�o est� criada!" << endl;
//////////////	}
//////////////
//////////////	ptrNoAtual = ptrLista->inicio;
//////////////
//////////////	// Localiza a posi��o de inser��o
//////////////	while (ptrNoAtual != NULL) {
//////////////
//////////////		totalMedia += ptrNoAtual->dados.media;
//////////////		totalAlunos++;
//////////////
//////////////		ptrNoAtual = ptrNoAtual->proxNo;
//////////////	}
//////////////
//////////////	mediaGeral = (float)totalMedia / totalAlunos;
//////////////
//////////////	cout << "M�dia geral: " << mediaGeral << endl << endl;
//////////////
//////////////}
////
////
////
/////*Cria duas listas chamadas DiscBD e DiscED. Insira,
////programaticamente, 3 alunos na lista DiscBD, e os mesmos 3
////em DiscED. Crie uma terceira lista vazia (MediaGeral).
////Crie uma fun��o que receba como par�metros as 3 listas,
////calcule a m�dia entre DiscBD e DiscED e coloque o resultado
////em MediaGeral.
////Ap�s a fun��o, imprima a lista MediaGeral;*/
////
////
////#include <iostream>
////#include <locale.h>
////#include <stdlib.h> // system
////#include <string> // Textos em geral
////
////
////using namespace std;
////
////
//////Dados sobre o Aluno
////struct Dados {
////	int matricula;
////	string nome;
////	float media;
////};
////
////
//////Estrutura do N�
////struct No {
////	Dados dados; //estrutura guardada dentro da lista
////	No* proxNo; //aponta para o pr�ximo N� da lista
////};
////
////
//////N� in�cio da lista
////struct Lista {
////	int qtdNo;
////	No* inicio;
////};
////
////Lista* criarLista();
////void liberarLista(Lista* ptrLista);
////void exibirLista(Lista* ptrLista);
////
////bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media);
////void calcularMediaVersao01(Lista* pBD, Lista* pED, Lista* pmediaGeral);
////No* pesquisarDados(Lista* ptrLista, int matricula);
////
////
////int main() {
////	setlocale(LC_ALL, "Portuguese");
////
////	Lista* pDB;
////	Lista* pED;
////	Lista* pmediaGeral;
////
////	pDB = criarLista();
////	pED = criarLista();
////	pmediaGeral = criarLista();
////
////	
////	inserirListaOrdenada(pDB, 7, "Jose", 8);
////	inserirListaOrdenada(pDB, 15, "Carlos", 7.5);
////	inserirListaOrdenada(pDB, 10, "Lui", 10);
////	exibirLista(pDB);
////
////	cout << endl << endl;
////
////	inserirListaOrdenada(pED, 7, "Jose", 6.5);
////	inserirListaOrdenada(pED, 15, "Carlos", 8.5);
////	inserirListaOrdenada(pED, 10, "Lui", 10);
////	exibirLista(pED);
////
////	cout << endl << endl;
////
////	calcularMediaVersao01(pDB, pED, pmediaGeral);
////	exibirLista(pmediaGeral);
////
////	liberarLista(pDB);
////	liberarLista(pED);
////	liberarLista(pmediaGeral);
////
////	system("pause");
////
////	return 0;
////}
////
////
//////Iniciar a lista
////Lista* criarLista() {
////	Lista* ptrLista;
////
////	ptrLista = new Lista;
////
////	//Se a lista N�o pode ser criada
////	if (ptrLista == NULL) {
////		cout << "N�o foi poss�vel criar a lista!" << endl;
////		return NULL;
////	}
////
////	//como a lista est� vazia o In�cio aponta para o NULL
////	ptrLista->qtdNo = 0;
////	ptrLista->inicio = NULL;
////
////	return ptrLista;
////}
////
////
//////Liberar a lista
////void liberarLista(Lista* ptrLista) {
////	No* ptrNoAtual;
////
////	//Se a lista N�o foi criada
////	if (ptrLista == NULL) {
////		cout << "A lista n�o est� criada!" << endl;
////		return;
////	}
////
////	//Exclui cada N� da lista
////	while (ptrLista->inicio != NULL) {
////		ptrNoAtual = ptrLista->inicio;
////
////		ptrLista->inicio = ptrNoAtual->proxNo;
////		delete ptrNoAtual;
////	}
////
////	delete ptrLista;
////}
////
////
//////Exibir lista
////void exibirLista(Lista* ptrLista) {
////	No* ptrNoAtual;
////
////	//Se a lista N�o foi craida
////	if (ptrLista == NULL) {
////		cout << "A Lista n�o est� criada!" << endl;
////		return;
////	}
////
////	//Se n~;ao tiver nehum N� na lista
////	if (ptrLista->inicio == NULL) {
////		cout << "A lista est� vazia!" <<endl;
////		return;
////	}
////
////	ptrNoAtual = ptrLista->inicio;
////
////	while (ptrNoAtual != NULL) {
////		cout << "Matricula: " << ptrNoAtual->dados.matricula << endl;
////		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
////		cout << "Media: " << ptrNoAtual->dados.media << endl;
////		ptrNoAtual = ptrNoAtual->proxNo;
////	}
////	cout << endl;
////}
////
////
//////Inserir Lista Ordenada
////bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media) {
////	No* ptrNoNovo;
////	No* ptrNoAnterior;
////	No* ptrNoAtual;
////
////	//Se a Lista N�O foi Criada
////	if (ptrLista == NULL) {
////		cout << "A Lista N�o Est� Criada!" << endl;
////		return false;
////	}
////	//-------------------------
////	//Cria Novo N�
////	//------------------------
////	ptrNoNovo = new No;
////
////	if (ptrNoNovo == NULL) {
////		cout << "Memoria insulficiente" << endl;
////		return false;
////	}
////
////	ptrNoNovo->dados.matricula = matricula;
////	ptrNoNovo->dados.nome = nome;
////	ptrNoNovo->dados.media = media;
////	ptrNoNovo->proxNo = NULL;
////	
////	//se a lista estiver vazia
////	if (ptrNoNovo == NULL) {
////		ptrLista->inicio == ptrNoNovo;
////				
////	}
////	else {
////		ptrNoAnterior = NULL;
////		ptrNoAtual = ptrLista->inicio;
////
////		//Localiza a Posi��o de Inser��o
////		while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula < matricula) {
////			ptrNoAnterior = ptrNoAtual;
////			ptrNoAtual = ptrNoAtual->proxNo;
////		}
////
////		//Insere No �nicio da Lista
////		if (ptrNoAtual == ptrLista->inicio) {
////			ptrLista->inicio = ptrNoNovo;
////		}
////		else {//Insere no Meio ou no Fim da Lista
////			ptrNoNovo->proxNo = ptrNoAtual;
////			ptrNoAnterior->proxNo = ptrNoNovo;
////		}
////	}
////
////	//Incrementa a Quantidade de N�
////	ptrLista->qtdNo++;
////	return true;
////}
////
////void calcularMediaVersao01(Lista* pBD,
////	Lista* pED,
////	Lista* pmediaGeral) {
////	No* ptrNoAtualBD;
////	No* ptrNoAtualED;
////	float totalMedia;
////
////	int matricula;
////	string nome;
////	float media;
////
////	ptrNoAtualBD = pBD->inicio;
////	ptrNoAtualED = pED->inicio;
////
////	// Localiza a posi��o de inser��o
////	while (ptrNoAtualBD != NULL) {
////
////		matricula = ptrNoAtualBD->dados.matricula;
////		nome = ptrNoAtualBD->dados.nome;
////
////		totalMedia = ptrNoAtualBD->dados.media;
////		totalMedia += ptrNoAtualED->dados.media;
////
////		media = totalMedia / 2;
////
////		// Inser��o
////		inserirListaOrdenada(pmediaGeral, matricula, nome, media);
////
////
////		ptrNoAtualBD = ptrNoAtualBD->proxNo;
////		ptrNoAtualED = ptrNoAtualED->proxNo;
////	}
////}
//
//
///*Crie uma fun��o que concatene as listas DiscBD e DiscED,
//do exerc�cio anterior, em uma nova lista (Curso).
//Ap�s a fun��o, imprima a lista MediaGeral;*/
//
//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//
//
//using namespace std;
//
//
////Dados sobre o Aluno
//struct Dados {
//	int matricula;
//	string nome;
//	float media;
//};
//
//
////Estrutura do N�
//struct No {
//	Dados dados; //estrutura guardada dentro da lista
//	No* proxNo; //aponta para o pr�ximo N� da lista
//};
//
//
////N� in�cio da lista
//struct Lista {
//	int qtdNo;
//	No* inicio;
//};
//
//Lista* criarLista();
//void liberarLista(Lista* ptrLista);
//void exibirLista(Lista* ptrLista);
//
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media);
//void concatenarLista(Lista* pBD, Lista* pED, Lista* pCurso);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Lista* pBD;
//	Lista* pED;
//	Lista* pCurso;
//
//	pBD = criarLista();
//	pED = criarLista();
//	pCurso = criarLista();
//
//
//	inserirListaOrdenada(pBD, 7, "Jose", 8);
//	inserirListaOrdenada(pBD, 15, "Carlos", 7.5);
//	inserirListaOrdenada(pBD, 10, "Lui", 10);
//	exibirLista(pBD);
//
//	cout << endl << endl;
//
//	inserirListaOrdenada(pED, 7, "Jose", 6.5);
//	inserirListaOrdenada(pED, 15, "Carlos", 8.5);
//	inserirListaOrdenada(pED, 10, "Lui", 10);
//	exibirLista(pED);
//
//	cout << endl << endl;
//
//	concatenarLista(pBD, pED, pCurso);
//	exibirLista(pCurso);
//
//	liberarLista(pBD);
//	liberarLista(pED);
//	liberarLista(pCurso);
//
//	system("pause");
//
//	return 0;
//}
//
//
////Iniciar a lista
//Lista* criarLista() {
//	Lista* ptrLista;
//
//	ptrLista = new Lista;
//
//	//Se a lista N�o pode ser criada
//	if (ptrLista == NULL) {
//		cout << "N�o foi poss�vel criar a lista!" << endl;
//		return NULL;
//	}
//
//	//como a lista est� vazia o In�cio aponta para o NULL
//	ptrLista->qtdNo = 0;
//	ptrLista->inicio = NULL;
//
//	return ptrLista;
//}
//
//
////Liberar a lista
//void liberarLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	//Se a lista N�o foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//	//Exclui cada N� da lista
//	while (ptrLista->inicio != NULL) {
//		ptrNoAtual = ptrLista->inicio;
//
//		ptrLista->inicio = ptrNoAtual->proxNo;
//		delete ptrNoAtual;
//	}
//
//	delete ptrLista;
//}
//
//
////Exibir lista
//void exibirLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	//Se a lista N�o foi craida
//	if (ptrLista == NULL) {
//		cout << "A Lista n�o est� criada!" << endl;
//		return;
//	}
//
//	//Se n~;ao tiver nehum N� na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "A lista est� vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	while (ptrNoAtual != NULL) {
//		cout << "Matricula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Media: " << ptrNoAtual->dados.media << endl;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	cout << endl;
//}
//
//
////Inserir Lista Ordenada
//bool inserirListaOrdenada(Lista* ptrLista, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	//Se a Lista N�O foi Criada
//	if (ptrLista == NULL) {
//		cout << "A Lista N�o Est� Criada!" << endl;
//		return false;
//	}
//	//-------------------------
//	//Cria Novo N�
//	//------------------------
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Memoria insulficiente" << endl;
//		return false;
//	}
//
//	ptrNoNovo->dados.matricula = matricula;
//	ptrNoNovo->dados.nome = nome;
//	ptrNoNovo->dados.media = media;
//	ptrNoNovo->proxNo = NULL;
//
//	//se a lista estiver vazia
//	if (ptrNoNovo == NULL) {
//		ptrLista->inicio == ptrNoNovo;
//
//	}
//	else {
//		ptrNoAnterior = NULL;
//		ptrNoAtual = ptrLista->inicio;
//
//		//Localiza a Posi��o de Inser��o
//		while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula < matricula) {
//			ptrNoAnterior = ptrNoAtual;
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//
//		//Insere No �nicio da Lista
//		if (ptrNoAtual == ptrLista->inicio) {
//			ptrLista->inicio = ptrNoNovo;
//		}
//		else {//Insere no Meio ou no Fim da Lista
//			ptrNoNovo->proxNo = ptrNoAtual;
//			ptrNoAnterior->proxNo = ptrNoNovo;
//		}
//	}
//
//	//Incrementa a Quantidade de N�
//	ptrLista->qtdNo++;
//	return true;
//}
//
//void concatenarLista(Lista* pBD, Lista* pED, Lista* pCurso) {
//	No* ptrNoAtual;
//
//	int matricula;
//	string nome;
//	float media;
//
//	ptrNoAtual = pBD->inicio;
//
//
//	// Localiza a posi��o de inser��o
//	while (ptrNoAtual != NULL) {
//
//		matricula = ptrNoAtual->dados.matricula;
//		nome = ptrNoAtual->dados.nome;
//		media = ptrNoAtual->dados.media;
//
//		inserirListaOrdenada(pCurso, matricula, nome, media);
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	ptrNoAtual = pED->inicio;
//
//	// Localiza a posi��o de inser��o
//	while (ptrNoAtual != NULL) {
//
//		matricula = ptrNoAtual->dados.matricula;
//		nome = ptrNoAtual->dados.nome;
//		media = ptrNoAtual->dados.media;
//
//		inserirListaOrdenada(pCurso, matricula, nome, media);
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
