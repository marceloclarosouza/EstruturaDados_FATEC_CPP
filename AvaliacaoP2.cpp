//Exercicio 01
/*Crie uma função que receba uma LISTA DUPLAMENTE ENCADEADA. A função deverá somar
o primeiro nó com o último e exibir o resultado na tela, em seguida, o segundo com o penúltimo e
exibir, o terceiro com o antepenúltimo e exibir, assim sucessivamente até que se tenha somado a
primeira metade da lista com a segunda.
Exemplo:
LDE: 1 <–> 3 <–> 5 <–> 9 <–> 9 <–> 11 <–> 12 <–> 13 <–> 14 <–> 15
Saída: 16 – 17 – 18 – 21 - 20*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct Dados {
//	int numeros;
//};
//
//
//struct No {
//	No* antNo;	
//	Dados dados;	
//	No* proxNo;	
//};
//
//
//struct Lista {
//	int qtdNo;
//	No* inicio;
//};
//
//Lista* criarLista();
//void liberarLista(Lista* ptrLista);
//void exibirLista(Lista* ptrLista);
//bool inserirListaFim(Lista* ptrLista, int num);
//void somarPrimeiroUltimo(Lista* ptrLista1, Lista* ptrLista2);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	cout << fixed << setprecision(2);
//
//	Lista* pLista1;
//	Lista* pLista2;
//
//	pLista1 = criarLista();
//	pLista2 = criarLista();
//
//	inserirListaFim(pLista1, 1);
//	inserirListaFim(pLista1, 3);
//	inserirListaFim(pLista1, 5);
//	inserirListaFim(pLista1, 9);
//	inserirListaFim(pLista1, 9);
//	inserirListaFim(pLista1, 11);
//	inserirListaFim(pLista1, 12);
//	inserirListaFim(pLista1, 13);
//	inserirListaFim(pLista1, 14);
//	inserirListaFim(pLista1, 15);
//	
//	somarPrimeiroUltimo(pLista1, pLista2);
//
//	exibirLista(pLista2);
//
//	liberarLista(pLista1);
//	liberarLista(pLista2);
//
//	system("pause");
//	return 0;
//}
//
//
//Lista* criarLista() {
//	Lista* ptrLista;
//
//	ptrLista = new Lista;
//
//	// Lista não foi criada
//	if (ptrLista == NULL) {
//		cout << "Não foi possível criar a lista!" << endl;
//		return NULL;
//	}
//
//	// Início da lista aponta par null	
//	ptrLista->qtdNo = 0;
//	ptrLista->inicio = NULL;
//
//	return ptrLista;
//}
//
////Liberar lista
//void liberarLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	// Lista não foi criada
//	if (ptrLista == NULL) {
//		cout << "Lista inexistente" << endl;
//		return;
//	}
//
//	// Excluir os Nós da lista
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
//// Exibir lista
//void exibirLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	// Lista não foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
//
//
//	//Se não tiver nenhum Nó na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "Lista vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	while (ptrNoAtual != NULL) {
//		cout << "Numero: " << ptrNoAtual->dados.numeros << endl;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//
//bool inserirListaFim(Lista* ptrLista, int num) {
//	No* ptrNoNovo;
//	No* ptrNoAtual;
//
//	//Se a lista NÃO foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista não foi criada!" << endl;
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
//	ptrNoNovo->dados.numeros = num;
//
//	ptrNoNovo->antNo = NULL;
//	ptrNoNovo->proxNo = NULL;
//
//	ptrNoAtual = ptrLista->inicio;
//
//	// Se não tiver nós na lista
//	if (ptrNoAtual == NULL) {
//
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else {
//
//		// Localizar o último nó
//		while (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//		ptrNoAtual->proxNo = ptrNoNovo;
//		ptrNoNovo->antNo = ptrNoAtual;
//	}
//
//	// Contador de Nós
//	ptrLista->qtdNo++;
//
//	return true;
//}
//
//void somarPrimeiroUltimo(Lista* ptrLista1, Lista* ptrLista2) {
//	No* ptrNoAtual1;
//	No* ptrNoAtual2;
//
//	int esquerda, direita, centro;
//	int cont = 0;
//	int i = 0;
//	int j = 0;
//
//	//Se a lista NÃO foi criada
//	if (ptrLista1 == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
//
//
//	//Se não tiver nenhum Nó na lista
//	if (ptrLista1->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual1 = ptrLista1->inicio;
//	ptrNoAtual2 = ptrLista2->inicio;
//
//	while (ptrNoAtual1 != NULL) {
//		cont++;
//		ptrNoAtual1 = ptrNoAtual1->proxNo;
//	}
//
//	ptrNoAtual1 = ptrLista1->inicio;
//	centro = cont / 2;
//
//	for (i = 0; i < centro; i++) {
//		esquerda = ptrNoAtual1->dados.numeros;
//		ptrNoAtual2 = ptrLista1->inicio;
//		for (j = 0; j < cont; j++)
//		{
//			if (j == cont - (i + 1)) {
//				direita = ptrNoAtual2->dados.numeros;
//				break;
//			}
//			ptrNoAtual2 = ptrNoAtual2->proxNo;
//		}
//
//		esquerda += direita;
//
//		inserirListaFim(ptrLista2, esquerda);
//
//		ptrNoAtual1 = ptrNoAtual1->proxNo;
//	}
//
//}

// Exercicio 02
/*Crie uma função que receba uma LISTA DUPLAMENTE ENCADEADA (deve estar ordenada) e
remova os nós que estejam duplicados. Em seguida, exiba a lista sem os nós duplicados.
Exemplo:
Antes da função
LDE: 1 <–> 1 <–> 2 <–> 2 <–> 2 <–> 3 <–> 4 <–> 5 <–> 5 <–> 5 <–> 5
Depois da função
LDE: 1 <–> 2 <–> 3 <–> 4 <–> 5*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//// Dados sobre o ALUNO
//struct Dados {
//	int numeros;
//};
//
//// Estrutura do Nó
//struct No {
//	No* antNo;		// aponta para o Nó anterior da lista
//	Dados dados;	// estrutura guardada dentro da lista	
//	No* proxNo;		// aponta para o próximo Nó da lista
//};
//
//// Nó início da lista
//struct Lista {
//	int qtdNo;
//	No* inicio;
//};
//
//Lista* criarLista();
//void liberarLista(Lista* ptrLista);
//void exibirLista(Lista* ptrLista);
//bool inserirListaOrdenada(Lista* ptrLista, int num);
//void removeNumDuplicado(Lista* ptrLista1, Lista* ptrLista2);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	cout << fixed << setprecision(2); // Define o nro de casas decimais
//
//	Lista* pLista1;
//	Lista* pLista2;
//
//	pLista1 = criarLista();
//	pLista2 = criarLista();
//
//	inserirListaOrdenada(pLista1, 1);
//	inserirListaOrdenada(pLista1, 1);
//	inserirListaOrdenada(pLista1, 2);
//	inserirListaOrdenada(pLista1, 2);
//	inserirListaOrdenada(pLista1, 2);
//	inserirListaOrdenada(pLista1, 3);
//	inserirListaOrdenada(pLista1, 4);
//	inserirListaOrdenada(pLista1, 5);
//	inserirListaOrdenada(pLista1, 5);
//	inserirListaOrdenada(pLista1, 5);
//	inserirListaOrdenada(pLista1, 5);
//	
//	removeNumDuplicado(pLista1, pLista2);
//
//	exibirLista(pLista2);
//
//	liberarLista(pLista1);
//	liberarLista(pLista2);
//
//	system("pause");
//	return 0;
//}
//
//Lista* criarLista() {
//	Lista* ptrLista;
//
//	ptrLista = new Lista;
//
//	// Lista não foi criada
//	if (ptrLista == NULL) {
//		cout << "Não foi possível criar a lista!" << endl;
//		return NULL;
//	}
//
//	// Início da lista aponta par null	
//	ptrLista->qtdNo = 0;
//	ptrLista->inicio = NULL;
//
//	return ptrLista;
//}
//
//void liberarLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	// Lista não foi criada
//	if (ptrLista == NULL) {
//		cout << "Lista inexistente" << endl;
//		return;
//	}
//
//	// Excluir os Nós da lista
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
//void exibirLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	// Lista não foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
//
//	//Se não tiver nenhum Nó na lista
//	if (ptrLista->inicio == NULL) {
//		cout << "Lista vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrLista->inicio;
//
//	while (ptrNoAtual != NULL) {
//		cout << "Numero: " << ptrNoAtual->dados.numeros << endl;
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//bool inserirListaOrdenada(Lista* ptrLista, int num) {
//	No* ptrNoNovo;
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Memória insulficiente!" << endl;
//		return false;
//	}
//
//	ptrNoNovo->dados.numeros = num;
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
//		while (ptrNoAtual != NULL && ptrNoAtual->dados.numeros < num) {
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
//	// Contador de nós
//	ptrLista->qtdNo++;
//
//	return true;
//}
//
//void removeNumDuplicado(Lista* ptrLista1, Lista* ptrLista2) {
//	No* ptrNoAtual1;
//	No* ptrNoAtual2;
//	int num;
//
//	//Se a lista NÃO foi criada
//	if (ptrLista1 == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
//
//
//	//Se não tiver nenhum Nó na lista
//	if (ptrLista1->inicio == NULL) {
//		cout << "A lista esta vazia!" << endl;
//		return;
//	}
//	
//	ptrNoAtual1 = ptrLista1->inicio;
//	ptrNoAtual2 = ptrLista2->inicio;
//
//	while (ptrNoAtual1 != NULL) {
//		num = ptrNoAtual1->dados.numeros;
//		if (ptrNoAtual2 == NULL) {
//			inserirListaOrdenada(ptrLista2, num);
//			ptrNoAtual2 = ptrLista2->inicio;
//		} 
//		else if (ptrNoAtual1->dados.numeros != ptrNoAtual2->dados.numeros) {
//			inserirListaOrdenada(ptrLista2, num);
//			ptrNoAtual2 = ptrNoAtual2->proxNo;
//		}
//		ptrNoAtual1 = ptrNoAtual1->proxNo;
//	}
//
//}

// Exercicio 03
/*Dada duas PILHAS ENCADEADAS (Pilha A e Pilha B), com 3 elementos cada, crie uma terceira
(Pilha C), também encadeada, com os elementos em ordem crescente.
PilhaA 1, 3, 5
PilhaB 2, 4, 6
PilhaC 6, 5, 4, 3, 2, 1 */

