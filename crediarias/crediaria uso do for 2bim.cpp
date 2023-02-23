#include<stdio.h>

/*crie um programa que repita aula legal de tp 100 vezes mais 
a quantidade de letras do seu nome*/
main()
{
	int num;
	printf("Digite o numero de letras que tem o seu nome     ");
	scanf("%d",&num);
	for (int i=1; i<=100+num; i++)
	{
		printf("\n%d Aula legal de TP",i);
	}
}
