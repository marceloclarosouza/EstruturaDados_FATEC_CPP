//Avalia��o Efetuada em Dupla pelos Alunos
//MARCELO CLARO DE SOUZA
//MARCELO GIACOMINI BONATO


////Exercicio 01
///*Crie uma fun��o que receba uma LISTA DUPLAMENTE ENCADEADA. A fun��o dever� somar
//o primeiro n� com o �ltimo e exibir o resultado na tela, em seguida, o segundo com o pen�ltimo e
//exibir, o terceiro com o antepen�ltimo e exibir, assim sucessivamente at� que se tenha somado a
//primeira metade da lista com a segunda.
//Exemplo:
//LDE: 1 <�> 3 <�> 5 <�> 9 <�> 9 <�> 11 <�> 12 <�> 13 <�> 14 <�> 15
//Sa�da: 16 � 17 � 18 � 21 - 20*/
//
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
//	cout << "Lista: " << endl;
//	exibirLista(pLista1);
//	
//	somarPrimeiroUltimo(pLista1, pLista2);
//
//	cout << "\n\nLista da Soma: " << endl;
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
//	// Lista n�o foi criada
//	if (ptrLista == NULL) {
//		cout << "N�o foi poss�vel criar a lista!" << endl;
//		return NULL;
//	}
//
//	// In�cio da lista aponta par null	
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
//	// Lista n�o foi criada
//	if (ptrLista == NULL) {
//		cout << "Lista inexistente" << endl;
//		return;
//	}
//
//	// Excluir os N�s da lista
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
//	// Lista n�o foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//
//	//Se n�o tiver nenhum N� na lista
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
//	//Se a lista N�O foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o foi criada!" << endl;
//		return false;
//	}
//
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Mem�ria insulficiente!" << endl;
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
//	// Se n�o tiver n�s na lista
//	if (ptrNoAtual == NULL) {
//
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else {
//
//		// Localizar o �ltimo n�
//		while (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//		ptrNoAtual->proxNo = ptrNoNovo;
//		ptrNoNovo->antNo = ptrNoAtual;
//	}
//
//	// Contador de N�s
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
//	//Se a lista N�O foi criada
//	if (ptrLista1 == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//
//	//Se n�o tiver nenhum N� na lista
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

//// Exercicio 02
///*Crie uma fun��o que receba uma LISTA DUPLAMENTE ENCADEADA (deve estar ordenada) e
//remova os n�s que estejam duplicados. Em seguida, exiba a lista sem os n�s duplicados.
//Exemplo:
//Antes da fun��o
//LDE: 1 <�> 1 <�> 2 <�> 2 <�> 2 <�> 3 <�> 4 <�> 5 <�> 5 <�> 5 <�> 5
//Depois da fun��o
//LDE: 1 <�> 2 <�> 3 <�> 4 <�> 5*/
//
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
//// Estrutura do N�
//struct No {
//	No* antNo;		// aponta para o N� anterior da lista
//	Dados dados;	// estrutura guardada dentro da lista	
//	No* proxNo;		// aponta para o pr�ximo N� da lista
//};
//
//// N� in�cio da lista
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
//	cout << "Lista Sem Tratamento: " << endl;
//	exibirLista(pLista1);
//	
//	removeNumDuplicado(pLista1, pLista2);
//	cout << "\n\nLista Tratada: " << endl;
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
//	// Lista n�o foi criada
//	if (ptrLista == NULL) {
//		cout << "N�o foi poss�vel criar a lista!" << endl;
//		return NULL;
//	}
//
//	// In�cio da lista aponta par null	
//	ptrLista->qtdNo = 0;
//	ptrLista->inicio = NULL;
//
//	return ptrLista;
//}
//
//void liberarLista(Lista* ptrLista) {
//	No* ptrNoAtual;
//
//	// Lista n�o foi criada
//	if (ptrLista == NULL) {
//		cout << "Lista inexistente" << endl;
//		return;
//	}
//
//	// Excluir os N�s da lista
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
//	// Lista n�o foi criada
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//	//Se n�o tiver nenhum N� na lista
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
//		cout << "Mem�ria insulficiente!" << endl;
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
//		// Localiza a posi��o de inser��o
//		while (ptrNoAtual != NULL && ptrNoAtual->dados.numeros < num) {
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
//	// Contador de n�s
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
//	//Se a lista N�O foi criada
//	if (ptrLista1 == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
//		return;
//	}
//
//
//	//Se n�o tiver nenhum N� na lista
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

//// Exercicio 03
///*Dada duas PILHAS ENCADEADAS (Pilha A e Pilha B), com 3 elementos cada, crie uma terceira
//(Pilha C), tamb�m encadeada, com os elementos em ordem crescente.
//PilhaA 1, 3, 5
//PilhaB 2, 4, 6
//PilhaC 6, 5, 4, 3, 2, 1 */
//
//#include <iostream>
//#include <stdlib.h> 
//#include <string>
//
//using namespace std;
//
//
//struct Dados {
//	int numero;
//};
//
//struct No {
//	Dados dados;	
//	No* proxNo;		
//};
//
//// N� topo da Pilha
//struct Pilha {
//	int qtdNo;
//	No* topo;
//};
//
//Pilha* criarPilha();
//void liberarPilha(Pilha* ptrPilha);
//void exibirPilha(Pilha* ptrPilha);
//bool empilharPush(Pilha* ptrPilha, int num);
//void unirPilhas(Pilha* ptrPilha1, Pilha* ptrPilha2, Pilha* ptrPilha3);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Pilha* pPilha1;
//	Pilha* pPilha2;
//	Pilha* pPilha3;
//
//	pPilha1 = criarPilha();
//	pPilha2 = criarPilha();
//	pPilha3 = criarPilha();
//
//	empilharPush(pPilha1, 5);
//	empilharPush(pPilha1, 3);
//	empilharPush(pPilha1, 1);
//	cout << "Pilha 1: " << endl;
//	exibirPilha(pPilha1);
//	cout << endl;
//	empilharPush(pPilha2, 6);
//	empilharPush(pPilha2, 4);
//	empilharPush(pPilha2, 2);
//	cout << "Pilha 2: " << endl;
//	exibirPilha(pPilha2);
//	cout << endl;
//
//	unirPilhas(pPilha1, pPilha2, pPilha3);
//	cout << "Pilha 3: " << endl;
//	exibirPilha(pPilha3);
//
//	liberarPilha(pPilha1);
//	liberarPilha(pPilha2);
//	liberarPilha(pPilha3);
//
//	system("pause");
//	return 0;
//}
//
//Pilha* criarPilha() {
//	Pilha* ptrPilha;
//
//	ptrPilha = new Pilha;
//
//	// Se a PILHA N�O pode ser criada
//	if (ptrPilha == NULL) {
//		cout << "Pilha Null!" << endl;
//		return NULL;
//	}
//
//	// Inicio da pilha	
//	ptrPilha->qtdNo = 0;
//	ptrPilha->topo = NULL;
//
//	return ptrPilha;
//}
//
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
//void exibirPilha(Pilha* ptrPilha) {
//	No* ptrNoAtual;
//
//	//Se a PILLHA N�O foi criada
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o foi criada!" << endl;
//		return;
//	}
//
//
//	//Se n�o tiver nenhum N� na pilha
//	if (ptrPilha->topo == NULL) {
//		cout << "Pilha vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrPilha->topo;
//
//	while (ptrNoAtual != NULL) {
//		cout << "Numero: " << ptrNoAtual->dados.numero << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//bool empilharPush(Pilha* ptrPilha, int numero) {
//	No* ptrNoNovo;
//
//	
//	if (ptrPilha == NULL) {
//		cout << "A pilha n�o foi criada!" << endl;
//		return false;
//	}
//
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Mem�ria insulficiente!" << endl;
//		return false;
//	}
//
//	ptrNoNovo->dados.numero = numero;
//	ptrNoNovo->proxNo = ptrPilha->topo;
//
//	// Empilhar
//	ptrPilha->topo = ptrNoNovo;
//
//	// Contador de N�s
//	ptrPilha->qtdNo++;
//
//	return true;
//}
//
//void unirPilhas(Pilha* ptrPilha1, Pilha* ptrPilha2, Pilha* ptrPilha3) {
//	No* ptrNoAtual1;
//	No* ptrNoAtual2;
//	int menor;
//	int num;
//
//	// Se a PILHA N�O foi criada
//	if (ptrPilha1 == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//	}
//
//	//Se n�o tiver nenhum N� na pilha
//	if (ptrPilha1->topo == NULL) {
//		cout << "A pilha est� vazia!" << endl;
//	}
//
//	ptrNoAtual1 = ptrPilha1->topo;
//	ptrNoAtual2 = ptrPilha2->topo;
//
//	while (ptrNoAtual1 != NULL)
//	{
//		if (ptrNoAtual1->dados.numero == ptrNoAtual2->dados.numero) {
//			num = ptrNoAtual1->dados.numero;
//			empilharPush(ptrPilha2, num);
//			empilharPush(ptrPilha3, num);
//		}
//		else
//		{
//			menor = ptrNoAtual1->dados.numero;
//			if (menor < ptrNoAtual2->dados.numero)
//			{
//				num = ptrNoAtual1->dados.numero;
//				empilharPush(ptrPilha3, num);
//				num = ptrNoAtual2->dados.numero;
//				empilharPush(ptrPilha3, num);
//			}
//			else
//			{
//				num = ptrNoAtual1->dados.numero;
//				empilharPush(ptrPilha3, num);
//				num = ptrNoAtual1->dados.numero;
//				empilharPush(ptrPilha3, num);
//			}
//		}
//		ptrNoAtual1 = ptrNoAtual1->proxNo;
//		ptrNoAtual2 = ptrNoAtual2->proxNo;
//	}
//}

////Exerc�cio 04
////Crie uma fun��o que receba duas FILAS ENCADEADAS.A primeira fila(Fila A) dever� ter 5 elementos, a segunda(Fila B) dever� estar vazia.
////A fun��o dever� inserir os elementos da Fila A na Fila B de forma que a Fila B fique invertida da Fila A.
////Exemplo:
////Fila A : 1 < � 2 < � 3 < � 4 < � 5
////Fila B : 5 < � 4 < � 3 < � 2 < � 1
//
//#include <iostream>
//#include <stdlib.h> 
//#include <string>
//
//using namespace std;
//
//
//// Dados sobre o ALUNO
//struct Dados {
//	int numero;
//};
//
//// Estrutura do N�
//struct No {
//	Dados dados;	// estrutura guardada dentro da lista
//	No* proxNo;			// aponta para o pr�ximo N� da lista
//};
//
//// Fila
//struct Fila {
//	int qtdNo;
//	No* inicio;  // cabe�a para in�cio
//	No* final;   // cauda para fim
//};
//
//
//Fila* criarFila();
//void liberarFila(Fila* ptrFila);
//void exibirFila(Fila* ptrFila);
//
//bool enfileirarPush(Fila* ptrFila, int numero);
//bool desenfileiraPop(Fila* ptrFila);
//void inverteFila(Fila* ptrFilaA, Fila* ptrFilaB);
//
////--------------------------------------------------------
////						M A I N
////--------------------------------------------------------
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Fila* pFilaA, *pFilaB;
//
//	int num;
//
//	// Cria a FILA
//	pFilaA = criarFila();
//	pFilaB = criarFila();
//
//
//	//--------------------------------------
//	// Enfileira
//	//--------------------------------------
//	enfileirarPush(pFilaA, 1);
//	enfileirarPush(pFilaA, 2);
//	enfileirarPush(pFilaA, 3);
//	enfileirarPush(pFilaA, 4);
//	enfileirarPush(pFilaA, 5);
//	
//	inverteFila(pFilaA, pFilaB);
//
//	cout << "Fila A: " << endl;
//	exibirFila(pFilaA);
//	cout << "\n\nFila B: " << endl;
//	exibirFila(pFilaB);
//
//
//	// Libera a mem�ria alocada para a FILA
//	liberarFila(pFilaA);
//	liberarFila(pFilaB);
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
//	// Se a FILA N�O pode ser criada
//	if (ptrFila == NULL) {
//		cout << "N�o foi poss�vel criar a fila!" << endl;
//		return NULL;
//	}
//
//	// Como a FILA est� vazia o IN�CIO e o FINAL apontaM para NULL	
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
//	//Se a FILA N�O foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila n�o est� criada!" << endl;
//		return;
//	}
//
//	// Exclui cada N� da FILA
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
//	//Se a FILA N�O foi criada
//	if (ptrFila == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return;
//	}
//
//	//Se n�o tiver nenhum N� na FILA
//	if (ptrFila->inicio == NULL) {
//		cout << "A fila esta vazia!" << endl;
//		return;
//	}
//
//	ptrNoAtual = ptrFila->inicio;
//
//	while (ptrNoAtual != NULL) {
//		cout << "Valor: " << ptrNoAtual->dados.numero << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
////--------------------------------------------------------
//// ENFILEIRA
////--------------------------------------------------------
//bool enfileirarPush(Fila* ptrFila, int numero) {
//	No* ptrNoNovo;
//
//
//	//Se a FILA N�O foi criada
//	if (ptrFila == NULL) {
//		cout << "A fila n�o est� criada!" << endl;
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
//	// Incrementa o quantidade de N�s
//	ptrFila->qtdNo++;
//
//	return true;
//}
//
////--------------------------------------------------------
//// DESENFILEIRA
////--------------------------------------------------------
//bool desenfileiraPop(Fila* ptrFila) {
//	No* ptrNoAtual;
//
//	// Se a FILA N�O foi criada
//	if (ptrFila == NULL) {
//		cout << "A pilha n�o est� criada!" << endl;
//		return false;
//	}
//
//	// Cria um ponteiro auxiliar
//	ptrNoAtual = ptrFila->inicio;
//
//	// Ajusta o in�cio da fila
//	ptrFila->inicio = ptrFila->inicio->proxNo;
//
//	// Se for o �ltimo n� da fila
//	if (ptrFila->inicio == NULL) {          // caso tivesse apenas 1 elemento, fica vazia
//		ptrFila->final = NULL;
//	}
//
//	// Exclui o n� 
//	delete ptrNoAtual;
//
//	// Decrementa o quantidade de N�s
//	ptrFila->qtdNo--;
//
//	return true;
//}
//
////-------------------------------------
////INVERTE FILA
////-------------------------------------
//void inverteFila(Fila* ptrFilaA, Fila* ptrFilaB) {
//	int num, i, j;
//	No* ptrNoAtual;
//
//	ptrNoAtual = ptrFilaA->inicio;
//
//	for (i = 0; i < ptrFilaA->qtdNo; i++) {
//		ptrNoAtual = ptrFilaA->inicio;
//		for (j = 0; j < ptrFilaA->qtdNo; j++) {
//			if (j == (ptrFilaA->qtdNo - (i + 1))) {
//				num = ptrNoAtual->dados.numero;
//				enfileirarPush(ptrFilaB, num);
//			}
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//	}
//
//}

