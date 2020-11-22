//#include <iostream>
//#include <stdlib.h> 
//#include <string>
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
//Fila* criarFila();
//void liberarFila(Fila* ptrFila);
//void exibirFila(Fila* ptrFila);
//void exibirPilhaAvancada(Fila* ptrFila);
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media);
//bool desenfileiraPop(Fila* ptrFila);
//No* consultarPrimeiroFila(Fila* ptrFila);
//
////--------------------------------------------------------
////						M A I N
////--------------------------------------------------------
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Fila* pFila;
//
//	pFila = criarFila();
//
//	enfileirarPush(pFila, 20, "José", 7.0);
//	enfileirarPush(pFila, 30, "Jesus", 10.0);
//	enfileirarPush(pFila, 40, "Paulo", 6.0f);
//	enfileirarPush(pFila, 50, "Pedro", 7.0f);
//	exibirFila(pFila);
//
//	liberarFila(pFila);
//
//	system("pause");
//	return 0;
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl;
//		cout << "\tPróximo-> " << ptrNoAtual->proxNo << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	cout << "-------------------------------------------" << endl;
//	cout << endl;
//}
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila não está criada!" << endl;
//		return false;
//	}
//
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

//Exercicio 01
/*Insira 5 elementos em uma fila.
Escreva uma função que receba a fila e adicione 1 ponto
extra para quem tem média abaixo ou igual a 4.
Por fim, imprima a fila novamente com os dados alterados.*/

