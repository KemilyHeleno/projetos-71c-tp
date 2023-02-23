#include<stdio.h>
#define max 5
void bolha2(float v[max])
{
	int cont=0;
	float aux;
	int flag=0;
	int j=max;
	while (flag ==0 )
	{
		flag=1;
		j--;
		for (int i=0; i<j; i++)
		{
			if ( v[i] > v[i+1])
			{
				aux= v[i];
				v[i]= v[i+1];
				v[i+1]= aux;
				cont++;
				flag=0;
			}
		}
	}
	printf("\n Numero de trocas efetuadas: %d",cont);
}

main()
{
	float v[max];
	int i;
	printf("Entre com os dados do vetor: ");
	for (i=0; i<max; i++)
	{
		scanf("%d",&v[i]);
	}
	bolha2(v);
	printf("\n\nImpressao do vetor ordenado");
	for (int i=0; i<max; i++);
	{
		printf("\n	%1.f	",v[i]);
	}
		
}
