////#include <iostream>
////#include <stdlib.h> 
////#include <string>
////
////using namespace std;
////
////
////// Dados sobre o ALUNO
////struct Dados {
////	int matricula;
////	string nome;
////	float media;
////};
////
////// Estrutura do Nó
////struct No {
////	Dados dados;	// estrutura guardada dentro da lista
////	No* proxNo;			// aponta para o próximo Nó da lista
////};
////
////// Fila
////struct Fila {
////	int qtdNo;
////	No* inicio;  // cabeça para início
////	No* final;   // cauda para fim
////};
////
////
////Fila* criarFila();
////void liberarFila(Fila* ptrFila);
////void exibirFila(Fila* ptrFila);
////void exibirPilhaAvancada(Fila* ptrFila);
////
////bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media);
////bool desenfileiraPop(Fila* ptrFila);
////No* consultarPrimeiroFila(Fila* ptrFila);
////
//////--------------------------------------------------------
//////						M A I N
//////--------------------------------------------------------
////int main() {
////	setlocale(LC_ALL, "Portuguese");
////
////	Fila* pFila;
////
////	int matricula;
////	string nome;
////	float media;
////
////	// Cria a FILA
////	pFila = criarFila();
////
////	matricula = 10;
////	nome = "Maria";
////	media = 8.0f;
////
////	//--------------------------------------
////	// Enfileira
////	//--------------------------------------
////	enfileirarPush(pFila, matricula, nome, media);
////	enfileirarPush(pFila, 20, "José", 7.0);
////	enfileirarPush(pFila, 30, "Jesus", 10.0);
////	enfileirarPush(pFila, 40, "Paulo", 6.0f);
////	enfileirarPush(pFila, 50, "Pedro", 7.0f);
////	exibirFila(pFila);
////
////
////	//--------------------------------------
////	// Desenfileira do INÍCIO da FILA
////	//--------------------------------------
////	desenfileiraPop(pFila);
////	desenfileiraPop(pFila);
////	desenfileiraPop(pFila);
////
////	cout << "=========================" << endl << endl;
////	exibirFila(pFila);
////
////
////	//--------------------------------------
////	// Altera o PRIMEIRO elemento da FILA
////	//--------------------------------------
////	No* pNoAluno;
////
////	pNoAluno = consultarPrimeiroFila(pFila);
////
////	if (pNoAluno != NULL) {
////		pNoAluno->dados.nome = "Jesus Maria José";
////		pNoAluno->dados.media = 12.0f;
////	}
////
////	cout << "=========================" << endl << endl;
////	exibirFila(pFila);
////
////
////	// Libera a memória alocada para a FILA
////	liberarFila(pFila);
////
////
////	system("pause");
////	return 0;
////}
////
//////--------------------------------------------------------
////// CRIAR FILA
//////--------------------------------------------------------
////Fila* criarFila() {
////	Fila* ptrFila;
////
////	ptrFila = new Fila;
////
////	// Se a FILA NÃO pode ser criada
////	if (ptrFila == NULL) {
////		cout << "Não foi possível criar a fila!" << endl;
////		return NULL;
////	}
////
////	// Como a FILA está vazia o INÍCIO e o FINAL apontaM para NULL	
////	ptrFila->qtdNo = 0;
////	ptrFila->inicio = NULL;
////	ptrFila->final = NULL;
////
////	return ptrFila;
////}
////
//////--------------------------------------------------------
////// LIBERAR FILA
//////--------------------------------------------------------
////void liberarFila(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A fila não está criada!" << endl;
////		return;
////	}
////
////	// Exclui cada Nó da FILA
////	while (ptrFila->inicio != NULL)
////	{
////		ptrNoAtual = ptrFila->inicio;
////
////		ptrFila->inicio = ptrNoAtual->proxNo;
////
////		delete  ptrNoAtual;
////	}
////
////	delete ptrFila;
////}
////
////
////
//////--------------------------------------------------------
////// EXIBIR A FILA
//////--------------------------------------------------------
////void exibirFila(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A pilha não está criada!" << endl;
////		return;
////	}
////
////	//Se não tiver nenhum Nó na FILA
////	if (ptrFila->inicio == NULL) {
////		cout << "A fila esta vazia!" << endl;
////		return;
////	}
////
////	ptrNoAtual = ptrFila->inicio;
////
////	while (ptrNoAtual != NULL) {
////		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
////		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
////		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
////
////		ptrNoAtual = ptrNoAtual->proxNo;
////	}
////}
////
////
//////--------------------------------------------------------
////// EXIBIR A FILA
//////--------------------------------------------------------
////void exibirPilhaAvancada(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A pilha não está criada!" << endl;
////		return;
////	}
////
////	//Se não tiver nenhum Nó na FILA
////	if (ptrFila->inicio == NULL) {
////		cout << "A fila esta vazia!" << endl;
////		return;
////	}
////
////	ptrNoAtual = ptrFila->inicio;
////
////	cout << "===========================================" << endl;
////	cout << "                   FILA" << endl;
////	cout << "  Quantidade: " << ptrFila->qtdNo << endl;
////	cout << "  \tInício: " << ptrFila->inicio << endl;
////	cout << "===========================================" << endl << endl;
////
////
////	while (ptrNoAtual != NULL) {
////		cout << "-------------------------------------------" << endl;
////		cout << "        " << ptrNoAtual << endl;
////		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
////		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
////		cout << "Média: " << ptrNoAtual->dados.media << endl;
////		cout << "\tPróximo-> " << ptrNoAtual->proxNo << endl;
////
////		ptrNoAtual = ptrNoAtual->proxNo;
////	}
////	cout << "-------------------------------------------" << endl;
////	cout << endl;
////}
////
////
////
//////--------------------------------------------------------
////// ENFILEIRA
//////--------------------------------------------------------
////bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media) {
////	No* ptrNoNovo;
////
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A fila não está criada!" << endl;
////		return false;
////	}
////
////	//---------------------------------------------------------------
////	//	Cria o novo nó
////	//---------------------------------------------------------------
////	ptrNoNovo = new No;
////
////	if (ptrNoNovo == NULL) {
////		cout << "Memória insulficiente!" << endl;
////		return false;
////	}
////
////	ptrNoNovo->dados.matricula = matricula;
////	ptrNoNovo->dados.nome = nome;
////	ptrNoNovo->dados.media = media;
////	ptrNoNovo->proxNo = NULL;
////
////	// Se a fila estiver vazia
////	if (ptrFila->final == NULL)
////		ptrFila->inicio = ptrNoNovo;
////	else
////		ptrFila->final->proxNo = ptrNoNovo;
////
////	ptrFila->final = ptrNoNovo;
////
////	// Incrementa o quantidade de Nós
////	ptrFila->qtdNo++;
////
////	return true;
////}
////
////
////
//////--------------------------------------------------------
////// DESENFILEIRA
//////--------------------------------------------------------
////bool desenfileiraPop(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	// Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A pilha não está criada!" << endl;
////		return false;
////	}
////
////	// Cria um ponteiro auxiliar
////	ptrNoAtual = ptrFila->inicio;
////
////	// Ajusta o início da fila
////	ptrFila->inicio = ptrFila->inicio->proxNo;
////
////	// Se for o último nó da fila
////	if (ptrFila->inicio == NULL) {          // caso tivesse apenas 1 elemento, fica vazia
////		ptrFila->final = NULL;
////	}
////
////	// Exclui o nó 
////	delete ptrNoAtual;
////
////	// Decrementa o quantidade de Nós
////	ptrFila->qtdNo--;
////
////	return true;
////}
////
////
//////--------------------------------------------------------
////// CONSULTAR FILA
//////--------------------------------------------------------
////No* consultarPrimeiroFila(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	// Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A fila não está criada!" << endl;
////		return NULL;
////	}
////
////	ptrNoAtual = ptrFila->inicio;
////
////	return ptrNoAtual;
////}
//
////Exercicio1
///*Insira 5 elementos em uma fila.
//Escreva uma função que receba a fila e adicione 1 ponto
//extra para quem tem média abaixo ou igual a 4.
//Por fim, imprima a fila novamente com os dados alterados.*/
//
//
////#include <iostream>
////#include <stdlib.h> 
////#include <string>
////
////using namespace std;
////
////
////// Dados sobre o ALUNO
////struct Dados {
////	int matricula;
////	string nome;
////	float media;
////};
////
////// Estrutura do Nó
////struct No {
////	Dados dados;	// estrutura guardada dentro da lista
////	No* proxNo;			// aponta para o próximo Nó da lista
////};
////
////// Fila
////struct Fila {
////	int qtdNo;
////	No* inicio;  // cabeça para início
////	No* final;   // cauda para fim
////};
////
////
////Fila* criarFila();
////void liberarFila(Fila* ptrFila);
////void exibirFila(Fila* ptrFila);
////void exibirPilhaAvancada(Fila* ptrFila);
////
////void mediaMenor4(Fila* ptrFila);
////
////bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media);
////bool desenfileiraPop(Fila* ptrFila);
////No* consultarPrimeiroFila(Fila* ptrFila);
////
//////--------------------------------------------------------
//////						M A I N
//////--------------------------------------------------------
////int main() {
////	setlocale(LC_ALL, "Portuguese");
////
////	Fila* pFila;
////
////	int matricula;
////	string nome;
////	float media;
////
////	// Cria a FILA
////	pFila = criarFila();
////
////	matricula = 1;
////	nome = "Creusa";
////	media = 3.0f;
////
////	//--------------------------------------
////	// Enfileira
////	//--------------------------------------
////	enfileirarPush(pFila, matricula, nome, media);
////	enfileirarPush(pFila, 2, "Lui", 7.0);
////	enfileirarPush(pFila, 3, "Albert", 2.0);
////	enfileirarPush(pFila, 4, "Camila", 6.0f);
////	enfileirarPush(pFila, 5, "Aline", 1.0f);
////	exibirFila(pFila);
////
////	mediaMenor4(pFila);
////	cout << endl << endl;
////	exibirFila(pFila);
////	cout << endl << endl;
////
////	////--------------------------------------
////	//// Desenfileira do INÍCIO da FILA
////	////--------------------------------------
////	//desenfileiraPop(pFila);
////	//desenfileiraPop(pFila);
////	//desenfileiraPop(pFila);
////
////	//cout << "=========================" << endl << endl;
////	//exibirFila(pFila);
////
////
////	////--------------------------------------
////	//// Altera o PRIMEIRO elemento da FILA
////	////--------------------------------------
////	//No* pNoAluno;
////
////	//pNoAluno = consultarPrimeiroFila(pFila);
////
////	//if (pNoAluno != NULL) {
////	//	pNoAluno->dados.nome = "Jesus Maria José";
////	//	pNoAluno->dados.media = 12.0f;
////	//}
////
////	//cout << "=========================" << endl << endl;
////	//exibirFila(pFila);
////
////
////	// Libera a memória alocada para a FILA
////	liberarFila(pFila);
////
////
////	system("pause");
////	return 0;
////}
////
//////--------------------------------------------------------
////// CRIAR FILA
//////--------------------------------------------------------
////Fila* criarFila() {
////	Fila* ptrFila;
////
////	ptrFila = new Fila;
////
////	// Se a FILA NÃO pode ser criada
////	if (ptrFila == NULL) {
////		cout << "Não foi possível criar a fila!" << endl;
////		return NULL;
////	}
////
////	// Como a FILA está vazia o INÍCIO e o FINAL apontaM para NULL	
////	ptrFila->qtdNo = 0;
////	ptrFila->inicio = NULL;
////	ptrFila->final = NULL;
////
////	return ptrFila;
////}
////
//////--------------------------------------------------------
////// LIBERAR FILA
//////--------------------------------------------------------
////void liberarFila(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A fila não está criada!" << endl;
////		return;
////	}
////
////	// Exclui cada Nó da FILA
////	while (ptrFila->inicio != NULL)
////	{
////		ptrNoAtual = ptrFila->inicio;
////
////		ptrFila->inicio = ptrNoAtual->proxNo;
////
////		delete  ptrNoAtual;
////	}
////
////	delete ptrFila;
////}
////
////
////
//////--------------------------------------------------------
////// EXIBIR A FILA
//////--------------------------------------------------------
////void exibirFila(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A pilha não está criada!" << endl;
////		return;
////	}
////
////	//Se não tiver nenhum Nó na FILA
////	if (ptrFila->inicio == NULL) {
////		cout << "A fila esta vazia!" << endl;
////		return;
////	}
////
////	ptrNoAtual = ptrFila->inicio;
////
////	while (ptrNoAtual != NULL) {
////		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
////		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
////		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
////
////		ptrNoAtual = ptrNoAtual->proxNo;
////	}
////}
////
////
//////--------------------------------------------------------
////// EXIBIR A FILA
//////--------------------------------------------------------
////void exibirPilhaAvancada(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A pilha não está criada!" << endl;
////		return;
////	}
////
////	//Se não tiver nenhum Nó na FILA
////	if (ptrFila->inicio == NULL) {
////		cout << "A fila esta vazia!" << endl;
////		return;
////	}
////
////	ptrNoAtual = ptrFila->inicio;
////
////	cout << "===========================================" << endl;
////	cout << "                   FILA" << endl;
////	cout << "  Quantidade: " << ptrFila->qtdNo << endl;
////	cout << "  \tInício: " << ptrFila->inicio << endl;
////	cout << "===========================================" << endl << endl;
////
////
////	while (ptrNoAtual != NULL) {
////		cout << "-------------------------------------------" << endl;
////		cout << "        " << ptrNoAtual << endl;
////		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
////		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
////		cout << "Média: " << ptrNoAtual->dados.media << endl;
////		cout << "\tPróximo-> " << ptrNoAtual->proxNo << endl;
////
////		ptrNoAtual = ptrNoAtual->proxNo;
////	}
////	cout << "-------------------------------------------" << endl;
////	cout << endl;
////}
////
////
////
//////--------------------------------------------------------
////// ENFILEIRA
//////--------------------------------------------------------
////bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media) {
////	No* ptrNoNovo;
////
////
////	//Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A fila não está criada!" << endl;
////		return false;
////	}
////
////	//---------------------------------------------------------------
////	//	Cria o novo nó
////	//---------------------------------------------------------------
////	ptrNoNovo = new No;
////
////	if (ptrNoNovo == NULL) {
////		cout << "Memória insulficiente!" << endl;
////		return false;
////	}
////
////	ptrNoNovo->dados.matricula = matricula;
////	ptrNoNovo->dados.nome = nome;
////	ptrNoNovo->dados.media = media;
////	ptrNoNovo->proxNo = NULL;
////
////	// Se a fila estiver vazia
////	if (ptrFila->final == NULL)
////		ptrFila->inicio = ptrNoNovo;
////	else
////		ptrFila->final->proxNo = ptrNoNovo;
////
////	ptrFila->final = ptrNoNovo;
////
////	// Incrementa o quantidade de Nós
////	ptrFila->qtdNo++;
////
////	return true;
////}
////
////
////
//////--------------------------------------------------------
////// DESENFILEIRA
//////--------------------------------------------------------
////bool desenfileiraPop(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	// Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A pilha não está criada!" << endl;
////		return false;
////	}
////
////	// Cria um ponteiro auxiliar
////	ptrNoAtual = ptrFila->inicio;
////
////	// Ajusta o início da fila
////	ptrFila->inicio = ptrFila->inicio->proxNo;
////
////	// Se for o último nó da fila
////	if (ptrFila->inicio == NULL) {          // caso tivesse apenas 1 elemento, fica vazia
////		ptrFila->final = NULL;
////	}
////
////	// Exclui o nó 
////	delete ptrNoAtual;
////
////	// Decrementa o quantidade de Nós
////	ptrFila->qtdNo--;
////
////	return true;
////}
////
////
//////--------------------------------------------------------
////// CONSULTAR FILA
//////--------------------------------------------------------
////No* consultarPrimeiroFila(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	// Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A fila não está criada!" << endl;
////		return NULL;
////	}
////
////	ptrNoAtual = ptrFila->inicio;
////
////	return ptrNoAtual;
////}
////
////////--------------------------------------
//////// Altera Media < 4
////////--------------------------------------
//////--------------------------------------------------------
////void mediaMenor4(Fila* ptrFila) {
////	No* ptrNoAtual;
////
////	// Se a FILA NÃO foi criada
////	if (ptrFila == NULL) {
////		cout << "A fila não está criada!" << endl;
////	}
////
////	ptrNoAtual = ptrFila->inicio;
////
////	while (ptrNoAtual != NULL) {
////		if (ptrNoAtual->dados.media <= 4)
////			ptrNoAtual->dados.media = (ptrNoAtual->dados.media + 1);
////
////		ptrNoAtual = ptrNoAtual->proxNo;
////	}
////
////}
////	
//
////exercicio2
///*
//Dadas duas filas com as seguintes matrículas em ordem
//crescente.
//pFilaX ={1, 3, 5, 9,12, 16, 23} e
//pFilaY = {1, 2, 6, 7, 9, 15, 23},
//Implemente a operação UNIÃO, que cria uma terceira fila,
//com a união entre as duas anteriores, também em ordem
//crescente.
//pFilaZ = {1, 2, 3, 5, 6, 7, 9, 12, 15, 16, 23}
//*/
//#include <iostream>
//#include <stdlib.h> 
//#include <string>
//
//using namespace std;
//
//
//// Dados sobre o ALUNO
//struct Dados {
//	//int matricula;
//	//string nome;
//	int media;
//};
//
//// Estrutura do Nó
//struct No {
//	Dados dados;	// estrutura guardada dentro da lista
//	No* proxNo;			// aponta para o próximo Nó da lista
//};
//
//// Fila
//struct Fila {
//	int qtdNo;
//	No* inicio;  // cabeça para início
//	No* final;   // cauda para fim
//};
//
//
//Fila* criarFila();
//void liberarFila(Fila* ptrFila);
//void exibirFila(Fila* ptrFila);
////void exibirPilhaAvancada(Fila* ptrFila);
//
//void uniao(Fila* ptrFilaX, Fila* ptrFilaY, Fila* ptrFilaZ);
//
//bool enfileirarPush(Fila* ptrFila, int media);
////bool desenfileiraPop(Fila* ptrFila);
////No* consultarPrimeiroFila(Fila* ptrFila);
//
////--------------------------------------------------------
////						M A I N
////--------------------------------------------------------
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Fila* pFilaX;
//	Fila* pFilaY;
//	Fila* pFilaZ;	
//
//	// Cria a FILA
//	pFilaX = criarFila();
//	pFilaY = criarFila();
//	pFilaZ = criarFila();
//
//	
//	//--------------------------------------
//	// Enfileira
//	//--------------------------------------
//	enfileirarPush(pFilaX, 1);
//	enfileirarPush(pFilaX, 3);
//	enfileirarPush(pFilaX, 5);
//	enfileirarPush(pFilaX, 9);
//	enfileirarPush(pFilaX, 12);
//	enfileirarPush(pFilaX, 16);
//	enfileirarPush(pFilaX, 23);
//	exibirFila(pFilaX);
//	
//	enfileirarPush(pFilaY, 1);
//	enfileirarPush(pFilaY, 2);
//	enfileirarPush(pFilaY, 6);
//	enfileirarPush(pFilaY, 7);
//	enfileirarPush(pFilaY, 9);
//	enfileirarPush(pFilaY, 15);
//	enfileirarPush(pFilaY, 23);
//	exibirFila(pFilaY);
//
//	cout << endl << endl << endl;
//	uniao(pFilaX,pFilaY, pFilaZ);
//	exibirFila(pFilaZ);
//
//	// Libera a memória alocada para a FILA
//	liberarFila(pFilaX);
//	liberarFila(pFilaY);
//	liberarFila(pFilaZ);
//
//
//	system("pause");
//	return 0;
//}
//
////--------------------------------------------------------
//// CRIAR FILA
////--------------------------------------------------------
//Fila* criarFila() {
//	Fila* ptrFila;
//
//	ptrFila = new Fila;
//
//	// Se a FILA NÃO pode ser criada
//	if (ptrFila == NULL) {
//		cout << "Não foi possível criar a fila!" << endl;
//		return NULL;
//	}
//
//	// Como a FILA está vazia o INÍCIO e o FINAL apontaM para NULL	
//	ptrFila->qtdNo = 0;
//	ptrFila->inicio = NULL;
//	ptrFila->final = NULL;
//
//	return ptrFila;
//}
//
////--------------------------------------------------------
//// LIBERAR FILA
////--------------------------------------------------------
//void liberarFila(Fila* ptrFila) {
//	No* ptrNoAtual;
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila não está criada!" << endl;
//		return;
//	}
//
//	// Exclui cada Nó da FILA
//	while (ptrFila->inicio != NULL)
//	{
//		ptrNoAtual = ptrFila->inicio;
//
//		ptrFila->inicio = ptrNoAtual->proxNo;
//
//		delete  ptrNoAtual;
//	}
//
//	delete ptrFila;
//}
//
//
//
////--------------------------------------------------------
//// EXIBIR A FILA
////--------------------------------------------------------
//void exibirFila(Fila* ptrFila) {
//	No* ptrNoAtual;
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A pilha não está criada!" << endl;
//		return;
//	}
//
//	//Se não tiver nenhum Nó na FILA
//	if (ptrFila->inicio == NULL) {
//		cout << "A fila esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrFila->inicio;
//
//	while (ptrNoAtual != NULL) {
//		//cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		//cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//
////--------------------------------------------------------
//// EXIBIR A FILA
////--------------------------------------------------------
//void exibirPilhaAvancada(Fila* ptrFila) {
//	No* ptrNoAtual;
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A pilha não está criada!" << endl;
//		return;
//	}
//
//	//Se não tiver nenhum Nó na FILA
//	if (ptrFila->inicio == NULL) {
//		cout << "A fila esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrFila->inicio;
//
//	cout << "===========================================" << endl;
//	cout << "                   FILA" << endl;
//	cout << "  Quantidade: " << ptrFila->qtdNo << endl;
//	cout << "  \tInício: " << ptrFila->inicio << endl;
//	cout << "===========================================" << endl << endl;
//
//
//	while (ptrNoAtual != NULL) {
//		cout << "-------------------------------------------" << endl;
//		cout << "        " << ptrNoAtual << endl;
//		//cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		//cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl;
//		cout << "\tPróximo-> " << ptrNoAtual->proxNo << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	cout << "-------------------------------------------" << endl;
//	cout << endl;
//}
//
//
//
////--------------------------------------------------------
//// ENFILEIRA
////--------------------------------------------------------
//bool enfileirarPush(Fila* ptrFila, int media) {
//	No* ptrNoNovo;
//
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila não está criada!" << endl;
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
//	ptrNoNovo->dados.media = media;
//	ptrNoNovo->proxNo = NULL;
//
//	// Se a fila estiver vazia
//	if (ptrFila->final == NULL)
//		ptrFila->inicio = ptrNoNovo;
//	else
//		ptrFila->final->proxNo = ptrNoNovo;
//
//	ptrFila->final = ptrNoNovo;
//
//	// Incrementa o quantidade de Nós
//	ptrFila->qtdNo++;
//
//	return true;
//}
//
//
//
////--------------------------------------------------------
//// DESENFILEIRA
////--------------------------------------------------------
//bool desenfileiraPop(Fila* ptrFila) {
//	No* ptrNoAtual;
//
//	// Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A pilha não está criada!" << endl;
//		return false;
//	}
//
//	// Cria um ponteiro auxiliar
//	ptrNoAtual = ptrFila->inicio;
//
//	// Ajusta o início da fila
//	ptrFila->inicio = ptrFila->inicio->proxNo;
//
//	// Se for o último nó da fila
//	if (ptrFila->inicio == NULL) {          // caso tivesse apenas 1 elemento, fica vazia
//		ptrFila->final = NULL;
//	}
//
//	// Exclui o nó 
//	delete ptrNoAtual;
//
//	// Decrementa o quantidade de Nós
//	ptrFila->qtdNo--;
//
//	return true;
//}
//
//
////--------------------------------------------------------
//// CONSULTAR FILA
////--------------------------------------------------------
//No* consultarPrimeiroFila(Fila* ptrFila) {
//	No* ptrNoAtual;
//
//	// Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila não está criada!" << endl;
//		return NULL;
//	}
//
//	ptrNoAtual = ptrFila->inicio;
//
//	return ptrNoAtual;
//}
//
//////--------------------------------------
////// Altera Media < 4
//////--------------------------------------
////---------------------------------------
//void uniao(Fila* ptrFilaX, Fila* ptrFilaY, Fila* ptrFilaZ){
//	No* ptrNoAtualX;
//	No* ptrNoAtualY;
//	No* ptrNoAtualZ;
//
//	// Se a FILA NÃO foi criada
//	if (ptrFilaZ == NULL) {
//		cout << "A fila não está criada!" << endl;
//	}
//
//	ptrNoAtualX = ptrFilaX->inicio;
//	ptrNoAtualY = ptrFilaY->inicio;
//	ptrNoAtualZ = ptrFilaY->inicio;
//	
//	while (ptrNoAtualX != NULL){
//		while (ptrNoAtualY != NULL) {
//			if (ptrNoAtualX->dados.media != ptrNoAtualY->dados.media) {
//				enfileirarPush(ptrFilaZ, ptrNoAtualX->dados.media);
//				enfileirarPush(ptrFilaZ, ptrNoAtualY->dados.media);
//
//			}
//			else {
//				enfileirarPush(ptrFilaZ, ptrNoAtualX->dados.media);
//			}
//
//			ptrNoAtualX = ptrNoAtualX->proxNo;
//			ptrNoAtualY = ptrNoAtualY->proxNo;
//		}
//
//	}
//
//}
