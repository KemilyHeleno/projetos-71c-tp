#include<stdio.h>
main()
{
	int op;
	do
	{
		printf("\n1-TP");
		printf("\n2-FPD");
		printf("\n3-EL");
		printf("\n4-FIM");
		printf("\nQual opcao:");
		scanf("%d",&op);
		if(op==1)
		{
			printf("\nquiz de TP");
		}
		else if(op==2)
		{
			printf("\nquiz de FPD");
		}
			else if (op==3)
			{
				printf("\nquiz de EL");
			}
	}while (op!=4);
}
