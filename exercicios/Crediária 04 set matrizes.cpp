#include<stdio.h>
#define lin 2
#define col 2
void leitura(int m[lin][col])
{
	int valor;
	for (int i=0; i< lin; i++)
	{
		for (int j =0; j<col; j++)
		{
			do
			{
				printf("Digite o valor de [%d] [%d]     ",i,j);
				scanf("%d",&valor);
				if (valor <0 || valor >100)
				{
					printf("Numero invalido, redigite\n");
				}
			}while(valor > 100 || valor < 0);
			m[i][j]=valor;
		}
	}
}
main()
{
	int m[lin][col];
	leitura(m);
	for (int i=0; i< lin; i++)
	{
		for ( int j=0; j<col; j++)
		{
			if (i==j)
			{
				printf("%d",m[i][j]);
			}
		}
		printf("\n\n");
	}
}
