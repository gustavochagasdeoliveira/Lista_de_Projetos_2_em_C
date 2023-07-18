#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
		int contador0a25 = 0;
	    int contador26a50 = 0;
	    int contador51a75 = 0;
	    int contador76a100 = 0;

		while (1)
		{
	        int numero;
	        printf("Digite um numero: ");
	        scanf("%d", &numero);
	        if (numero >= 0)
			{
	            if (numero <= 25) {
	                contador0a25 = contador0a25 + 1;
	            }
	            else if (numero <= 50) {
	                contador26a50 = contador26a50 + 1;
	            }
	            else if (numero <= 75) {
	                contador51a75 = contador51a75 + 1;
	            }
	            else if (numero <= 100) {
	                contador76a100 = contador76a100 + 1;
	            }
	        } else {
                break;
            }
	    }
	    printf ("\nContador encerrado \n");

	    printf("\nQuantidade de numeros no intervalo [0..25]: %d \n", contador0a25);
	    printf("Quantidade de numeros no intervalo [26..50]: %d \n", contador26a50);
	    printf("Quantidade de numeros no intervalo [51..75]: %d \n", contador51a75);
	    printf("Quantidade de numeros no intervalo [76..100]: %d \n", contador76a100);

	    printf ("\nFim do sistema \n");
	return 0;
}
