/****** 
Exercicio: Faça um código em linguagem C, que utilizando o loop "for"
que imprima na tela a tabua do 5 
***/

/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	for(i=0; i<10 ; i++)
		printf("%i * %i = %i \n", 5, i, i*5);	
		
 	system ("pause");
}
