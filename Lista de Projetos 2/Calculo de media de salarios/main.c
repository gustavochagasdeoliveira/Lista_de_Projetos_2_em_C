#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int idade, somasalario, qtdepessoas = 0, maior = -1, menor = 500, qtdemulheres = 0;
	float mediasalario, salario, total = 0;
	char sexo;

	do
	{
		printf ("Informe a idade: ");
		scanf ("%d", &idade);

		if (idade >= 0)
		{
			printf ("Informe o sexo (M/F): ");
			scanf (" %c", &sexo);

			printf ("Informe o salario: ");
			scanf ("%f", &salario);

			qtdepessoas++;
			total += salario;
			mediasalario = total / qtdepessoas;

			if (idade > maior) {
				maior = idade;
			}
			if (idade < menor) {
				menor = idade;
			}
			if ((sexo == 'f' || sexo == 'F') && salario <= 1500)
				qtdemulheres++;
		}
	} while (idade >= 0);

	printf ("\nColeta de dados encerrada \n");
    printf ("\nA media dos salarios e de: %.2f \n", mediasalario);
    printf ("A maior idade e: %d anos e a menor idade e %d anos \n", maior, menor);
    printf ("%d mulher(es) recebe(m) menos que 1500 reais \n", qtdemulheres);

    printf ("\nFim do Sistema \n");
	return 0;
}
