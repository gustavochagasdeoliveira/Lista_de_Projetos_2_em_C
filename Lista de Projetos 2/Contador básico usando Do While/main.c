#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int valor, soma = 0, qtde = 0;
	float media;

	do
	{
		printf ("Digite um valor: ");
		scanf ("%d", &valor);

		if (valor >= 0)
		qtde++;

	} while (valor >= 0);

	return 0;
}
