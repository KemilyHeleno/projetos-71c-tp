#include<stdio.h>
#define lin 2
#define col 3
void leitura(int m[lin][col])
{
	for (int i=0; i < lin; i ++)
	{
		for (int j=0; j<col; j++)
		{
			printf("\n Digite elemento [%d] [%d] =  ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
}
void mostra (int n[lin][col])
{
	for (int i=0; i < lin; i ++)
	{
		for (int j=0; j<col; j++)
		{
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int mat[lin][col];
	leitura(mat);
	mostra(mat);
}

