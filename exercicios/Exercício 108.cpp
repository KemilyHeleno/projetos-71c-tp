#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 30
void sorteio(int vet[tam])
{
	srand(time(NULL));
	for (int i=0; i<tam; i++)
	{
		vet[i]=rand()%11+10;
	}
}
main()
{
	int vet[tam];
	sorteio(vet);
	for (int i=0; i<tam; i++)
	{

		printf("%d\t",vet[i]);	
	}
}
