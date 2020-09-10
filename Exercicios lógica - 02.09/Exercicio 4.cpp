/* Faça um algoritmo que imprima o quadrado de todos os 
números inteiros entre 15 e 200 */

/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h> 

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i; 
	for (i=15; i<200; i++)
	{
		printf("%i * %i = %i\n", i, i, i*i);
	}
		
system("pause");
	
	
}
