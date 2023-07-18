#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int idade, maior = -1, total = 0;
	char sexo, cordosolhos, cordocabelo;

	do
	{
		printf ("Informe a idade: ");
		scanf ("%d", &idade);

		if (idade != -1)
		{
			fflush (stdin);

			printf ("Informe o sexo (M/F): ");
			scanf ("%c", &sexo);

			fflush (stdin);

			printf ("Qual a cor dos olhos? (C = castanho, V = verde e A = azul)");
			scanf ("%c", &cordosolhos);

			fflush (stdin);

			printf ("Qual a cor do cabelo? (C = castanho, L = louro e P = preto)");
			scanf ("%c", &cordocabelo);

			if (idade > maior)
				maior = idade;

			if  ((sexo == 'f' || 'F') &&
                (idade >= 18 || idade <= 35) &&
                (cordosolhos == 'v' || cordosolhos == 'V') &&
                (cordocabelo == 'l' || cordocabelo == 'L'))
            {
				total++;
			}
		}
	} while (idade != -1);

	printf ("\nColeta de dados encerrada \n");

    printf ("\nA pessoa mais velha analisada tem %d anos\n", maior);
    printf ("Foi/Foram analisada(s) %d mulher(es) com idade de 18 a 35 anos com olhos verdes e cabelos louros.\n", total);

    printf ("\nFim do Sistema \n");
	return 0;
}
