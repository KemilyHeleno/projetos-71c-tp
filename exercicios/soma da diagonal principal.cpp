#include <stdio.h>
#define lin 3
#define col 3
void leitura(int m[lin][col])
{
	int cont=0;
	for(int i=0; i<lin; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("\t-%d-\tDigite um valor para a matriz: ",cont);
			scanf("%d",&m[i][j]);
			cont++;
		}
	}
}
int calc(int mat[lin][col],int *soma)
{
	int linh=0;
	int colu=0;
	for(int i=0; i<lin; i+=1)
	{
		for(int j=0; j<col; j+=1)
		{
			soma+=mat[lin][col];
			linh++;
			colu++;
		}
	}
}
main(){
	int mat[lin][col];
	leitura(mat);
	int soma = 0;
	soma=calc(mat,&soma);
	for(int i=0; i<lin; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("( %d )\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\nSoma da diagonal principal:  %d",soma);
}