#include <iostream>
#include <stdlib.h> 
#include <string>

using namespace std;


// Dados sobre o ALUNO
struct Dados {
	int numero;
};

// Estrutura do Nó
struct No {
	Dados dados;	// estrutura guardada dentro da lista
	No* proxNo;			// aponta para o próximo Nó da lista
};

// Nó topo da Pilha
struct Pilha {
	int qtdNo;
	No* topo;
};

Pilha* criarPilha();
void liberarPilha(Pilha* ptrPilha);
void exibirPilha(Pilha* ptrPilha);
bool empilharPush(Pilha* ptrPilha, int numero);
void unirPilhas(Pilha* ptrPilhaX, Pilha* ptrPilhaY, Pilha* ptrPilhaZ);

int main() {
	setlocale(LC_ALL, "Portuguese");

	Pilha* pPilhaA;
	Pilha* pPilhaB;
	Pilha* pPilhaC;

	pPilhaA = criarPilha();
	pPilhaB = criarPilha();
	pPilhaC = criarPilha();

	empilharPush(pPilhaA, 5);
	empilharPush(pPilhaA, 3);
	empilharPush(pPilhaA, 1);

	empilharPush(pPilhaB, 6);
	empilharPush(pPilhaB, 4);
	empilharPush(pPilhaB, 2);

	unirPilhas(pPilhaA, pPilhaB, pPilhaC);
	
	exibirPilha(pPilhaC);

	liberarPilha(pPilhaA);
	liberarPilha(pPilhaB);
	liberarPilha(pPilhaC);

	system("pause");
	return 0;
}

