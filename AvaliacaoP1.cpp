/*Parte 01
Insira, via programa��o, 10 medicamentos a uma lista.O ano de vencimento dos produtos deve
ser 2020 e os meses dever�o variar entre janeiro e dezembro.
Em seguida, crie 3 fun��es, todas devem receber como par�metro a lista.
A primeira deve receber, tamb�m, o nome do princ�pio ativo, encontrar e imprimir todos os
medicamentos que tenham o princ�pio ativo informado.
A segunda deve encontrar e imprimir o medicamento que tenha o pre�o de venda mais barato e o
mais caro da lista.
A terceira deve receber, a lista, o m�s e o ano de vencimento do produto.Dever� ser listado todos
os medicamentos que ter�o a data de validade vencida nos pr�ximos 3 meses a partir da data
informada na fun��o.*/


#include <iostream>
#include <locale.h>
#include <stdlib.h> // system
#include <string> // Textos em geral

using namespace std;

// Dados sobre o ALUNO

struct Dados {
	int ano_vencimento;
	int mes_vencimento;
	string p_ativo;
	float p_venda;
	string medicamento;
};

// Estrutura do N�

struct No {
	Dados dados; // estrutura guardada dentro da lista
	No* proxNo; // aponta para o pr�ximo N� da lista
};

// N� in�cio da lista

struct Lista {
	int qtdNo;
	No* inicio;
};

Lista* criarLista();
void liberarLista(Lista* ptrLista);
void exibirLista(Lista* ptrLista);
bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media);
No* pesquisarDado(Lista* ptrLista, int matricula);
void maiorMedia(Lista* ptrLista);
void menorMedia(Lista* ptrLista);
void salaMedia(Lista* ptrLista);

//--------------------------------------------------------
// MAIN
//--------------------------------------------------------

int main() {

	setlocale(LC_ALL, "Portuguese");

	Lista* pLista;

	pLista = criarLista();

	int matricula;
	string nome;
	float media;
	bool resultado;

	// Inserir Ordenado

	inserirListaFim(pLista, 10, "Maria", 9.5);
	inserirListaFim(pLista, 20, "Jos�", 9.5);
	inserirListaFim(pLista, 30, "Jesus", 9.0);
	inserirListaFim(pLista, 40, "Pedro", 8.0);
	inserirListaFim(pLista, 50, "Paulo", 5.0);
	inserirListaFim(pLista, 60, "Tiago", 8.5);
	inserirListaFim(pLista, 70, "Mateus", 6.5);
	inserirListaFim(pLista, 80, "Felipe", 7.0);
	inserirListaFim(pLista, 90, "Susana", 7.5);
	inserirListaFim(pLista, 100, "Gabriela", 10.0);

	//exibirLista(pLista);

	cout << "Maior M�dia" << endl << endl;
	maiorMedia(pLista);

	cout << "Menor M�dia" << endl << endl;
	menorMedia(pLista);

	cout << "M�dia da Sala" << endl << endl;
	salaMedia(pLista);

	liberarLista(pLista);

	system("pause");
	return 0;
}

//--------------------------------------------------------
// CRIAR LISTA
//--------------------------------------------------------

Lista* criarLista() {

	Lista* ptrLista;
	ptrLista = new Lista;

	// Se a lista N�O pode ser criada

	if (ptrLista == NULL) {
		cout << "N�o foi poss�vel criar a lista!" << endl;
		return NULL;
	}

	// Como a lista est� vazia o IN�CIO aponta para NULL

	ptrLista->qtdNo = 0;
	ptrLista->inicio = NULL;

	return ptrLista;
}

//--------------------------------------------------------
 // LIBERAR LISTA
 //--------------------------------------------------------

void liberarLista(Lista* ptrLista) {

	No* ptrNoAtual;

	//Se a lista N�O foi criada

	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return;
	}

	// Exclui cada N� da lista

	while (ptrLista->inicio != NULL)
	{
		ptrNoAtual = ptrLista->inicio;
		ptrLista->inicio = ptrNoAtual->proxNo;
		delete ptrNoAtual;
	}

	delete ptrLista;
}


