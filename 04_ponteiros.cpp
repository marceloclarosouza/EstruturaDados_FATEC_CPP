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
//	int x;
//	int *px, *py;
//
//	x = 10;
//	px = &x;
//	py = px;//passando p endere�o de x p py
//
//	cout << "Endere�o de &x: " << &x << endl;
//	cout << "Valor de x: " << x << endl;
//	cout << "Endere�o de &px: " << &px << endl;
//	cout << "Conteudo de px:" << px << endl;
//	cout << "Valor de *px: " << *px << endl;
//	cout << *py << endl;
//
//
//	system("pause");
//	return 0;
//}

//Exercicio1: Fazer uma fun��o que retorna a soma e a subtra��o entre dois
//n�meros.Ap�s a fun��o, imprima os dados na tela.
//Ex : void calculo(int nro1, int nro2, int* soma, int* sub)

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//void calculo(int num1, int num2, int* soma, int* sub);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	int num1, num2, soma, sub;
//	num1 = 10;
//	num2 = 5;
//
//
//	calculo(num1, num2, &soma, &sub);
//	cout << "Soma = " << soma << endl << endl;
//	cout<<"Sub = " << sub << endl << endl;
//
//
//	system("pause");
//	return 0;
//}
//
//void calculo(int num1, int num2, int* soma, int *sub) {
//	*soma = num1 + num2;
//	*sub = num1 - num2;
//}
//
//exercicio2: ) Fazer uma fun��o para ler e retornar o valor das 4 notas de um aluno
//e sua m�dia.Ap�s a fun��o, imprima os dados na tela.

//#include <iostream>
//#include <locale.h> // setlocale
//#include <stdlib.h> // system
//#include <string> // Textos em geral
//#include <iomanip>
//
//using namespace std;
//
//void calcula_media(float *num1, float *num2, float *num3, float *num4, float* media);
//
//int main() {
//	setlocale(LC_ALL, "Portuguese");
//	float *num1, *num2, *num3, *num4, *media;
//	
//
//	calcula_media(&num1, &num2, &num3, &num4, &media);
//	out << "Nota 1 = " << num1<< endl << endl;
//	out << "Nota 2 = " << num2 << endl << endl;
//	out << "Nota 3 = " << num3 << endl << endl;
//	out << "Nota 3 = " << num4 << endl << endl;
//	cout << "Nota media = " << media << endl << endl;	
//
//	system("pause");
//	return 0;
//}
//
//void calcula_media(int *num1, int *num2, int *num3, int *num4, int* media) {
//
//	*media = (num1 + num2 + num3 + num4) / 4;
//}
//






//
//3) Fazer uma fun��o que recebe um n�mero, calcule e retorne se o
//n�mero � positivo ou negativo e se � m�ltiplo ou n�o de tr�s.Ap�s a
//fun��o, imprima os dados na tela.
//Ex: void validarNro(int nro1, bool* positivo, bool* multiploTres)