Pilha* criarPilha() {
	Pilha* ptrPilha;

	ptrPilha = new Pilha;

	// Se a PILHA NÃO pode ser criada
	if (ptrPilha == NULL) {
		cout << "Não foi possível criar a pilha!" << endl;
		return NULL;
	}

	// Como a pilha está vazia o INÍCIO aponta para NULL	
	ptrPilha->qtdNo = 0;
	ptrPilha->topo = NULL;

	return ptrPilha;
}

void liberarPilha(Pilha* ptrPilha) {
	No* ptrNoAtual;

	//Se a PILHA NÃO foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha não está criada!" << endl;
		return;
	}

	// Exclui cada Nó da pilha
	while (ptrPilha->topo != NULL)
	{
		ptrNoAtual = ptrPilha->topo;

		ptrPilha->topo = ptrNoAtual->proxNo;

		delete  ptrNoAtual;
	}

	delete ptrPilha;
}

void exibirPilha(Pilha* ptrPilha) {
	No* ptrNoAtual;

	//Se a PILLHA NÃO foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha não está criada!" << endl;
		return;
	}


	//Se não tiver nenhum Nó na pilha
	if (ptrPilha->topo == NULL) {
		cout << "A pilha esta vazia!" << endl;
		return;
	}

	ptrNoAtual = ptrPilha->topo;

	while (ptrNoAtual != NULL) {
		cout << "Numero: " << ptrNoAtual->dados.numero << endl;

		ptrNoAtual = ptrNoAtual->proxNo;
	}
}

