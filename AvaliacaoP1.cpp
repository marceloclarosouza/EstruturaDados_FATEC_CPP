/*Parte 01
Insira, via programação, 10 medicamentos a uma lista.O ano de vencimento dos produtos deve
ser 2020 e os meses deverão variar entre janeiro e dezembro.
Em seguida, crie 3 funções, todas devem receber como parâmetro a lista.
A primeira deve receber, também, o nome do princípio ativo, encontrar e imprimir todos os
medicamentos que tenham o princípio ativo informado.
A segunda deve encontrar e imprimir o medicamento que tenha o preço de venda mais barato e o
mais caro da lista.
A terceira deve receber, a lista, o mês e o ano de vencimento do produto.Deverá ser listado todos
os medicamentos que terão a data de validade vencida nos próximos 3 meses a partir da data
informada na função.*/


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

// Estrutura do Nó

struct No {
	Dados dados; // estrutura guardada dentro da lista
	No* proxNo; // aponta para o próximo Nó da lista
};

// Nó início da lista

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

	/*cout << "Maior Média" << endl << endl;
	maiorMedia(pLista);

	cout << "Menor Média" << endl << endl;
	menorMedia(pLista);

	cout << "Média da Sala" << endl << endl;
	salaMedia(pLista);*/

	liberarLista(pLista);

	system("pause");
	return 0;
}


Lista* criarLista() {

	Lista* ptrLista;
	ptrLista = new Lista;

	if (ptrLista == NULL) {
		cout << "Não foi possível criar a lista!" << endl;
		return NULL;
	}

	ptrLista->qtdNo = 0;
	ptrLista->inicio = NULL;

	return ptrLista;
}


void liberarLista(Lista* ptrLista) {

	No* ptrNoAtual;

	if (ptrLista == NULL) {
		cout << "A lista não está criada!" << endl;
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
		cout << "A lista não está criada!" << endl;
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
		cout << "Mês de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
		cout << "Preço de venda " << ptrNoAtual->dados.p_venda << endl << endl << endl;
		
		ptrNoAtual = ptrNoAtual->proxNo;

	}
		
}

bool inserirListaFim(Lista* ptrLista, string medicamento, string p_ativo, int ano_vencimento, int mes_vencimento, float p_venda) {
	No* ptrNoNovo;
	No* ptrNoAtual;

	//Se a lista NÃO foi criada
	if (ptrLista == NULL) {
		cout << "Necessário criar uma lista!" << endl;
		return false;
	}

	//Criar novo nó

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

	//Se não houver nó na lista
	if (ptrNoAtual == NULL) {
		ptrLista->inicio = ptrNoNovo;
	}
	else {
		//Localiza o ultimo nó
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
//	//Se lista NÃO foi criada
//	if (ptrLista == NULL) {
//		cout << "Alista não esta criada" << endl;
//		return NULL;
//	}
//
//	//Se não tiver nenhum no na lista
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
//		cout << "Matricula " << matricula << " não foi encontrada" << endl;
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
//			cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//			cout << "Média: " << ptrNoAtual->dados.media << endl << endl << endl;
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
//			cout << "Matrícula: " << ptrNoAtual->dados.matricula << endl;
//			cout << "Nome: " << ptrNoAtual->dados.nome << endl;
//			cout << "Média: " << ptrNoAtual->dados.media << endl << endl << endl;
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
//	cout << "A media da classe é: " << soma << endl << endl;
//
//}