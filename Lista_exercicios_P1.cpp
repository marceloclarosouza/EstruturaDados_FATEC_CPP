/*1) Faça um programa que aloque memória para um ponteiro do tipo inteiro a atribua o valor 100
ao mesmo.Em seguida exiba seu endereço, conteúdo e valor apontado.*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int* ptr;
//	ptr = new int;
//	*ptr = 100;
//		
//	cout << "Endereço de ptr:" << &ptr << endl;
//	cout << "Conteudo: " << ptr << endl;
//	cout << "Valor de ptr: " << *ptr << endl;
//
//	delete ptr;
//	
//	system("pause");
//	return 0;
//}



/*2) Faça um programa aloque dois ponteiros ptrX e ptrY e atribua valores a eles.Em seguida, crie
as seguintes funções :
2.1) Função que some os valores dos ponteiros e retorne o resultado.Após a função, exiba o
resultado.
2.2) Função que verifique e retorne o maior valor entre os ponteiros.Após a função, exiba o
resultado.
2.3) Função que troque os conteúdos de dois ponteiros.O programa deverá exibir os valores dos
ponteiros antes e depois da chamada da função.
2.4) Função que solicite na tela que o usuário digite novos valores para ptrX e ptrY(utilize cin).
Após a função, exiba os novos valores dos ponteiros.*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//void soma_ponteiros(int* ptrX, int* ptrY);
//void maior_ponteiro(int* ptrX, int* ptrY);
//void inverte_ponteiros(int* ptrX, int* ptrY);
//void novos_valores(int* ptrX, int* ptrY);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int* ptrX;
//	int* ptrY;
//
//	ptrX = new int;
//	ptrY = new int;
//
//	*ptrX = 200;
//	*ptrY = 100;
//
//	soma_ponteiros(ptrX, ptrY);
//	maior_ponteiro(ptrX, ptrY);
//	inverte_ponteiros(ptrX, ptrY);
//	novos_valores(ptrX, ptrY);
//
//		
//	delete ptrX;
//	delete ptrY;
//	system("pause");
//	return 0;
//}
//
//void soma_ponteiros(int* ptrX, int* ptrY) {
//	int* res;
//	res = new int;
//
//	*res = *ptrX + *ptrY;
//	cout << "A soma dos ponteiros ptrX e ptrY e: "<< *res << endl;
//
//	delete res;
//}
//
//void maior_ponteiro(int* ptrX, int* ptrY) {
//	if (*ptrX > * ptrY)
//		cout << "ptrX é maior que ptrY: ptrX = " << *ptrX << endl;
//	else{
//		if (*ptrY > *ptrX)
//			cout<< "ptrY é maior que ptrX: ptrY = " << *ptrY << endl;
//		else {
//			cout << "*ptrX e *ptrY são iguais" << endl;
//		}
//	}
//}
//
//void inverte_ponteiros(int* ptrX, int* ptrY) {
//
//	cout << "ptrX Inicial: " << *ptrX << endl << "ptrY Inicial: " << *ptrY << endl;
//	
//	int aux;
//
//	aux = *ptrX;
//	*ptrX = *ptrY;
//	*ptrY = aux;
//
//	cout << "ptrX Invertido: " << *ptrX << endl << "ptrY Invertido: " << *ptrY << endl;
//	
//}
//
//void novos_valores(int* ptrX, int* ptrY) {
//	cout << "Digite um novo valor para *ptrX" << endl;
//	cin >> *ptrX;
//	cout << "Digite um novo valor para *ptrY" << endl;
//	cin >> *ptrY;
//
//	cout << "Novo valor de ptrX: " << *ptrX << endl;
//	cout << "Novo valor de ptrY: " << *ptrY << endl;
//}



/*3) Faça um programa que aloque um ponteiro para armazenar 3 valores inteiros.Em seguida,
atribua os valores ao ponteiro e exiba - os na tela.*/
//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
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

