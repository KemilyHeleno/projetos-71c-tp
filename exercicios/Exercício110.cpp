#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sorteio (int v[10])
{
	srand(time(NULL));
	for (int i=0; i<10; i++)
		v[i]-rand()%48+20;
}
int calcula(int v[10])
{
	int s=0;
	for (int i=0; i<10; i+=2)
		s+=v[i];
	return s;
}
main()
{
	int v[10];
	sorteio(v);
	for (int i=0; i<10; i++)
		printf("v[%d]= %d \n",i,v[i]);
	printf("\nValor resultante: %d",calcula(v));
}
