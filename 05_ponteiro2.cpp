//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int x;
//	int* px;
//
//	x = 100;
//	px = &x;
//
//	cout << "Endereço de x " << &x << endl;
//	cout << "Valor de *px " << *px << endl;
//	cout << "Conteudo de px: " << px << endl;
//
//	px++;//altera o endereco de memória. O valor varia de acordo com o tipo char, int, float, long, 
//	cout << "Conteudo de px: " << px << endl;
//	cout << "Valor de *px " << *px << endl;
//
//	px++;
//	cout << "Conteudo de px: " << px << endl;
//	cout << "Valor de *px " << *px << endl;
//
//	px--;
//	cout << "Conteudo de px: " << px << endl;
//	cout << "Valor de *px " << *px << endl;
//
//
//	system("pause");
//	return 0;
//}

//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	
//	int vetor[5] = { 10, 20, 30, 40, 50 };
//	int* pv;
//	int ind;
//
//	pv = vetor;
//	cout << "Endereço do vetor: " << vetor<< endl;//vetor na;o usa & para passar o endereco
//	cout << "Conteudo de pv : " << pv << endl<<endl<<endl;
//
//	cout << "Valor1: " << *pv << endl;
//	//pv++;//vai par o próximo valor do vetor
//	//cout << "Valor2: " << *pv << endl << endl << endl;
//
//
//	//NOTACAO DE PONTEIRO//
//
//	for (ind = 0; ind < 5; ind++) {
//		cout << "valor: " << *(pv + ind) << endl;//trava o vetor na primeira posicao e corre os demais valores sem alterar o valor de pv
//	}//usar este!!!
//
//	cout << endl << endl;		
//	
//	//////for (ind = 0; ind < 5; ind++) {//correr o vetor pelos pponteiros alterando o valor de pv
//	//////	cout << "Valor: " << *pv << endl;
//	//////	pv++;
//	//////}//nao usar!!!
//
//
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int vetor[3];
//	int* pv;
//	int ind;
//
//	pv = vetor;
//	cout << "Digite o 1° valor: " << endl;
//	cin >> *(pv + 0);
//	cout << "Digite o 2° valor: " << endl;
//	cin >> *(pv + 1);
//	cout << "Digite o 3° valor: " << endl;
//	cin >> *(pv + 2);
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << *(pv + ind) << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//exercicio1: faca uma funcao que tenha um ponteiro como paramentro
//chame a funcao passando um vetor de 5 posicoes
//em seguida, imprima os valores recebidos pwlo ponteiro

//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//void imprimirDados(int* pv);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int vetor[5] = {10, 20,30,40,50};
//	
//	imprimirDados(vetor);
//	
//	system("pause");
//	return 0;
//}
//void imprimirDados(int* pv) {
//	int ind;
//
//	for (ind = 0; ind < 5; ind++) {
//		cout << "Valor: " << *(pv + ind) << endl;
//	}
//
//}
//
//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//struct Pessoa {
//	string nome;
//	int idade;
//	float salario;
//};
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	Pessoa aluno;
//	Pessoa* pA;
//
//	pA = &aluno;
//
//	cout << "Digite o nome: ";
//	cin >> pA->nome;
//
//	cout << "Digite a idade: ";
//	cin >> pA->idade;
//
//	cout << "Digite o salario: ";
//	cin >> pA->salario;
//
//	cout << "Nome: " << pA->nome << endl;
//	cout << "Idade: " << pA->idade << endl;
//	cout << "Salario: " << pA->salario << endl;
//
//
//	system("pause");
//	return 0;
//}

////Exercicio2: crie um programa que tenha uma estrutura para guardar
////dados de veiculos: modelo, ano de fabricacao e numero de portas
////crie uma variavel desta estrutura e passe-a para uma funcao
////a funcao deve receber a estrutura por um ponteiro
////utilizando cin, a funcao deverá preencher os valores da estrutura
////após a funcao, imprima os dados fornecidos pelo ususario
//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct veiculo {
//	string modelo;
//	int ano_f;
//	int n_portas;
//};
//
//void receber_dados(veiculo *vei);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	veiculo vei;
//	
//	receber_dados(&vei);//passando a struct
//	cout << "Modelo: " << vei.modelo << endl;
//	cout << "Ano : " << vei.ano_f << endl;
//	cout << "N POrtas " << vei.n_portas << endl;
//
//	system("pause");
//	return 0;
//}
//void receber_dados(veiculo *vei) {//recebendo a struct por ponteiro
//	cout << "Digite o modelo: "<<endl;
//	cin >> vei->modelo;
//
//	cout << "Digite o ano: "<<endl;
//	cin >> vei->ano_f;
//
//	cout << "Digite o n_portaa: "<<endl;
//	cin >> vei->n_portas;
//}
//