/*4) Faça um programa que aloque um ponteiro para armazenar 3 valores inteiros.Passe o
ponteiro para uma função que solicitará ao usuário que digite(cin) os valores correspondentes.
Após a função, exiba os valores do ponteiro*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//void armazena_valores(int* ptr);
//void visualiza_valores(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//		
//	int* ptr;
//	ptr = new int[3];
//
//	
//	armazena_valores(ptr);
//	visualiza_valores(ptr);
//
//	delete ptr;
//
//	system("pause");
//	return 0;
//}
//
//
//void armazena_valores(int* ptr) {
//	int ind;	
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << "Digite o "<<ind+1<<" valor:"<< endl;
//		cin >> *(ptr + ind);
//	}
//
//}
//
//void visualiza_valores(int* ptr) {
//	int ind;
//
//	for (ind = 0; ind < 3; ind++) {
//		cout << *(ptr + ind) << endl;
//	}
//
//}

/*5) Faça um programa que aloque um ponteiro para armazenar 5 valores inteiros.Atribua valores
ao ponteiro.Em seguida crie as seguintes funções.
5.1) Função que retorne a some todos os valores.Após a função, exiba o resultado.
5.2) Função que retorne o menor valor.Após a função, exiba o resultado.
5.3) Função que retorne o maior valor.Após a função, exiba o resultado.
5.4) Função que retorne a média valor.Após a função, exiba o resultado.*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//void armazena_valores(int* ptr);
//void soma(int* ptr);
//void menor(int* ptr);
//void maior(int* ptr);
//void media(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//		
//	int* ptr;
//	ptr = new int[5];
//
//	
//	armazena_valores(ptr);
//	soma(ptr);
//	menor(ptr);
//	maior(ptr);
//	media(ptr);
//
//	delete ptr;
//
//	system("pause");
//	return 0;
//}
//
//
//void armazena_valores(int* ptr) {
//	int ind;	
//
//	for (ind = 0; ind < 5; ind++) {
//		cout << "Digite o "<<ind+1<<" valor:"<< endl;
//		cin >> *(ptr + ind);
//	}
//
//}
//
//
//void soma(int* ptr) {
//	int ind;
//	int* somar;
//	somar = new int;
//	*somar = 0;
//
//	for (ind = 0; ind < 5; ind++) {
//		*somar = *somar +  *(ptr + ind);
//	}
//
//	cout << "A soma dos numeros é: " << *somar << endl;
//
//	delete somar;
//}
//
//void menor(int* ptr) {
//
//	int ind;
//	int* menor = new int;
//	*menor = 10000;
//
//	for (ind = 0; ind < 5; ind++) {
//		if (*(ptr + ind) < *menor) {
//			*menor = *(ptr + ind);
//		}
//	}
//	cout << "O menor número é: " << *menor << endl;
//
//	delete menor;
//}
//
//void maior(int* ptr) {
//
//	int ind;
//	int* maior = new int;
//	*maior = 0;
//
//	for (ind = 0; ind < 5; ind++) {
//		if (*(ptr + ind) > *maior) {
//			*maior= *(ptr + ind);
//		}
//	}
//	cout << "O maior numero é: " << *maior << endl;
//
//	delete maior;
//}
//void media(int* ptr) {
//
//	int ind;
//	int* somar;
//	float* media;
//
//	somar = new int;
//	*somar = 0;
//
//	media = new float;
//
//	for (ind = 0; ind < 5; ind++) {
//		*somar = *somar + *(ptr + ind);
//	}
//
//	*media = *somar / 5;
//
//	cout << "A media dos numeros é: " << *media<< endl;
//
//	delete somar;
//	delete media;
//}

/*6) Faça um programa que aloque um ponteiro para armazenar 10 valores inteiros.Atribua valores
ao ponteiro.Em seguida crie as seguintes funções.
6.1) Função que retorne a soma dos valores entre as posições de 3 a 9. Após a função, exiba o
resultado.
6.2) Função que retorne a subtração dos valores das posições 2 e 5. Após a função, exiba o
resultado.
6.3) Função que retorne a multiplicação dos valores das posições 1 e 10. Após a função, exiba o
resultado.
6.4) Função que retorne a divisão dos valores das posições 4 e 7. Após a função, exiba o
resultado.
6.5) Função que retorne verdadeiro ou falso se o valor da posição 6 é múltiplo de 5. Após a
função, exiba o resultado.*/


