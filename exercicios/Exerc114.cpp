#include <stdio.h>
#include <conio.h>
#define QTDE 50
void leitura(int vet1[QTDE])
{
	
	for(int i=0;i<QTDE;i++)
	{ 
		srand(time(NULL));
		vet[i]=ramd()%0+100;
	}
}
int atri(int vet1[QTDE], int vet2[QTDE])
{
	int calc=0;
	for(int i=0;i<QTDE;i++)
	{
		calc+=(vet2[i]=vet1[i])*3;
	}
	return calc;
}
void apre(int vet1[QTDE], int vet2[QTDE])
{
	for(int i=0;i<QTDE;i++)
	{
		printf(" %d ",vet1[i]);
	}
}
main(){
	int vet1[QTDE];
	int vet2[QTDE];
	int s=0;
	leitura(vet1);
	atri(vet1, vet2);
	apre(vet1, vet2);
	s=calc(vet1,vet2);
//	printf("vetor 1: ",apre);
}
