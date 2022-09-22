#include <iostream.h>
#include <string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	int tEstado[5][3] = {{1, 4, 10},
						 {1, 2, 10},
						 {3, 10, 10},
						 {3, 2, 11},
						 {10, 10, 10}};

	string cadena;
	int estado, entrada, l, n;
	string flag;
	estado = 0;
	n = 0;
	l = 2;
	flag="FFF";
	cout << "Agrega una cadena: ";
	cin >> cadena;


	do
	{
		switch (cadena[n])
		{

		case '0':
			entrada = 0;
			break;
		case '1':
			entrada = 0;
			break;
		case '2':
			entrada = 0;
			break;
		case '3':
			entrada = 0;
			break;
		case '4':
			entrada = 0;
			break;
		case '5':
			entrada = 0;
			break;
		case '6':
			entrada = 0;
			break;
		case '7':
			entrada = 0;
			break;
		case '8':
			entrada = 0;
			break;
		case '9':
			entrada = 0;
			break;
		case '-':
			entrada = 1;
			break;
		case '=':
			entrada = 1;
			break;
		case '+':
			entrada = 1;
			break;
		case '*':
			entrada = 1;
			break;
		case '/':
			entrada = 1;
			break;
		default:
             cout << flag;
		}

		estado = tEstado[estado][entrada];
		n = n + 1;
	}
	while (n < cadena.length());

	entrada = 2;
	estado = tEstado[estado][entrada];
	if (estado == 11)
	{
		cout << " La cadena es aceptada";
	}
	else
	{
		cout << " La cadena no es aceptada";
	}
	return 0;
}
