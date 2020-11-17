//#include <iostream>
//#include <stdlib.h> 
//#include <string>
//
//using namespace std;
//
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
//	Dados dados;	// estrutura guardada dentro da lista
//	No* proxNo;			// aponta para o pr�ximo N� da lista
//};
//
//
//Pilha* criarPilha();
//void liberarPilha(Pilha* ptrPilha);
//void exibirPilha(Pilha* ptrPilha);
//bool empilharPush(Pilha* ptrPilha, int matricula, string nome, float media);
//bool desempilharPop(Pilha* ptrPilha);
//No* consultarPilhaTop(Pilha* ptrPilha);
//
//
//// N� topo da Pilha
//struct Pilha {
//	int qtdNo;
//	No* topo;
//};
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");

//int matricula;
//string nome;
//float media;
//
//// CRIA Pilha
//pPilha = criarPilha();
//
//matricula = 10;
//nome = "Maria";
//media = 8.0f;
//
////--------------------------------------
//// Empilha no TOPO da PILHA
////--------------------------------------
//// Empilha o aluno na pilha
//empilharPush(pPilha, matricula, nome, media);
//empilharPush(pPilha, 20, "Jos�", 7.0);
//empilharPush(pPilha, 30, "Jesus", 10.0);
//empilharPush(pPilha, 40, "Paulo", 6.0f);
//empilharPush(pPilha, 50, "Pedro", 7.0f);
//
//
////--------------------------------------
//// Exibe a PILHA
////--------------------------------------
//exibirPilha(pPilha);
//
//
////--------------------------------------
//// Desempilha do TOPO da PILHA
////--------------------------------------
//desempilharPop(pPilha);
//desempilharPop(pPilha);
//desempilharPop(pPilha);
//
////cout << "=========================" << endl << endl;
////exibirPilha(pPilha);
//
//
////--------------------------------------
//// Altera o elemento do TOPO da PILHA
////--------------------------------------
//No* pNoAluno;
//
//pNoAluno = consultarPilhaTop(pPilha);
//
//if (pNoAluno != NULL) {
//	pNoAluno->dados.nome = "Jesus Maria Jos�";
//	pNoAluno->dados.media = 12.0f;
//}
//
//cout << "=========================" << endl << endl;
//exibirPilha(pPilha);
//
//
//// Libera a mem�ria alocada para a lista
//liberarPilha(pPilha);

//
//
//
//	system("pause");
//	return 0;
//}
//
////--------------------------------------------------------
//// CRIAR PILHA
////--------------------------------------------------------
//Pilha* criarPilha() {
//	Pilha* ptrPilha;
//
//	ptrPilha = new Pilha;
//
//	// Se a PILHA N�O pode ser criada
//	if (ptrPilha == NULL) {
//		cout << "N�o foi poss�vel criar a pilha!" << endl;
//		return NULL;
//	}
//
//	// Como a pilha est� vazia o IN�CIO aponta para NULL	
//	ptrPilha->qtdNo = 0;
//	ptrPilha->topo = NULL;
//
//	return ptrPilha;
//}
//
////--------------------------------------------------------
//// LIBERAR PILHA
////--------------------------------------------------------
//void liberarPilha(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	//Se a PILHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return;
//	}
//
//	// Exclui cada N� da pilha
//	while (ptrPilha->topo != NULL)
//	{
//		ptrNoAtual = ptrPilha->topo;
//
//		ptrPilha->topo = ptrNoAtual->proxNo;
//
//		delete  ptrNoAtual;
//	}
//
//	delete ptrPilha;
//}
//
////--------------------------------------------------------
//// EXIBIR A PILHA
////--------------------------------------------------------
//void exibirPilha(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	//Se a PILLHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return;
//	}
//
//
//	//Se n�o tiver nenhum N� na pilha
//	if (ptrPilha->topo == NULL) {
//		cout << "A pilha esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrPilha->topo;
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
//// EMPILHA NO TOPO DA PILHA
////--------------------------------------------------------
//bool empilharPush(Pilha* ptrPilha, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//
//	//Se a pilha N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
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
//	ptrNoNovo->proxNo = ptrPilha->topo;
//
//	// Empilha
//	ptrPilha->topo = ptrNoNovo;
//
//	// Incrementa o quantidade de N�s
//	ptrPilha->qtdNo++;
//
//	return true;
//}
//
////--------------------------------------------------------
//// DESEMPILHA DO TOPO DA PILHA
////--------------------------------------------------------
//bool desempilharPop(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	// Se a PILHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return false;
//	}
//
//	//Se n�o tiver nenhum N� na pilha
//	if (ptrPilha->topo == NULL) {
//		cout << "A pilha est� vazia!" << endl;
//		return false;
//	}
//
//	// Ajusta o topo
//	ptrNoAtual = ptrPilha->topo;
//	ptrPilha->topo = ptrNoAtual->proxNo;
//
//	// Exclui o n� do topo
//	delete ptrNoAtual;
//
//	// Decrementa o quantidade de N�s
//	ptrPilha->qtdNo--;
//
//	return true;
//}
//
////--------------------------------------------------------
//// CONSULTAR O TOPO DA PILHA
////--------------------------------------------------------
//No* consultarPilhaTop(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	// Se a PILHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return NULL;
//	}
//
//	ptrNoAtual = ptrPilha->topo;
//
//	return ptrNoAtual;
//}


