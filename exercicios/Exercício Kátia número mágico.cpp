#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	srand(time(NULL));
	int num,sorteio,chance;
	sorteio=rand()%91+10; //intervalo de 10 a 100
		printf("\ndigite o seu chute:");
	for(int i=0; i<10; i++)
	{
		scanf("%d",&num);
		if(num<sorteio)
			printf("\no numero e maior:");
		else if(num>sorteio)
			printf("\no numero e menor:");
		else if(num==sorteio)
		{
			printf("\nacertou");
		break;
		}	
	}
	

	
	
	
}

