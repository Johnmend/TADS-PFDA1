/* Escreva um programa que receba um número inteiro positivo n 
e retorne a soma dos n primeiros números inteiros.
Por exemplo, se for digitado 5, 
o programa deve mostrar o resultado da soma = 15, pois, 15=1+2+3+4+5. */

/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h> 


int main()
{
			setlocale(LC_ALL, "Portuguese");
			
	int n, soma, i; 
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	
	for(i=1, soma=0; i<=n; i++)
	{
		soma=soma+i;      //  soma+=i
		
		printf(" %i", i);
		
	}
	
	printf("\n A soma é: %i", soma);
	
}
