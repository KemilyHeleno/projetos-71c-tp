#include<stdio.h>
#define tam 5
void leitura(int vet[tam])
{
	for (int i=0; i<tam; i++)
	{
		printf("Elemento %d=   ",i);
		scanf("%d",&vet[i]);
	}
}
main()
{
	int vet [tam];
	leitura(vet);
	for (int i=tam-1; i>=0; i--)
	{
		printf(" %d  \t",vet[i]);
	}
}
