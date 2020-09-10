/* Faça um algoritmo que imprima na tela todos os múltiplos de 3 entre 0 e 100 */

/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i=0; i<100; i++)
		if(i%3 == 0)
			printf("%i \n", i);
			
	system("pause");
 } 
