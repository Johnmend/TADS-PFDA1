/*Exercicio1: Modificar o codigo de tal forma que funcione com Do.. While*/
/*Bibliotecas*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main ()
{
		setlocale(LC_ALL, "Portuguese");
 int cont;
 float base, altura, area;
 system ("cls"); /*Comando para limpar a tela, comando especifico do DOS*/
 cont=0; base=0; altura=0; area=0;
 do /*modifica��o*/ 
 {
	 printf ( "\n Base :" ); fflush(stdin); scanf("%f", &base);
	 printf ( "\n Altura :" ); fflush(stdin); scanf("%f", &altura);
	 if ( base==0 || altura==0 )
	 printf ("\nImposs�vel calcular �rea do tri�ngulo!");
	 else
	 {
	 area = base*altura/2;
	 printf ( "\n �rea =%5.2f" , area );
	 }
	
	 cont++;
}while ( cont < 3 );

 printf ("\n");
 system ("pause");
}
