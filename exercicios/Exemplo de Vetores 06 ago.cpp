#include<stdio.h>
#define tam 5
main()
{
	int vet[tam];
	for(int i=0; i<tam; i++)
	{
		printf("elemento %d\n",i);
		scanf("%d",&vet[i]);
	}
	for(int i=0; i<tam; i++)
	{
		printf("%d\t",vet[i]);
	}
}