bool empilharPush(Pilha* ptrPilha, int numero) {
	No* ptrNoNovo;

	//Se a pilha NÃO foi criada
	if (ptrPilha == NULL) {
		cout << "A pilha não está criada!" << endl;
		return false;
	}

	ptrNoNovo = new No;

	if (ptrNoNovo == NULL) {
		cout << "Memória insulficiente!" << endl;
		return false;
	}

	ptrNoNovo->dados.numero = numero;
	ptrNoNovo->proxNo = ptrPilha->topo;

	// Empilha
	ptrPilha->topo = ptrNoNovo;

	// Incrementa o quantidade de Nós
	ptrPilha->qtdNo++;

	return true;
}

void unirPilhas(Pilha* ptrPilhaX, Pilha* ptrPilhaY, Pilha* ptrPilhaZ) {
	No* ptrNoAtualX;
	No* ptrNoAtualY;
	int menor;
	int numero;

	// Se a PILHA NÃO foi criada
	if (ptrPilhaX == NULL) {
		cout << "A pilha não está criada!" << endl;
	}

	//Se não tiver nenhum Nó na pilha
	if (ptrPilhaX->topo == NULL) {
		cout << "A pilha está vazia!" << endl;
	}

	ptrNoAtualX = ptrPilhaX->topo;
	ptrNoAtualY = ptrPilhaY->topo;

	while (ptrNoAtualX != NULL)
	{
		if (ptrNoAtualX->dados.numero == ptrNoAtualY->dados.numero) {
			numero = ptrNoAtualX->dados.numero;
			empilharPush(ptrPilhaZ, numero);
			empilharPush(ptrPilhaZ, numero);
		}
		else
		{
			menor = ptrNoAtualX->dados.numero;
			if (menor < ptrNoAtualY->dados.numero)
			{
				numero = ptrNoAtualX->dados.numero;
				empilharPush(ptrPilhaZ, numero);
				numero = ptrNoAtualY->dados.numero;
				empilharPush(ptrPilhaZ, numero);
			}
			else
			{
				numero = ptrNoAtualY->dados.numero;
				empilharPush(ptrPilhaZ, numero);
				numero = ptrNoAtualX->dados.numero;
				empilharPush(ptrPilhaZ, numero);
			}
		}
		ptrNoAtualX = ptrNoAtualX->proxNo;
		ptrNoAtualY = ptrNoAtualY->proxNo;
	}
}

// Exercicio 04

//#include <iostream>
//#include <stdlib.h> 
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//// Dados sobre o ALUNO
//struct Dados {
//	int numero;
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
//bool enfileirarPush(Fila* ptrFila, int numero);
//void inverteFila(Fila* ptrFilaX, Fila* ptrFilaY);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Fila* pFilaA;
//	Fila* pFilaB;
//
//	pFilaA = criarFila();
//	pFilaB = criarFila();
//
//	enfileirarPush(pFilaA, 1);
//	enfileirarPush(pFilaA, 2);
//	enfileirarPush(pFilaA, 3);
//	enfileirarPush(pFilaA, 4);
//	enfileirarPush(pFilaA, 5);
//
//	inverteFila(pFilaA, pFilaB);
//	
//	cout << "Fila A" << endl << endl;
//	exibirFila(pFilaA);
//	cout << "\nFila B" << endl << endl;
//	exibirFila(pFilaB);
//
//	liberarFila(pFilaA);
//	liberarFila(pFilaB);
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
//		ptrFila->inicio = ptrNoAtual->proxNo;
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
//		cout << "Numero: " << ptrNoAtual->dados.numero << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//bool enfileirarPush(Fila* ptrFila, int numero) {
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
//	ptrNoNovo->dados.numero = numero;
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
//void inverteFila(Fila* ptrFilaX, Fila* ptrFilaY) {
//	No* ptrNoAtualX;
//	int numero;
//	int cont = 0;
//	int i;
//	int j;
//
//	if (ptrFilaX == NULL) {
//		cout << "A fila não está criada!" << endl;
//	}
//
//	if (ptrFilaX->inicio == NULL) {
//		cout << "A fila está vazia!" << endl;
//	}
//
//	ptrNoAtualX = ptrFilaX->inicio;
//	while (ptrNoAtualX != NULL) {
//		ptrNoAtualX = ptrNoAtualX->proxNo;
//		cont++;
//	}
//
//	for (i = 0; i < cont; i++) 
//	{
//		ptrNoAtualX = ptrFilaX->inicio;
//		for (j = 0; j < cont; j++)
//		{
//			if (j == cont - (i + 1)) 
//			{
//				numero = ptrNoAtualX->dados.numero;
//				enfileirarPush(ptrFilaY, numero);
//			}
//			ptrNoAtualX = ptrNoAtualX->proxNo;
//		}
//	}
//}