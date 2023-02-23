#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 20
int maior (int vet[tam])
{
	int num=vet[0];
	for (int i=1; i<tam; i++)
	{
		if (vet[i]>num)
			num=vet[i];
	}
	return num;
}
void sorteio(int vet[tam])
{
	srand(time(NULL));
	for (int i=0; i<tam; i++)
	{
		vet[i]=rand()%51+50;
	}
}
main()
{
	int vet[tam];
	sorteio(vet);
	for (int i=0; i<tam; i++)
	{

		printf("%d\t",vet[i]);	
		printf("\n\n");
	}	
	maior(vet);
	printf("o maior numero eh %d",maior(vet));
}
