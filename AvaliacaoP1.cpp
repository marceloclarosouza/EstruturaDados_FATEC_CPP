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


//#include <iostream>
//#include <locale.h>
//#include <stdlib.h>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//
//struct Dados {
//	int codigo;
//	string nomeMedicamento;
//	string laboratorio;
//	string p_ativo;
//	int ano_vencimento;
//	int mes_vencimento;
//	float p_compra;
//	float p_venda;	
//};
//
//
//struct No {
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
//bool inserirListaFim(Lista* ptrLista, int codigo, string nomeMedicamento, string laboratorio, string p_ativo, int ano_vencimento, int mes_vencimento, float p_compra, float p_venda);
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
//	inserirListaFim(pLista, 10, "buscopan", "boehringer", "escopolamina", 2020, 5, 13.65, 22.12);
//	inserirListaFim(pLista, 20, "dorflex", "sanofi", "dipirona", 2020, 12, 5.67, 10.0);
//	inserirListaFim(pLista, 30, "tegretol", "novartes", "carbamazepina", 2020, 11, 23.91, 35.0);
//	inserirListaFim(pLista, 40, "gelol", "services", "salicilato", 2020, 8, 14.16, 27.30);
//	inserirListaFim(pLista, 50, "ibuprofen", "fecofar", "ibuprofeno", 2020, 3, 2.12, 6.75);
//	inserirListaFim(pLista, 60, "aspirina", "bayer", "aas", 2020, 11, 4.23, 8.75);
//	inserirListaFim(pLista, 70, "menelat", "philipines", "mirtazapina", 2020, 10, 120.43, 152.30);
//	inserirListaFim(pLista, 80, "benegripe", "hypera pharma","paracetamol", 2020, 7, 27.27, 32.45);
//	inserirListaFim(pLista, 90, "eno", "gsk", "bicarbonato", 2020, 11, 12.67, 17.35);
//	inserirListaFim(pLista, 100, "omeprazol", "ems", "omeprazol", 2020, 12, 2.34, 5.32);
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
//	cout << "Digite um numero entre 1 e 12 (referente aos meses do ano) para visualizar os medicamentos que vencer�o nos pr�ximos 3 meses:" << endl;
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
//		cout << "N�o foi poss�vel criar a lista!" << endl;
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
//		cout << "A lista n�o est� criada!" << endl;
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
//		cout << "A lista n�o est� criada!" << endl;
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
//		cout << "Codigo: " << ptrNoAtual->dados.codigo << endl;
//		cout << "Medicamento: " << ptrNoAtual->dados.nomeMedicamento << endl;
//		cout << "Laboratorio: " << ptrNoAtual->dados.laboratorio << endl;
//		cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//		cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento<< endl;
//		cout << "M�s de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//		cout << "Pre�o de compra: " << ptrNoAtual->dados.p_compra << endl;
//		cout << "Pre�o de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}		
//}
//
//bool inserirListaFim(Lista* ptrLista, int codigo, string nomeMedicamento, string laboratorio, string p_ativo, int ano_vencimento, int mes_vencimento, float p_compra, float p_venda){
//	No* ptrNoNovo;
//	No* ptrNoAtual;
//
//	if (ptrLista == NULL) {
//		cout << "Necess�rio criar uma lista!" << endl;
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
//	ptrNoNovo->dados.codigo = codigo;
//	ptrNoNovo->dados.nomeMedicamento = nomeMedicamento;
//	ptrNoNovo->dados.laboratorio = laboratorio;
//	ptrNoNovo->dados.p_ativo = p_ativo;
//	ptrNoNovo->dados.ano_vencimento = ano_vencimento;
//	ptrNoNovo->dados.mes_vencimento = mes_vencimento;
//	ptrNoNovo->dados.p_compra = p_compra;
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
//	int flag = 0;
//
//	cout << "Lista de medicamentos com o principio ativo " << p_ativo << endl << endl;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_ativo == p_ativo) {
//			cout << "Codigo: " << ptrNoAtual->dados.codigo << endl;
//			cout << "Medicamento: " << ptrNoAtual->dados.nomeMedicamento << endl;
//			cout << "Laboratorio: " << ptrNoAtual->dados.laboratorio << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "M�s de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Pre�o de compra: " << ptrNoAtual->dados.p_compra << endl;
//			cout << "Pre�o de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//			flag = 1;
//		}						
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	if (flag == 0) {
//		cout << "Medicamento inexistente no sistema!" << endl << endl;
//	}
//		
//}
//
//
//void maiorMenorPreco(Lista* ptrLista) {
//	No* ptrNoAtual;
//	float maior;
//	float menor;
//
//	//maior pre�o
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
//	cout << "O medicamento de maior pre�o de venda �: " << endl << endl;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_venda == maior) {
//			cout << "Codigo: " << ptrNoAtual->dados.codigo << endl;
//			cout << "Medicamento: " << ptrNoAtual->dados.nomeMedicamento << endl;
//			cout << "Laboratorio: " << ptrNoAtual->dados.laboratorio << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "M�s de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Pre�o de compra: " << ptrNoAtual->dados.p_compra << endl;
//			cout << "Pre�o de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	//menor pre�o
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
//	cout << "O medicamento de menor pre�o de venda �: " << endl << endl;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.p_venda == menor) {
//			cout << "Codigo: " << ptrNoAtual->dados.codigo << endl;
//			cout << "Medicamento: " << ptrNoAtual->dados.nomeMedicamento << endl;
//			cout << "Laboratorio: " << ptrNoAtual->dados.laboratorio << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "M�s de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Pre�o de compra: " << ptrNoAtual->dados.p_compra << endl;
//			cout << "Pre�o de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//}
//
//void vencimento3meses(Lista* ptrLista, int mes_vencimento) {
//	No* ptrNoAtual;
//	int flag = 0;
//
//	cout << "Lista de medicamentos que vencer�o em 3 meses a partir do mes  " << mes_vencimento << endl << endl;
//
//	ptrNoAtual = ptrLista->inicio;
//	while (ptrNoAtual != NULL) {
//		if (ptrNoAtual->dados.mes_vencimento >= mes_vencimento && ptrNoAtual->dados.mes_vencimento <= mes_vencimento + 3) {
//			cout << "Codigo: " << ptrNoAtual->dados.codigo << endl;
//			cout << "Medicamento: " << ptrNoAtual->dados.nomeMedicamento << endl;
//			cout << "Laboratorio: " << ptrNoAtual->dados.laboratorio << endl;
//			cout << "Principio ativo: " << ptrNoAtual->dados.p_ativo << endl;
//			cout << "Ano de vencimento: " << ptrNoAtual->dados.ano_vencimento << endl;
//			cout << "M�s de vencimento: " << ptrNoAtual->dados.mes_vencimento << endl;
//			cout << "Pre�o de compra: " << ptrNoAtual->dados.p_compra << endl;
//			cout << "Pre�o de venda: " << ptrNoAtual->dados.p_venda << endl << endl << endl;
//			flag = 1;
//		}
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//	if (flag == 0) {
//		cout << "N�o h� medicamentos pr�ximos a data de vencimento" << endl << endl;
//	}
//}


/*Parte 02
Crie duas listas chamadas medControlado e medGenerico.Insira, programaticamente, 5
medicamentos em cada lista.
Crie uma fun��o que concatene as listas medControlado e medGenerico em uma terceira lista
chamada medEmEstoque e exiba seus dados.
Crie uma fun��o que soma todos os pre�os de compra e venda dos medicamentos da lista
medEmEstoque e exiba os resultados.*/

//#include <iostream>
//#include <locale.h>
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct Dados {
//	string medicamento;
//	float p_compra;
//	float p_venda;
//};
//
//struct No {
//	Dados dados;
//	No* proxNo;
//};
//
//struct Lista {
//	int qtdNo;
//	No* inicio;
//};
//
//Lista* criarLista();
//void liberarLista(Lista * ptrLista);
//void exibirLista(Lista * ptrLista);
//bool inserirListaOrdenada(Lista * ptrLista, string medicamento, float p_compra, float p_venda);
//void concatenarLista(Lista* medControlado, Lista* medGenerico, Lista* medEmEstoque);
//void somarpreco(Lista* medEmEstoque);
//
//
//int main() {
//
//	setlocale(LC_ALL, "Portuguese");
//	cout << fixed << setprecision(2);
//
//	Lista* medControlado;
//	Lista* medGenerico;
//	Lista* medEmEstoque;
//
//	medControlado = criarLista();
//	medGenerico = criarLista();
//	medEmEstoque = criarLista();
//
//	inserirListaOrdenada(medControlado, "myrtazapina", 100.40, 160.35);
//	inserirListaOrdenada(medControlado, "alprazolan", 90.23, 130.40);
//	inserirListaOrdenada(medControlado, "reconter", 150.14, 213.69);
//	inserirListaOrdenada(medControlado, "gardenal", 35.17, 60.36);
//	inserirListaOrdenada(medControlado, "vicodin", 70.45, 150.25);
//	cout << "------------------------" << endl;
//	cout << "Medicamantos controlados" << endl;
//	cout << "------------------------" << endl << endl;
//	exibirLista(medControlado);
//	
//	
//	inserirListaOrdenada(medGenerico, "paracetamol", 15.12, 30.60);
//	inserirListaOrdenada(medGenerico, "aas", 5.13, 10.98);
//	inserirListaOrdenada(medGenerico, "dipirona", 4.26, 7.55);
//	inserirListaOrdenada(medGenerico, "ibuprofeno", 11.83, 22.56);
//	inserirListaOrdenada(medGenerico, "omeprazol", 13.67, 35.14);
//	cout << "-----------------------" << endl;
//	cout << "Medicamantos gen�ricos" << endl;
//	cout << "-----------------------" << endl<<endl;
//	exibirLista(medGenerico);
//	
//
//	concatenarLista(medControlado, medGenerico, medEmEstoque);
//	cout << "-----------------------" << endl;
//	cout << "Medicamantos em estoque" << endl;
//	cout << "-----------------------" << endl << endl;
//	exibirLista(medEmEstoque);
//	cout << endl;
//
//	somarpreco(medEmEstoque);
//	cout << endl;
//
//	liberarLista(medControlado);
//	liberarLista(medGenerico);
//	liberarLista(medEmEstoque);
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
//		cout << "N�o foi poss�vel criar a lista!" << endl;
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
//void liberarLista(Lista * ptrLista) {
//
//	No* ptrNoAtual;
//
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
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
//void exibirLista(Lista * ptrLista) {
//
//	No* ptrNoAtual;
//
//	if (ptrLista == NULL) {
//		cout << "A lista n�o est� criada!" << endl;
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
//		cout << "Pre�o de compra: " << ptrNoAtual->dados.p_compra << endl;
//		cout << "Pre�o de venda: " << ptrNoAtual->dados.p_venda << endl << endl;
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}	
//}
//
//
//bool inserirListaOrdenada(Lista* ptrLista, string medicamento, float p_compra, float p_venda) {
//	No* ptrNoNovo;
//	No* ptrNoAnterior;
//	No* ptrNoAtual;
//
//	if (ptrLista == NULL) {
//		cout << "Lista n�o foi criada" << endl;
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
//	ptrNoNovo->dados.p_compra = p_compra;
//	ptrNoNovo->dados.p_venda = p_venda;
//	ptrNoNovo->proxNo = NULL;
//
//	if (ptrLista->inicio == NULL) {
//		ptrLista->inicio = ptrNoNovo;
//	}
//	else
//	{
//		ptrNoAnterior = NULL;
//		ptrNoAtual = ptrLista->inicio;
//
//		while (ptrNoAtual != NULL && ptrNoAtual->dados.medicamento < medicamento) {
//			ptrNoAnterior = ptrNoAtual;
//			ptrNoAtual = ptrNoAtual->proxNo;
//		}
//
//		if (ptrNoAtual == ptrLista->inicio) {
//			ptrNoNovo->proxNo = ptrLista->inicio;
//			ptrLista->inicio = ptrNoNovo;
//		}
//		else 
//		{
//			ptrNoNovo->proxNo = ptrNoAtual;
//			ptrNoAnterior->proxNo = ptrNoNovo;
//		}
//	}
//
//	ptrLista->qtdNo++;
//
//	return true;
//}
//
//
//void concatenarLista(Lista* medControlado, Lista* medGenerico, Lista* medEmEstoque) {
//	No* ptrNoAtual;
//
//	string medicamento;
//	float p_compra;
//	float p_venda;
//
//	ptrNoAtual = medControlado->inicio;
//
//	while (ptrNoAtual != NULL) {
//
//		medicamento = ptrNoAtual->dados.medicamento;
//		p_compra = ptrNoAtual->dados.p_compra;
//		p_venda = ptrNoAtual->dados.p_venda;
//
//		inserirListaOrdenada(medEmEstoque, medicamento, p_compra, p_venda);
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//
//	ptrNoAtual = medGenerico->inicio;
//
//	while (ptrNoAtual != NULL) {
//
//		medicamento = ptrNoAtual->dados.medicamento;
//		p_compra = ptrNoAtual->dados.p_compra;
//		p_venda = ptrNoAtual->dados.p_venda;
//
//		inserirListaOrdenada(medEmEstoque, medicamento, p_compra, p_venda);
//
//		ptrNoAtual = ptrNoAtual->proxNo;
//	}
//}
//
//
//void somarpreco(Lista* medEmEstoque) {
//	No* ptrNoAtual;
//	float somacompra = 0;
//	float somavenda = 0;
//	
//	ptrNoAtual = medEmEstoque->inicio;
//
//	while (ptrNoAtual != NULL) {
//		somacompra += ptrNoAtual->dados.p_compra;
//		somavenda += ptrNoAtual->dados.p_venda;
//
//		ptrNoAtual = ptrNoAtual->proxNo;		
//	}
//	cout << "-------------------------------------------------------" << endl;
//	cout << "A Soma dos pre�os de compra dos medicamentos �: " << somacompra << endl;
//	cout << "A Soma dos pre�os de venda dos medicamentos �: " << somavenda << endl;
//	cout << "-------------------------------------------------------" << endl << endl;
//}


