#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	int tabla[5][5]{{4,1,2,5,5},
					{1,1,5,5,6},
					{5,5,5,3,5},
					{5,5,5,5,6},
					{4,5,5,5,6}};
	int estado=0,entrada=0;
	string cadena;

		printf("introdusca una cadena: ");
		cin>>cadena;
	for(int i=0;i<=cadena.length();i++){
		switch(cadena[i]){
			case 'a': entrada=1;break;
			case 'b': entrada=1;break;
			case 'c': entrada=1;break;
			case 'd': entrada=1;break;
			case 'e': entrada=1;break;
			case 'f': entrada=1;break;
			case 'g': entrada=1;break;
			case 'h': entrada=1;break;
			case 'i': entrada=1;break;
			case 'j': entrada=1;break;
			case 'k': entrada=1;break;
			case 'l': entrada=1;break;
			case 'm': entrada=1;break;
			case 'n': entrada=1;break;
			case 'o': entrada=1;break;
			case 'p': entrada=1;break;
			case 'q': entrada=1;break;
			case 'r': entrada=1;break;
			case 's': entrada=1;break;
			case 't': entrada=1;break;
			case 'u': entrada=1;break;
			case 'v': entrada=1;break;
			case 'w': entrada=1;break;
			case 'x': entrada=1;break;
			case 'y': entrada=1;break;
			case 'z': entrada=1;break;
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
			case ':': entrada=2;break;
			case '=': entrada=3;break;
			case NULL:entrada=4;break;

		}
		estado=tabla[estado][entrada];

	}
		if(estado==6){
		printf("ERROR: token accept");
		}
		else{
		printf("Tokken No accept");
		}

	return 0;
}

