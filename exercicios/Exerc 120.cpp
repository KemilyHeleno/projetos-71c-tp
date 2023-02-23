/*Exercício 120: Dada uma matriz mat(7x7) de
elementos inteiros, calcule a soma dos elementos
da diagonal principal. Variável local, função para ler
ou sortear valores e função para cálculo da soma.
Apresente os resultados no programa principal.*/
#define lin 2
#define col 2
#include <stdio.h>
void leitura( int n [lin][col])
{
	for (int i=0; i<lin; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("Digite o valor [%d] [%d]   ",i,j);
			scanf("%d",&n[i][j]);
		}
	}
}
void soma1(int n[lin][col])
{
	int soma=0;
	for (int i=0; i < lin; i ++)
	{
		for (int j=0; j<col; j++)
		{
			printf(" %d\t", n[i][j]);
			if (i==j)
			{
				soma += n[i][j];
			}
		}
		printf("\n\n");
	}
	printf("%d ",soma);
}
main()
{
	int n[lin][col];
	leitura(n);
	soma1(n);
}