//#include <iostream>
//#include <stdlib.h> 
//#include <string>
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
//Fila* criarFila();
//void liberarFila(Fila* ptrFila);
//void exibirFila(Fila* ptrFila);
//void exibirPilhaAvancada(Fila* ptrFila);
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media);
//bool desenfileiraPop(Fila* ptrFila);
//No* consultarPrimeiroFila(Fila* ptrFila);
//void pontoExtra(Fila* ptrFila);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Fila* pFila;
//
//	pFila = criarFila();
//
//	enfileirarPush(pFila, 10, "Raul", 8.0);
//	enfileirarPush(pFila, 20, "José", 4.0);
//	enfileirarPush(pFila, 30, "Jesus", 10.0);
//	enfileirarPush(pFila, 40, "Paulo", 3.5);
//	enfileirarPush(pFila, 50, "Pedro", 7.0);
//
//	pontoExtra(pFila);
//
//	exibirFila(pFila);
//
//	liberarFila(pFila);
//
//	system("pause");
//	return 0;
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl;
//		cout << "\tPróximo-> " << ptrNoAtual->proxNo << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	cout << "-------------------------------------------" << endl;
//	cout << endl;
//}
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila não está criada!" << endl;
//		return false;
//	}
//
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
//void pontoExtra(Fila* ptrFila) {
//	No* ptrNoAtual;
//
//	ptrNoAtual = ptrFila->inicio;
//
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.media <= 4) {
//			ptrNoAtual->dados.media = ptrNoAtual->dados.media + 1;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}	

//exercicio2
/*
Dadas duas filas com as seguintes matrículas em ordem
crescente.
pFilaX ={1, 3, 5, 9,12, 16, 23} e
pFilaY = {1, 2, 6, 7, 9, 15, 23},
Implemente a operação UNIÃO, que cria uma terceira fila,
com a união entre as duas anteriores, também em ordem
crescente.
pFilaZ = {1, 2, 3, 5, 6, 7, 9, 12, 15, 16, 23}
*/

//#include <iostream>
//#include <stdlib.h> 
//#include <string>
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
//Fila* criarFila();
//void liberarFila(Fila* ptrFila);
//void exibirFila(Fila* ptrFila);
//void exibirPilhaAvancada(Fila* ptrFila);
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media);
//bool desenfileiraPop(Fila* ptrFila);
//No* consultarPrimeiroFila(Fila* ptrFila);
//void unirFilas(Fila* ptrFilaX, Fila* ptrFilaY, Fila* ptrFilaZ);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Fila* pFilaX;
//	Fila* pFilaY;
//	Fila* pFilaZ;
//
//	pFilaX = criarFila();
//	pFilaY = criarFila();
//	pFilaZ = criarFila();
//
//	enfileirarPush(pFilaX, 1, "Raul", 8.0);
//	enfileirarPush(pFilaX, 3, "José", 4.0);
//	enfileirarPush(pFilaX, 5, "Jesus", 10.0);
//	enfileirarPush(pFilaX, 9, "Pamela", 3.5);
//	enfileirarPush(pFilaX, 12, "Henrique", 7.0);
//	enfileirarPush(pFilaX, 16, "Vitor", 3.5);
//	enfileirarPush(pFilaX, 23, "Pedro", 7.0);
//
//	enfileirarPush(pFilaY, 1, "Raul", 8.0);
//	enfileirarPush(pFilaY, 2, "Carlos", 4.0);
//	enfileirarPush(pFilaY, 6, "Josue", 10.0);
//	enfileirarPush(pFilaY, 7, "Paulo", 3.5);
//	enfileirarPush(pFilaY, 9, "Pamela", 3.5);
//	enfileirarPush(pFilaY, 15, "Danilo", 10.0);
//	enfileirarPush(pFilaY, 23, "Pedro", 7.0);
//
//	unirFilas(pFilaX, pFilaY, pFilaZ);
//
//	exibirFila(pFilaZ);
//
//	liberarFila(pFilaX);
//	liberarFila(pFilaY);
//	liberarFila(pFilaZ);
//
//	system("pause");
//	return 0;
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl;
//		cout << "\tPróximo-> " << ptrNoAtual->proxNo << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	cout << "-------------------------------------------" << endl;
//	cout << endl;
//}
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila não está criada!" << endl;
//		return false;
//	}
//
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
//void unirFilas(Fila* ptrFilaX, Fila* ptrFilaY, Fila* ptrFilaZ) {
//	No* ptrNoAtualX;
//	No* ptrNoAtualY;
//	No* ptrNoAtualZ;
//
//	int matriculaX;
//	string nomeX;
//	float mediaX;
//
//	int matriculaY;
//	string nomeY;
//	float mediaY;
//
//	int menor;
//	int flagX = 0;
//	int flagY = 0;
//
//	ptrNoAtualX = ptrFilaX->inicio;
//	ptrNoAtualY = ptrFilaY->inicio;
//
//	while (ptrNoAtualX != NULL && ptrNoAtualY != NULL)
//	{
//		matriculaX = ptrNoAtualX->dados.matricula;
//		nomeX = ptrNoAtualX->dados.nome;
//		mediaX = ptrNoAtualX->dados.media;
//
//		matriculaY = ptrNoAtualY->dados.matricula;
//		nomeY = ptrNoAtualY->dados.nome;
//		mediaY = ptrNoAtualY->dados.media;
//		
//		if (ptrNoAtualX->dados.matricula == ptrNoAtualY->dados.matricula) 
//		{
//			enfileirarPush(ptrFilaZ, matriculaX, nomeX, mediaX);
//			ptrNoAtualX = ptrNoAtualX->proxNo;
//			ptrNoAtualY = ptrNoAtualY->proxNo;
//		}
//		else
//		{
//			ptrNoAtualZ = ptrFilaZ->inicio;
//			while (ptrNoAtualZ != NULL)
//			{
//				
//				if (ptrNoAtualX->dados.matricula == ptrNoAtualZ->dados.matricula) {
//					flagX++;
//				}
//				if (ptrNoAtualY->dados.matricula == ptrNoAtualZ->dados.matricula) {
//					flagY++;
//				}
//				ptrNoAtualZ = ptrNoAtualZ->proxNo;
//			}
//
//			if (flagX == 0 && flagY == 0)
//			{
//				if (ptrNoAtualX->dados.matricula < ptrNoAtualY->dados.matricula)
//				{
//					enfileirarPush(ptrFilaZ, matriculaX, nomeX, mediaX);
//					enfileirarPush(ptrFilaZ, matriculaY, nomeY, mediaY);
//					ptrNoAtualX = ptrNoAtualX->proxNo;
//					ptrNoAtualY = ptrNoAtualY->proxNo;
//				}
//				else
//				{
//					enfileirarPush(ptrFilaZ, matriculaY, nomeY, mediaY);
//					enfileirarPush(ptrFilaZ, matriculaX, nomeX, mediaX);
//					ptrNoAtualX = ptrNoAtualX->proxNo;
//					ptrNoAtualY = ptrNoAtualY->proxNo;
//				}
//			}
//			else if (flagX > 0)
//			{
//				enfileirarPush(ptrFilaZ, matriculaY, nomeY, mediaY);
//				ptrNoAtualX = ptrNoAtualX->proxNo;
//				ptrNoAtualY = ptrNoAtualY->proxNo;
//			}
//			else if (flagY > 0)
//			{
//				enfileirarPush(ptrFilaZ, matriculaX, nomeX, mediaX);
//				ptrNoAtualX = ptrNoAtualX->proxNo;
//				ptrNoAtualY = ptrNoAtualY->proxNo;
//			}
//			flagX = 0;
//			flagY = 0;
//		}
//	}
//}

