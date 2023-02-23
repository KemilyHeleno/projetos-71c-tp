#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	srand(time(NULL));
	int num, sorteio, chances;
	sorteio=rand()%91+10;
	printf("\nDigite o valor do seu chute: ");
	for (int i=0; i<=10; i++)
	{
		scanf("%d",&num);
		if (num<sorteio)
			printf("\nO numero e maior que o seu: ");
		else if (num>sorteio)
			printf("\nO numero e menor que o seu: ");
		else if(num==sorteio)
		{
			printf("\nacertou");
		break;
		}
	}
}
