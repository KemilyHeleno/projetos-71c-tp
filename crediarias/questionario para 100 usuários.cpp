#include<stdio.h>
#define tam 3
main()
{
	do
	{
		int olhos, genero, cabelo;
		printf("Qual a cor de seus olhos?");
		printf("\n1- Verde \n2- Preto \n3- Castanho \n4- Azul\n");
		scanf("%d",&olhos);
		if(olhos = 1 || olhos = 2 || olhos = 3 || olhos = 4)
		{
			printf("\nQual o genero?");
			printf("\n1- Masculino \n2- Feminino\n");
			scanf("%d",&genero);
			if(genero = 1 || genero = 2)
			{
				printf("\nQual a cor de seus cabelos?");
				printf("\n1- Ruivo \n2- Loiro \n3- Escuro \n4- Outros\n");
				scanf("%d",&cabelo);
				if(cabelo = 1 || cabelo = 2 || cabelo = 3 || cabelo = 4)
				{
					printf("Obrigado por responder!!!!");
				}
			}
		}
	}while( tam);
}
