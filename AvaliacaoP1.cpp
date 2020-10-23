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
#include <iomanip>

using namespace std;

// Dados sobre o ALUNO

struct Dados {
	string medicamento;
	string p_ativo;
	int ano_vencimento;
	int mes_vencimento;
	float p_venda;
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
bool inserirListaFim(Lista* ptrLista, string medicamento, string p_ativo, int ano_vencimento, int mes_vencimento, float p_venda);
void exibirLista(Lista* ptrLista);


//No* pesquisarDado(Lista* ptrLista, int matricula);
//void maiorMedia(Lista* ptrLista);
//void menorMedia(Lista* ptrLista);
//void salaMedia(Lista* ptrLista);


int main() {

	setlocale(LC_ALL, "Portuguese");
	cout << fixed << setprecision(2);

	Lista* pLista;

	pLista = criarLista();

	//string medicamento;
	//string p_ativo;
	//int ano_vencimento;
	//int mes_vencimento;
	//float p_venda;



	//bool resultado;

	// Inserir Fim
	inserirListaFim(pLista, 'buscopan', 'escopolamina', 2020, 5, 22.12);
	inserirListaFim(pLista, 'dorflex', 'dipirona', 2020, 12, 10.0);
	inserirListaFim(pLista, 'tegretol', 'carbamazepina', 2020, 11, 35.0);
	inserirListaFim(pLista, 'gelol', 'aloe vera', 2020, 8, 27.30);
	inserirListaFim(pLista, 'ibuprofen', 'ibuprofeno', 2020, 3, 6.75);
	inserirListaFim(pLista, 'aspirina', 'aas', 2020, 11, 8.75);
	inserirListaFim(pLista, 'menelat', 'mirtazapina', 2020, 10, 152.30);
	inserirListaFim(pLista, 'benegripe', 'tylenol', 2020, 7, 32.45);
	inserirListaFim(pLista, 'eno', 'bicarbonato', 2020, 11, 17.35);
	inserirListaFim(pLista, 'omeprazol', 'omeprazol', 2020, 12, 5.32);

	exibirLista(pLista);
	cout << endl << endl;

	/*cout << "Maior M�dia" << endl << endl;
	maiorMedia(pLista);

	cout << "Menor M�dia" << endl << endl;
	menorMedia(pLista);

	cout << "M�dia da Sala" << endl << endl;
	salaMedia(pLista);*/

	liberarLista(pLista);

	system("pause");
	return 0;
}


Lista* criarLista() {

	Lista* ptrLista;
	ptrLista = new Lista;

	if (ptrLista == NULL) {
		cout << "N�o foi poss�vel criar a lista!" << endl;
		return NULL;
	}

	ptrLista->qtdNo = 0;
	ptrLista->inicio = NULL;

	return ptrLista;
}


void liberarLista(Lista* ptrLista) {

	No* ptrNoAtual;

	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return;
	}

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

	if (ptrLista == NULL) {
		cout << "A lista n�o est� criada!" << endl;
		return;
	}

	if (ptrLista->inicio == NULL) {
		cout << "A lista esta vazia!" << endl;
		return;
	}

	ptrNoAtual = ptrLista->inicio;

	while (ptrNoAtual != NULL) {

		cout << "Medicamento: " << ptrNoAtual->dados.medicamento << endl;
		cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
		cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento<< endl;
		cout << "M�s de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
		cout << "Pre�o de venda " << ptrNoAtual->dados.p_venda << endl << endl << endl;
		
		ptrNoAtual = ptrNoAtual->proxNo;

	}
		
}

bool inserirListaFim(Lista* ptrLista, string medicamento, string p_ativo, int ano_vencimento, int mes_vencimento, float p_venda) {
	No* ptrNoNovo;
	No* ptrNoAtual;

	//Se a lista N�O foi criada
	if (ptrLista == NULL) {
		cout << "Necess�rio criar uma lista!" << endl;
		return false;
	}

	//Criar novo n�

	ptrNoNovo = new No;

	if (ptrNoNovo == NULL) {
		cout << "Memoria insulficiente!" << endl;
		return false;
	}

	
	ptrNoNovo->dados.medicamento = medicamento;
	ptrNoNovo->dados.p_ativo = p_ativo;
	ptrNoNovo->dados.ano_vencimento = ano_vencimento;
	ptrNoNovo->dados.mes_vencimento = mes_vencimento;
	ptrNoNovo->dados.p_venda = p_venda;
	ptrNoNovo->proxNo = NULL;

	ptrNoAtual = ptrLista->inicio;

	//Se n�o houver n� na lista
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