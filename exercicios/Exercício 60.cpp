#include<stdio.h>
main()
{
	int inicio, fim;
	printf("Digite o numero de inicio: ");
	scanf("%d",&inicio);
	printf("Dgite o numero de encerramento: ");
	scanf("%d",&fim);
	for (int i=inicio; i>=fim; i++)
		{
			if(inicio<fim)
			{
				printf("%d- Eu estudo no CTI\n",i);
				break;
			}
			else if (inicio=fim)
			{
				printf("\nnao e possivel, pois o inicio e igual ao fim");
				break;
			}
		}
}