void exibirLista(Lista* ptrLista) {

	No* ptrNoAtual;

	//Se a lista N�O foi criada

	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return;
	}

	//Se n�o tiver nenhum N� na lista

	if (ptrLista->inicio == NULL) {
		cout << "A lista esta vazia!" << endl;
		return;
	}

	ptrNoAtual = ptrLista->inicio;

	while (ptrNoAtual != NULL) {

		cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
		cout << "Nome: " << ptrNoAtual->dados.nome << endl;
		cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl << endl;

		ptrNoAtual = ptrNoAtual->proxNo;

	}

	cout << endl;
}

bool inserirListaFim(Lista* ptrLista, int matricula, string nome, float media) {
	No* ptrNoNovo;
	No* ptrNoAtual;

	//Se a lista N�O foi criada
	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return false;
	}

	//Cria o novo n�

	ptrNoNovo = new No;

	if (ptrNoNovo == NULL) {
		cout << "Memoria insulficiente!" << endl;
		return false;
	}

	ptrNoNovo->dados.matricula = matricula;
	ptrNoNovo->dados.nome = nome;
	ptrNoNovo->dados.media = media;
	ptrNoNovo->proxNo = NULL;

	ptrNoAtual = ptrLista->inicio;

	//Se n�o houver nenhum n� na lista
	if (ptrNoAtual == NULL) {
		ptrLista->inicio = ptrNoNovo;
	}
	else {
		//Localiza o ultimo n�
		while (ptrNoAtual->proxNo != NULL) {
			ptrNoAtual = ptrNoAtual->proxNo;
		}
		ptrNoAtual->proxNo = ptrNoNovo;
	}

	//Incrementa a quantidade de Nos
	ptrLista->qtdNo++;

	return true;
}


//Pesquisar matricula
No* pesquisarDado(Lista* ptrLista, int matricula) {
	No* ptrNoAtual;

	//Se lista N�O foi criada
	if (ptrLista == NULL) {
		cout << "Alista n�o esta criada" << endl;
		return NULL;
	}

	//Se n�o tiver nenhum no na lista
	if (ptrLista->inicio == NULL) {
		cout << "A lista esta vazia!" << endl;
		return NULL;
	}

	ptrNoAtual = ptrLista->inicio;

	//Localiza o no a ser alteraldo
	while (ptrNoAtual != NULL && ptrNoAtual->dados.matricula != matricula) {
		ptrNoAtual = ptrNoAtual->proxNo;
	}

	if (ptrNoAtual == NULL) {
		cout << "Matricula " << matricula << " n�o foi encontrada" << endl;
		return NULL;
	}

	return ptrNoAtual;
}

void maiorMedia(Lista* ptrLista) {
	No* ptrNoAtual;
	float maior;

	ptrNoAtual = ptrLista->inicio;
	maior = ptrNoAtual->dados.media;

	while (ptrNoAtual != NULL) {
		if (ptrNoAtual->dados.media >= maior) {
			maior = ptrNoAtual->dados.media;
		}
		ptrNoAtual = ptrNoAtual->proxNo;
	}

	ptrNoAtual = ptrLista->inicio;
	while (ptrNoAtual != NULL) {
		if (ptrNoAtual->dados.media == maior) {
			cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
			cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl << endl;
		}
		ptrNoAtual = ptrNoAtual->proxNo;
	}

}

void menorMedia(Lista* ptrLista) {
	No* ptrNoAtual;
	float menor;

	ptrNoAtual = ptrLista->inicio;
	menor = ptrNoAtual->dados.media;

	while (ptrNoAtual != NULL) {
		if (ptrNoAtual->dados.media <= menor) {
			menor = ptrNoAtual->dados.media;
		}
		ptrNoAtual = ptrNoAtual->proxNo;
	}

	ptrNoAtual = ptrLista->inicio;
	while (ptrNoAtual != NULL) {
		if (ptrNoAtual->dados.media == menor) {
			cout << "Matr�cula: " << ptrNoAtual->dados.matricula << endl;
			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
			cout << "M�dia: " << ptrNoAtual->dados.media << endl << endl << endl;
		}
		ptrNoAtual = ptrNoAtual->proxNo;
	}

}

void salaMedia(Lista* ptrLista) {
	No* ptrNoAtual;
	float soma = 0;
	int totalAlunos = 0;

	ptrNoAtual = ptrLista->inicio;

	while (ptrNoAtual != NULL) {
		soma += ptrNoAtual->dados.media;
		totalAlunos++;
		ptrNoAtual = ptrNoAtual->proxNo;
	}

	soma = soma / totalAlunos;

	cout << "A media da classe �: " << soma << endl << endl;

}