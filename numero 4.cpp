#include<stdio.h>
#include<string.h>
#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
	int tabla[7][3]{{1,5,7},
					{2,4,8},
					{2,3,7},
					{7,7,8},
					{7,4,8},
					{7,7,8},
					{7,7,7}};
	int estado=0,entrada=0;
	string cadena;
		printf("Ingrese una cadena: ");
		cin>>cadena;
	for(int i=0;i<cadena.length();i++){
		switch(cadena[i]){
			case 'a': entrada=0;break;
			case 'b': entrada=1;break;
			case ';':entrada=2;break;

		}
		estado=tabla[estado][entrada];
	}

		if(estado==8){
		printf("Cadena es valida");
		}
		else{
		printf("Cadena no es valida");

		}

	return 0;
}