//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//void armazena_valores(int* ptr);
//void soma(int* ptr);
//void subtrai(int* ptr);
//void multiplica(int* ptr);
//void divide(int* ptr);
//bool posicao(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//			
//	int* ptr;
//	ptr = new int[10];
//
//	
//	armazena_valores(ptr);
//	soma(ptr);//ok
//	subtrai(ptr);
//	multiplica(ptr);
//	divide(ptr);
//	
//	if (posicao(ptr) == true)
//		cout << "O numero da posição 6 é multiplo de 5" << endl;
//	else {
//		cout <<"O numero da posição 6 não é multiplo de 5" << endl;
//	}
//
//	delete ptr;
//
//	system("pause");
//	return 0;
//}
//
//
//void armazena_valores(int* ptr) {
//	int ind;	
//
//	for (ind = 0; ind < 10; ind++) {
//		cout << "Digite o "<<ind+1<<" valor:"<< endl;
//		cin >> *(ptr + ind);
//	}
//}
//
//
//void soma(int* ptr) {
//	int ind;
//	int* somar;
//	somar = new int;
//	*somar = 0;
//
//	for (ind = 0; ind < 10; ind++) {
//		if (ind > 2 and ind < 8) {///entre as POSIÇOES 3 e 9, p1 = 0
//			*somar = *somar + *(ptr + ind);
//		}		
//	}
//
//	cout << "A soma dos numeros é: " << *somar << endl;
//
//	delete somar;
//}
//
//
//void subtrai(int* ptr) {
//	int ind = 0;
//	int* subtrair;
//	
//	subtrair = new int;
//	*subtrair = 0;
//
//	int aux1, aux2;
//	
//
//	for (ind = 0; ind < 10; ind++) {
//		if (ind == 1)
//			aux1 = *(ptr + ind);//posicao 2
//		else {
//			if (ind == 4)
//				aux2 = *(ptr + ind);//posicao 5
//		}	
//	}
//
//	*subtrair = aux1 - aux2;
//	cout << "A subtração dos numeros é: " << *subtrair << endl;
//
//	delete subtrair;
//}
//
//
//void multiplica(int* ptr) {
//	int ind = 0;
//	int* multiplicar;
//	
//	multiplicar = new int;
//	*multiplicar = 0;
//	int aux1, aux2;
//	
//
//	for (ind = 0; ind < 10; ind++) {
//		if (ind == 0)
//			aux1 = *(ptr + ind);//posicao 1
//		else {
//			if (ind == 9)
//				aux2 = *(ptr + ind);//posicao 10
//		}
//	}
//
//	*multiplicar = aux1 * aux2;
//	cout << "A multiplicação dos numeros é: " << *multiplicar << endl;
//
//	delete multiplicar;	
//}
//
//
//void divide(int* ptr) {
//	int ind = 0;
//	float* dividir;
//	float aux1, aux2;
//
//	dividir = new float;
//	*dividir = 0;
//
//
//	for (ind = 0; ind < 10; ind++) {
//		if (ind == 3)
//			aux1 = *(ptr + ind);//posicao 4
//		else {
//			if (ind == 6)
//				aux2 = *(ptr + ind);//posicao 7
//		}
//	}
//
//	*dividir = aux1 / aux2;
//	cout.precision(2);
//	cout << "A divisao dos numeros é: " <<fixed<< *dividir << endl;
//
//	delete dividir;
//	
//}
//
//
//bool posicao(int* ptr) {
//	int ind = 0;
//	
//	for (ind = 0; ind < 10; ind++) {
//		if (ind == 5) {
//			if (*(ptr + ind) % 5 == 0)
//				return true;
//			else {
//				return false;
//			}
//		}			
//	}
//}


/*Para os próximos exercícios deve se utilizar a seguinte estrutura chamada "Veiculo" para
armazenar os seguintes dados :
 Modelo do veículo
 Ano de fabricação
 Quilometragem
 Valor de venda
7) Crie um programa que aloque memória para um ponteiro da estrutura “Veiculo”, em seguida,
crie as seguintes funções :
7.1) Função que receba o ponteiro e solicite a digitação dos valores pelo usuário.
7.2) Função que receba o ponteiro e solicite a alteração do valor da quilometragem e valor de
venda.
7.3) Função que receba o ponteiro e exiba os valores na tela*/

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//struct Veiculos {
//	string modelo;
//	int ano_f;
//	int quilometragem;
//	float valor_venda;
//};
//
//Veiculos* alocar_memoria();
//void desalocar_memoria(Veiculos* veiculos);
//void inserir_dados(Veiculos* veiculos);
//void alterar_dados(Veiculos* veiculos);
//void exibir(Veiculos* veiculos);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	Veiculos* veiculos;
//	veiculos = alocar_memoria();
//
//	inserir_dados(veiculos);
//	alterar_dados(veiculos);
//	exibir(veiculos);
//	desalocar_memoria(veiculos);
//
//	system("pause");
//	return 0;
//}
//
//Veiculos* alocar_memoria() {//retorna a struct
//	Veiculos* veiculos;
//	veiculos = new Veiculos[1];
//	return veiculos;
//}
//
//void desalocar_memoria(Veiculos* veiculos) {
//	
//	delete[] veiculos;
//}
//
//void inserir_dados(Veiculos* veiculos) {
//	cout << "Digite o modelo do veículo" << endl;
//	cin >> veiculos->modelo;
//	cout << "Digite o ano de fabricação do veículo" << endl;
//	cin >> veiculos->ano_f;
//	cout << "Digite a quilometragem do veículo" << endl;
//	cin >> veiculos->quilometragem;
//	cout << "Digite o valor de venda do veículo" << endl;
//	cin >> veiculos->valor_venda;		
//}
//
//void alterar_dados(Veiculos* veiculos) {
//	cout << "Digite a nova quilometragem do veículo" << endl;
//	cin >> veiculos->quilometragem;
//	cout << "Digite o novo valor de venda do veículo" << endl;
//	cin >> veiculos->valor_venda;	
//}
//
//void exibir(Veiculos * veiculos) {	
//	cout << "Modelo do veiculo " << veiculos->modelo << endl;
//	cout << "Ano de Fabricaçao " << veiculos->ano_f << endl;
//	cout << "Quilometragem " << veiculos->quilometragem << endl;
//	cout << "Valor de venda " << veiculos->valor_venda << endl;		
//}
//
