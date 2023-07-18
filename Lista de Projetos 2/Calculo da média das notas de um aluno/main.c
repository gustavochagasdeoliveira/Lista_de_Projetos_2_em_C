#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int codigo;
  	float nota1, nota2, nota3, media;

	do
    {
        printf("Digite o codigo do aluno: ");
        scanf("%d", &codigo);
        if (codigo != 0)
        {
          printf("Digite a primeira nota: ");
          scanf("%f", &nota1);

          printf("Digite a segunda nota: ");
          scanf("%f", &nota2);

          printf("Digite a terceira nota: ");
          scanf("%f", &nota3);

          media = (nota1 + nota2 + nota3) / 3;

          printf("O codigo do aluno e %d e a media do aluno e %.2f\n", codigo, media);
        }
    } while (codigo != 0);

    printf("\nFim do Sistema\n");
	return 0;
}
