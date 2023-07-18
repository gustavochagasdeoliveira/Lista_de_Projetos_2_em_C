#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int votostotais, voto, voto1 = 0, voto2 = 0, voto3 = 0, voto4 = 0, votosbrancos = 0, votosnulos = 0;

	do
	{
		printf("Digite o numero do seu candidato (de 1 a 4), 5 para nulo e 6 para branco: ");
		scanf("%d", &voto);

		switch (voto)
		{
			case 1:
			    voto1++;
                break;

			case 2:
			    voto2++;
                break;

			case 3:
			    voto3++;
                break;

			case 4:
			    voto4++;
                break;

			case 5:
			    votosnulos++;
                break;

			case 6:
			    votosbrancos++;
                break;
		}
		if (voto != 0)
		{
			votostotais++;
		}
	} while (voto != 0);
	printf("Votos para o candidato 1: %d ");

	return 0;
}
