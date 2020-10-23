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
//int soma_ponteiros(int* ptrX, int* ptrY);
//int maior_ponteiro(int* ptrX, int* ptrY);
//void inverte_ponteiros(int* ptrX, int* ptrY);
//void novos_valores(int* ptrX, int* ptrY);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//
//	int* ptrX;
//	int* ptrY;
//	int soma, maior;
//
//	ptrX = new int;
//	ptrY = new int;
//
//	*ptrX = 200;
//	*ptrY = 100;
//
//	soma = soma_ponteiros(ptrX, ptrY);
//	cout << "A soma dos ponteiros ptrX e ptrY e: " << soma << endl;
//
//	maior = maior_ponteiro(ptrX, ptrY);
//	cout << "O Maior valor e: " << maior<< endl;
//
//	inverte_ponteiros(ptrX, ptrY);
//	novos_valores(ptrX, ptrY);
//
//		
//	delete ptrX;
//	delete ptrY;
//	system("pause");
//	return 0;
//}
//int soma_ponteiros(int* ptrX, int* ptrY) {
//	int res;
//	res = *ptrX + *ptrY;
//	
//	return res;
//}
//
//int maior_ponteiro(int* ptrX, int* ptrY) {
//	int maior = 0;
//
//	if (*ptrX > * ptrY)
//		maior = *ptrX;
//	else{
//		maior = *ptrY;
//	}
//	return maior;
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
//int soma(int* ptr);
//int menorN(int* ptr);
//int maiorN(int* ptr);
//float mediaN(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//		
//	int* ptr;
//	ptr = new int[5];
//
//	int somar, menor, maior;
//	float media;
//
//	
//	armazena_valores(ptr);
//
//	somar = soma(ptr);
//	cout << "A soma dos numeros é: " << somar << endl;
//
//	menor = menorN(ptr);
//	cout << "O menor número é: " << menor << endl;
//
//	maior = maiorN(ptr);
//	cout << "O maior numero é: " << maior << endl;
//
//	media = mediaN(ptr);
//	cout << "A media dos numeros é: " << media << endl;
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
//}
//
//
//int soma(int* ptr) {
//	int ind;
//	int somar = 0;
//	
//	for (ind = 0; ind < 5; ind++) {
//		somar = somar +  *(ptr + ind);
//	}
//	
//	return somar;
//}
//
//
//int menorN(int* ptr) {
//
//	int ind;
//	int menor;
//	menor = *(ptr + 0);
//
//	for (ind = 0; ind < 5; ind++) {
//		if (*(ptr + ind) < menor) {
//			menor = *(ptr + ind);
//		}
//	}	
//	return menor;
//}
//
//
//int maiorN(int* ptr) {
//
//	int ind;
//	int maior = *(ptr + 0);
//
//	for (ind = 0; ind < 5; ind++) {
//		if (*(ptr + ind) > maior) {
//			maior= *(ptr + ind);
//		}
//	}
//	
//	return maior;
//}
//
//
//float mediaN(int* ptr) {
//
//	int ind;
//	int somar;
//	float media;
//
//	somar = 0;	
//	media = 0;
//
//	for (ind = 0; ind < 5; ind++) {
//		somar = somar + *(ptr + ind);
//	}
//
//	media = somar / 5;
//
//	return media;
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

//
//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//void armazena_valores(int* ptr);
//int soma(int* ptr);
//int subtrai(int* ptr);
//int multiplica(int* ptr);
//float divide(int* ptr);
//bool posicao(int* ptr);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	cout << fixed << setprecision(2);//2 casas decimais
//
//
//	int somar, subtrair, multiplicar;
//	float dividir;
//			
//	int* ptr;
//	ptr = new int[10];
//
//	
//	armazena_valores(ptr);
//	somar = soma(ptr);//ok
//	cout << "A soma dos numeros é: " << somar << endl;
//
//	subtrair = subtrai(ptr);
//	cout << "A subtracao dos numeros é: " << subtrair << endl;
//
//	multiplicar = multiplica(ptr);
//	cout << "A multiplicacao dos numeros é: " << multiplicar << endl;
//
//	dividir = divide(ptr);
//	cout << "A divisao dos numeros é: " << dividir << endl;
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
//int soma(int* ptr) {
//	int ind;
//	int somar = 0;
//	
//
//	for (ind = 0; ind < 10; ind++) {
//		if (ind >= 2 && ind <= 8) {///entre as POSIÇOES 3 e 9, p1 = 0
//			somar = somar + *(ptr + ind);
//		}		
//	}	
//	return somar;
//}
//
//
//int subtrai(int* ptr) {
//	int ind = 0;
//	int subtrair = 0;
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
//	subtrair = aux1 - aux2;
//	return subtrair;
//}
//
//
//int multiplica(int* ptr) {
//	int ind = 0;
//	int multiplicar = 0;
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
//	multiplicar = aux1 * aux2;
//	return multiplicar;	
//}
//
//
//float divide(int* ptr) {
//	int ind = 0;
//	float dividir = 0;
//	float aux1, aux2;
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
//	dividir = aux1 / aux2;
//	return dividir;
//	
//}
//
//
//bool posicao(int* ptr) {
//	int ind = 0;
//	
//	for (ind = 0; ind < 10; ind++) {
//		if (ind == 5) {//posicao 6
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
//
//
//void inserir_dados(Veiculos* veiculos);
//void alterar_dados(Veiculos* veiculos);
//void exibir(Veiculos* veiculos);
//
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	cout << fixed << setprecision(2);
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


