#include <stdio.h>
#define lin 3
#define col 2
void leitura(int m[lin][col])
{
	int cont=0;
	for(int l=0;l<lin;l++)
	{
		for(int c=0;c<col;c++)
		{
			printf("%d Digite um valor para a matriz:",cont);
			scanf("%d",&m[l][c]);
			cont++;
		}
	}
}
int calc(int mat[lin][col],int *soma)
{
	int linha=0;
	int coluna=0;
	for(int l=0;l<lin;l+=1)
	{
		for(int c=0;c<col;c+=1)
		{
			soma+=mat[l][coluna];
			//*linha++;
			coluna++;
		}
	}
}
main(){
	int mat[lin][col];
	leitura(mat);
	int soma = 0;
	soma=calc(mat,&soma);
	for(int l=0;l<lin;l++)
	{
		for(int c=0;c<col;c++)
		{
			printf("( %d )\t",mat[l][c]);
		}
		printf("\n");
	}
	printf("Soma da diagonal principal: %d",soma);
}
