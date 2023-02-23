#include <stdio.h>
#include <conio.h>
#define QTDE 2
void leitura(int vet1[QTDE], int vet2[QTDE])
{
	for(int i=0;i<QTDE;i++)
	{
		printf("Digite os numeros para vet1: ");
		scanf("%d",&vet1[i]);
	}
	printf("\n-------------------------------\n");
	for(int i=0;i<QTDE;i++)
	{
		
		printf("Digite os numeros para vet2: ");
		scanf("%d",&vet2[i]);
	}
}
int calc(int vet1[QTDE], int vet2[QTDE])
{
	int soma=0;
	for(int i=0;i<QTDE;i++)
	{
		soma+=vet1[i]*vet2[i];
	}
	return soma;
}
main()
{
	int vet1[QTDE];
	int vet2[QTDE];
	int s=0;
	
	leitura(vet1, vet2);
	s=calc(vet1,vet2);
	printf("Soma dos vetores:%d\n",s);
	printf("\n\nMostrando vetor 1:\n");
	for(int i=0;i<QTDE;i++)
	{
		printf(" %d ",vet1[i]);
	}
	printf("\n\nMostrando vetor 2:\n");
	for(int i=0;i<QTDE;i++)
	{
		printf(" %d ",vet2[i]);
	}
}
