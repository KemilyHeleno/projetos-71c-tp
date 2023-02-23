#include<stdio.h>
#define tam 10
#define tay 10
void mult(int, int);
void entrada(int vet1[tam], int vet2[tay])
{
	for(int i=0;i<tam;i++)
	{
		printf("digite um numero de zero a dez :");
		scanf("%d",&vet1[i]);
	}
	for(int i=0;i<tam;i++)
	{
		printf("digite um numero de zero a dez :");
		scanf("%d",&vet2[i]);
	}
}
void mult(int vet1[tam], int vet2[tay])
{
	int mult=0;
	int soma=0;
	for(int i=0;i<tam;i++)
	{
		mult=vet1[i]*vet2[i];
		soma+=mult;
		printf("%d * %d = %d\t",vet1[i], vet2[i], mult);
		printf("soma dos valores: %d\t",soma);
	}
}
main()
{
  int vet1[tam];
  int vet2[tay];
  entrada(vet1,vet2);
  mult(vet1, vet2 );
  	
}
