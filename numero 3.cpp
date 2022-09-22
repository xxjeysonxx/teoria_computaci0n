#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	int tabla[7][6]{{1,7,7,7,7,7},
					{1,2,4,7,7,7},
					{3,7,7,7,7,7},
					{3,7,4,7,7,8},
					{6,7,7,5,5,7},
					{6,7,7,7,7,7},
					{6,7,7,7,7,8}};
	int estado=0,entrada=0;
	string cadena;

		printf("introdusca una cadena: ");
		cin>>cadena;
	for(int i=0;i<=cadena.length();i++){
		switch(cadena[i]){
			case '0': entrada=0;break;
			case '1': entrada=0;break;
			case '2': entrada=0;break;
			case '3': entrada=0;break;
			case '4': entrada=0;break;
			case '5': entrada=0;break;
			case '6': entrada=0;break;
			case '7': entrada=0;break;
			case '8': entrada=0;break;
			case '9': entrada=0;break;
			case '.': entrada=1;break;
			case '-': entrada=4;break;
			case '+': entrada=3;break;
			case 'E': entrada=2;break;
			case NULL:entrada=5;break;

		}
		estado=tabla[estado][entrada];


	}
		if(estado==8){
		 printf("Cadena es aceptada");
		}
		else{
		 printf("Cadena no es aceptada");
		}
	return 0;
}

