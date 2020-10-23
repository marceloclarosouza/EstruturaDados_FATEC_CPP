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

//
//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//
//struct Dados {
//	string medicamento;
//	string p_ativo;
//	int ano_vencimento;
//	int mes_vencimento;
//	float p_venda;
//};
//
//
//struct No {
//	Dados dados; // estrutura guardada dentro da lista
//	No* proxNo; // aponta para o próximo Nó da lista
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
//bool inserirListaFim(Lista* ptrLista, string medicamento, string p_ativo, int ano_vencimento, int mes_vencimento, float p_venda);
//void exibirLista(Lista* ptrLista);
//
//void pesquisarPrincipioAtivo(Lista* ptrLista, string p_ativo);
//void maiorMenorPreco(Lista* ptrLista);
//void vencimento3meses(Lista* ptrLista, int vencimento);
//
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//	cout << fixed << setprecision(2);
//	int vencimento;
//	string principio_ativo;
//
//	Lista* pLista;
//
//	pLista = criarLista();
//
//	
//	inserirListaFim(pLista, "buscopan", "escopolamina", 2020, 5, 22.12);
//	inserirListaFim(pLista, "dorflex", "dipirona", 2020, 12, 10.0);
//	inserirListaFim(pLista, "tegretol", "carbamazepina", 2020, 11, 35.0);
//	inserirListaFim(pLista, "gelol", "salicilato", 2020, 8, 27.30);
//	inserirListaFim(pLista, "ibuprofen", "ibuprofeno", 2020, 3, 6.75);
//	inserirListaFim(pLista, "aspirina", "aas", 2020, 11, 8.75);
//	inserirListaFim(pLista, "menelat", "mirtazapina", 2020, 10, 152.30);
//	inserirListaFim(pLista, "benegripe", "paracetamol", 2020, 7, 32.45);
//	inserirListaFim(pLista, "eno", "bicarbonato", 2020, 11, 17.35);
//	inserirListaFim(pLista, "omeprazol", "omeprazol", 2020, 12, 5.32);
//
//	exibirLista(pLista);
//	cout << endl << endl;
//
//	cout << "Digite o nome do principio tivo que deseja consultar:" << endl;
//	cout << "escopolamina" << endl;
//	cout << "dipirona" << endl;
//	cout << "carbamazepina" << endl;
//	cout << "salicilato" << endl;
//	cout << "ibuprofeno" << endl;
//	cout << "aas" << endl;
//	cout << "mirtazapina" << endl;
//	cout << "paracetamol" << endl;
//	cout << "bicarbonato" << endl;
//	cout << "omeprazol " << endl<<endl;
//	cout << "Principio ativo: ";
//	cin >> principio_ativo;
//	pesquisarPrincipioAtivo(pLista, principio_ativo);
//
//	maiorMenorPreco(pLista);
//
//	cout << "Digite um numero entre 1 e 12 (referente aos meses do ano) para visualizar os medicamentos que vencerão nos próximos 3 meses:" << endl;
//	cin >> vencimento;
//
//	vencimento3meses(pLista, vencimento);
//
//	liberarLista(pLista);
//
//	system("pause");
//	return 0;
//}
//
//
//Lista* criarLista() {
//
//	Lista* ptrLista;
//	ptrLista = new Lista;
//
//	if (ptrLista == NULL) {
//		cout << "Não foi possível criar a lista!" << endl;
//		return NULL;
//	}
//
//	ptrLista->qtdNo = 0;
//	ptrLista->inicio = NULL;
//
//	return ptrLista;
//}
//
//
//void liberarLista(Lista* ptrLista) {
//
//	No* ptrNoAtual;
//
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
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
//
//void exibirLista(Lista* ptrLista) {
//
//	No* ptrNoAtual;
//
//	if (ptrLista == NULL) {
//		cout << "A lista não está criada!" << endl;
//		return;
//	}
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
//		cout << "Medicamento: " << ptrNoAtual->dados.medicamento << endl;
//		cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//		cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento<< endl;
//		cout << "Mês de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//		cout << "Preço de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}		
//}
//
//bool inserirListaFim(Lista* ptrLista, string medicamento, string p_ativo, int ano_vencimento, int mes_vencimento, float p_venda) {
//	No* ptrNoNovo;
//	No* ptrNoAtual;
//
//	if (ptrLista == NULL) {
//		cout << "Necessário criar uma lista!" << endl;
//		return false;
//	}
//
//	ptrNoNovo = new No;
//
//	if (ptrNoNovo == NULL) {
//		cout << "Memoria insulficiente!" << endl;
//		return false;
//	}
//	
//	ptrNoNovo->dados.medicamento = medicamento;
//	ptrNoNovo->dados.p_ativo = p_ativo;
//	ptrNoNovo->dados.ano_vencimento = ano_vencimento;
//	ptrNoNovo->dados.mes_vencimento = mes_vencimento;
//	ptrNoNovo->dados.p_venda = p_venda;
//	ptrNoNovo->proxNo = NULL;
//
//	ptrNoAtual = ptrLista->inicio;
//
//	
//	if (ptrNoAtual == NULL) {
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else {
//		while (ptrNoAtual->proxNo != NULL) {
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//		ptrNoAtual->proxNo = ptrNoNovo;
//	}
//
//	ptrLista->qtdNo++;
//
//	return true;
//}
//
//
//void pesquisarPrincipioAtivo(Lista* ptrLista, string p_ativo) {
//	No* ptrNoAtual;
//
//	cout << "Lista de medicamentos com o principio ativo " << p_ativo << endl << endl;
//		
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_ativo == p_ativo) {
//			cout << "Medicamento: " << ptrNoAtual->dados.medicamento << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "Mês de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Preço de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//
//void maiorMenorPreco(Lista* ptrLista) {
//	No* ptrNoAtual;
//	float maior;
//	float menor;
//
//	//maior preço
//
//	ptrNoAtual = ptrLista->inicio;
//	maior = ptrNoAtual->dados.p_venda;
//
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_venda > maior) {
//			maior = ptrNoAtual->dados.p_venda;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	cout << "O medicamento de maior preço de venda é: " << endl << endl;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_venda == maior) {
//			cout << "Medicamento: " << ptrNoAtual->dados.medicamento << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "Mês de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Preço de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	//menor preço
//	ptrNoAtual = ptrLista->inicio;
//	menor = ptrNoAtual->dados.p_venda;
//
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_venda <= menor) {
//			menor = ptrNoAtual->dados.p_venda;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	cout << "O medicamento de menor preço de venda é: " << endl << endl;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_venda == menor) {
//			cout << "Medicamento: " << ptrNoAtual->dados.medicamento << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "Mês de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Preço de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//}
//
//void vencimento3meses(Lista* ptrLista, int vencimento) {
//	No* ptrNoAtual;
//
//	cout << "Lista de medicamentos que vencerão em 3 meses a partir do mes  " << vencimento << endl << endl;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.mes_vencimento >= vencimento && ptrNoAtual->dados.mes_vencimento <= vencimento + 3) {
//			cout << "Medicamento: " << ptrNoAtual->dados.medicamento << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "Mês de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Preço de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
