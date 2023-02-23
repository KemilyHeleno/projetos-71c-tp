#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define valor 30
void sorteio(int v[valor])
{
	srand(time(NULL));
	for(int i=0; i<valor; i++)
		v[i]=rand()%31+30;
	for (int i=0; i<valor; i++)
	{
		printf("%d\t",v[i]);
	}
	for (int i=0; i<valor; i++)
	{
		if(i%2==0)
			v[i]*=2;
		else
			v[i]*=3;
	}
	printf("\n\nNumeros depois de multiplcados\n\n");
	for (int i=0; i<valor; i++)
	{
		printf("%d\t",v[i]);
	}
}

main()
{
	int vet[6];
	sorteio(vet);
	
}
