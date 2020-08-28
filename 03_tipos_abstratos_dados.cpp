/*#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;


struct Pessoa {
	string nome;
	int idade;
	float salario;
};

void exibir_dados(Pessoa aluno);

int main() {
	setlocale(LC_ALL, "Portuguese");
	Pessoa aluno;

	//aluno.nome = "Maria José";
	//aluno.idade = 25;
	//aluno.salario = 3000.00;

	cout << "Nome: ";
	getline(cin, aluno.nome);

	cout << "Idade: ";
	cin >> aluno.idade;

	cout << "Salario: ";
	cin >> aluno.salario;

	system("cls");
	
	exibir_dados(aluno);

	system("pause");
	return 0;
}
void exibir_dados(Pessoa aluno) {
	cout << "Nome: " << aluno.nome << endl;
	cout << "Idade: " << aluno.idade << endl;
	cout << "Salario: " << aluno.salario << endl;
}*/

//crie um programa que cadastre veiculoscom struct: modelo, ano de fabricacao , numero de portas


/*#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;
struct Carros {
	string modelo;
	int ano;
	int portas;
};

void tipo_carro(Carros car);

int main() {
	setlocale(LC_ALL, "Portuguese");

	Carros car;

	cout << "Modelo do carro: " << endl;
	getline(cin, car.modelo);

	cout << "Ano de fabricacao: " << endl;
	cin >> car.ano;

	cout << "N portas" << endl;
	cin >> car.portas;

	system("cls");

	tipo_carro(car);
	

	system("pause");
	return 0;
}

void tipo_carro(Carros car) {

	cout << "Modelo: " << car.modelo << endl;
	cout << "Ano Fab: " << car.ano << endl;
	cout << "POrtas: " << car.portas << endl;
}


//implemente conta bancaria : codigo cliente, nome numero da conta e saldo;
//com as funcoes obterDados e imprimir dados


#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;



struct Cliente {
	int codigo;
	int conta;
	string nome;
	int saldo;
};

Cliente obter_dados();
void imprimir_dados(Cliente cliente);


int main() {
	setlocale(LC_ALL, "Portuguese");
	Cliente cliente;

	cliente = obter_dados();
	imprimir_dados(cliente);


	system("pause");
	return 0;
}

Cliente obter_dados() {
	Cliente cliente;

	cout << "Nome do cliente" << endl;
	getline(cin, cliente.nome);

	cout << "Codigo" << endl;
	cin >> cliente.codigo;

	cout << "Conta" << endl;
	cin >> cliente.conta;

	cout << "Saldo" << endl;
	cin >> cliente.saldo;

	return cliente;
}

void imprimir_dados(Cliente cliente) {
	cout << "NOme: " << cliente.nome << endl;
	cout << "Codigo: " << cliente.codigo << endl;
	cout << "Conta: " << cliente.conta << endl;
	cout << "Saldo: " << cliente.saldo << endl;
}
*/