//Exercicio 1
/*Fa�a uma fun��o que receba duas pilhas(pPilhaX e
pPilhaY), cada uma com 3 elementos, verifique se os
n�meros de matr�culas s�o iguais, e em caso positivo,
retorne verdadeiro, caso contr�rio, falso.
Ap�s a chamada da fun��o, exiba uma mensagem
informando o resultado */
//#include <iostream>
//#include <stdlib.h> 
//#include <string>
//
//using namespace std;
//
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
//	Dados dados;	// estrutura guardada dentro da lista
//	No* proxNo;			// aponta para o pr�ximo N� da lista
//};
//
//// N� topo da Pilha
//struct Pilha {
//	int qtdNo;
//	No* topo;
//};
//
//
//Pilha* criarPilha();
//void liberarPilha(Pilha* ptrPilha);
//void exibirPilha(Pilha* ptrPilha);
//
//bool empilharPush(Pilha* ptrPilha, int matricula, string nome, float media);
//bool compararPilha(Pilha* ptrPilhaX, Pilha* ptrPilhaY);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Pilha* pPilhaX;
//	Pilha* pPilhaY;
//	bool resultado;
//
//	pPilhaX = criarPilha();
//	pPilhaY = criarPilha();
//
//	empilharPush(pPilhaX, 11, "Luis", 7.5);
//	empilharPush(pPilhaX, 20, "Claudia", 9.1);
//	empilharPush(pPilhaX, 30, "Luffy", 3.5);
//
//
//	empilharPush(pPilhaY, 10, "Alberto", 8.2);
//	empilharPush(pPilhaY, 20, "Richard", 7.4);
//	empilharPush(pPilhaY, 30, "Jimbei", 6.7);
//
//
//	resultado = compararPilha(pPilhaX, pPilhaY);
//	if (resultado == true) {
//		cout << "Verdadeiro" << endl;
//	}
//	else {
//		cout << "False" << endl;
//	}
//
//	liberarPilha(pPilhaX);
//	liberarPilha(pPilhaY);
//
//
//	system("pause");
//	return 0;
//}
//
////--------------------------------------------------------
//// CRIAR PILHA
////--------------------------------------------------------
//Pilha* criarPilha() {
//	Pilha* ptrPilha;
//
//	ptrPilha = new Pilha;
//
//	// Se a PILHA N�O pode ser criada
//	if (ptrPilha == NULL) {
//		cout << "N�o foi poss�vel criar a pilha!" << endl;
//		return NULL;
//	}
//
//	// Como a pilha est� vazia o IN�CIO aponta para NULL	
//	ptrPilha->qtdNo = 0;
//	ptrPilha->topo = NULL;
//
//	return ptrPilha;
//}
//
////--------------------------------------------------------
//// LIBERAR PILHA
////--------------------------------------------------------
//void liberarPilha(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	//Se a PILHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return;
//	}
//
//	// Exclui cada N� da pilha
//	while (ptrPilha->topo != NULL)
//	{
//		ptrNoAtual = ptrPilha->topo;
//
//		ptrPilha->topo = ptrNoAtual->proxNo;
//
//		delete  ptrNoAtual;
//	}
//
//	delete ptrPilha;
//}
//
////--------------------------------------------------------
//// EXIBIR A PILHA
////--------------------------------------------------------
//void exibirPilha(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	//Se a PILLHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return;
//	}
//
//
//	//Se n�o tiver nenhum N� na pilha
//	if (ptrPilha->topo == NULL) {
//		cout << "A pilha esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrPilha->topo;
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
//// EMPILHA NO TOPO DA PILHA
////--------------------------------------------------------
//bool empilharPush(Pilha* ptrPilha, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//
//	//Se a pilha N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
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
//	ptrNoNovo->proxNo = ptrPilha->topo;
//
//	// Empilha
//	ptrPilha->topo = ptrNoNovo;
//
//	// Incrementa o quantidade de N�s
//	ptrPilha->qtdNo++;
//
//	return true;
//}
//
////--------------------------------------------------------
//// DESEMPILHA DO TOPO DA PILHA
////--------------------------------------------------------
//bool desempilharPop(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	// Se a PILHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return false;
//	}
//
//	//Se n�o tiver nenhum N� na pilha
//	if (ptrPilha->topo == NULL) {
//		cout << "A pilha est� vazia!" << endl;
//		return false;
//	}
//
//	// Ajusta o topo
//	ptrNoAtual = ptrPilha->topo;
//	ptrPilha->topo = ptrNoAtual->proxNo;
//
//	// Exclui o n� do topo
//	delete ptrNoAtual;
//
//	// Decrementa o quantidade de N�s
//	ptrPilha->qtdNo--;
//
//	return true;
//}
//
////--------------------------------------------------------
//// CONSULTAR O TOPO DA PILHA
////--------------------------------------------------------
//No* consultarPilhaTop(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	// Se a PILHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return NULL;
//	}
//
//	ptrNoAtual = ptrPilha->topo;
//
//	return ptrNoAtual;
//}
//
////--------------------------------------------------------
//// CONSULTAR PILHA
////--------------------------------------------------------
//bool compararPilha(Pilha* ptrPilhaX, Pilha* ptrPilhaY) {
//	No* ptrNoAtualX;
//	No* ptrNoAtualY;
//	int flag = 1;
//
//	// Se a PILHA N�O foi criada
//	if (ptrPilhaX == NULL || ptrPilhaY == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return NULL;
//	}
//
//	ptrNoAtualX = ptrPilhaX->topo;
//	ptrNoAtualY = ptrPilhaY->topo;
//		
//		//Localiza o no a ser alteraldo
//	while (ptrNoAtualX != NULL) {
//		if (ptrNoAtualX->dados.matricula != ptrNoAtualY->dados.matricula) {
//			flag = 0;
//		}
//			ptrNoAtualX = ptrNoAtualX->proxNo;
//			ptrNoAtualY = ptrNoAtualY->proxNo;
//	}
//	if (flag == 1) {
//		return true;
//	}		
//	else {
//		return false;
//	}
//
//}