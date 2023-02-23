#include<stdio.h>
#define tam 10
void mult(int vet[tam])
{
	for (int i=0; i<tam; i++)
	{
		printf("posicao :%d\t",i);
		vet[i]=i*2;
		printf("elemento :%d\n",vet[i]);
	}
}
main()
{
	int vet[tam];
	mult( vet);
}