//exercicio3
/*Dadas duas filas com as seguintes matrículas em ordem
crescente.
pFilaX ={1, 3, 5, 9,12, 16, 23} e
pFilaY = {1, 2, 6, 7, 9, 15, 23},
implemente a operação INTERSECÇÃO, que cria uma
terceira fila com a intersecção entre as duas anteriores.
pFilaZ = {1, 9, 23}*/

//#include <iostream>
//#include <stdlib.h> 
//#include <string>
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
//Fila* criarFila();
//void liberarFila(Fila* ptrFila);
//void exibirFila(Fila* ptrFila);
//void exibirPilhaAvancada(Fila* ptrFila);
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media);
//bool desenfileiraPop(Fila* ptrFila);
//No* consultarPrimeiroFila(Fila* ptrFila);
//void interseccaoFilas(Fila* ptrFilaX, Fila* ptrFilaY, Fila* ptrFilaZ);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Fila* pFilaX;
//	Fila* pFilaY;
//	Fila* pFilaZ;
//
//	pFilaX = criarFila();
//	pFilaY = criarFila();
//	pFilaZ = criarFila();
//
//	enfileirarPush(pFilaX, 1, "Raul", 8.0);
//	enfileirarPush(pFilaX, 3, "José", 4.0);
//	enfileirarPush(pFilaX, 5, "Jesus", 10.0);
//	enfileirarPush(pFilaX, 9, "Pamela", 3.5);
//	enfileirarPush(pFilaX, 12, "Henrique", 7.0);
//	enfileirarPush(pFilaX, 16, "Vitor", 3.5);
//	enfileirarPush(pFilaX, 23, "Pedro", 7.0);
//
//	enfileirarPush(pFilaY, 1, "Raul", 8.0);
//	enfileirarPush(pFilaY, 2, "Carlos", 4.0);
//	enfileirarPush(pFilaY, 6, "Josue", 10.0);
//	enfileirarPush(pFilaY, 7, "Paulo", 3.5);
//	enfileirarPush(pFilaY, 9, "Pamela", 3.5);
//	enfileirarPush(pFilaY, 15, "Danilo", 10.0);
//	enfileirarPush(pFilaY, 23, "Pedro", 7.0);
//
//	interseccaoFilas(pFilaX, pFilaY, pFilaZ);
//
//	exibirFila(pFilaZ);
//
//	liberarFila(pFilaX);
//	liberarFila(pFilaY);
//	liberarFila(pFilaZ);
//
//	system("pause");
//	return 0;
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
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
//		cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//		cout << "Média: " << ptrNoAtual->dados.media << endl;
//		cout << "\tPróximo-> " << ptrNoAtual->proxNo << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	cout << "-------------------------------------------" << endl;
//	cout << endl;
//}
//
//bool enfileirarPush(Fila* ptrFila, int matricula, string nome, float media) {
//	No* ptrNoNovo;
//
//
//	//Se a FILA NÃO foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila não está criada!" << endl;
//		return false;
//	}
//
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
//void interseccaoFilas(Fila* ptrFilaX, Fila* ptrFilaY, Fila* ptrFilaZ) {
//	No* ptrNoAtualX;
//	No* ptrNoAtualY;
//
//	int matricula;
//	string nome;
//	float media;
//
//	ptrNoAtualX = ptrFilaX->inicio;
//	
//
//	while (ptrNoAtualX != NULL)
//	{
//		matricula = ptrNoAtualX->dados.matricula;
//		nome = ptrNoAtualX->dados.nome;
//		media = ptrNoAtualX->dados.media;
//
//		ptrNoAtualY = ptrFilaY->inicio;
//		while (ptrNoAtualY != NULL)
//		{
//			if (ptrNoAtualX->dados.matricula == ptrNoAtualY->dados.matricula) {
//				enfileirarPush(ptrFilaZ, matricula, nome, media);
//				break;
//			}
//			ptrNoAtualY = ptrNoAtualY->proxNo;
//		}
//		ptrNoAtualX = ptrNoAtualX->proxNo;
//	}
//}