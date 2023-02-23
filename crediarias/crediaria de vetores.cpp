#include<stdio.h>
#define lin 2
#define col 2

// cadastra vetores e mostra a linha diagonal da direita para a esquerda como se fosse uma matriz 
void leitura (int m[lin] [col])
{
	int valor =0;
	for (int i=0; i<lin; i++)
	{
		for (int j=0; j<col; j++)
		{
			do
			{
				printf("Digite o valor de [%d] [%d]",i,j);
				scanf("%d",&valor);
				if (valor>100 || valor<0)
				{
					printf("Numero invalido, redigite\n ");
				}
			}while(valor>100 || valor<0);
			m[i][j] =valor;
		}
	}
}

main()
{
	int m[lin][col];
	leitura(m);
	for (int i=0; i<lin; i++)
	{
		for (int j=0; j<col; j++)
		{
			if(i==j)
			{
				printf("%d \t",m[i][j]);
			}
		}
		printf("\n");
	}
}
