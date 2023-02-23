#include<stdio.h>
main()
{
	int campanha, tipo, genero, porcentagem;
	int cont1 = 0;
	int cont2 = 0;
	int cont3 = 0;
	do
	{
		printf("Voce participa de alguma campanha solidaria");
		printf("                       0-Encerra a pesquisa");
		printf("                       1-Sim");
		printf("                       2-Nao               ");
		scanf("%d",&campanha);
		if(campanha==0)
		{
			break;
		}
		if (campanha==1)
		{
			printf("De qual tipo de campanha");
			printf("                1- Doacao de de sangue");
			printf("                2- Campanha do agasalho");
			printf("                3- Protecao dos Animais");
			printf("                4- Outras              ");
			scanf("%d",&tipo);
		}
		printf("Genero do entrevistado");
		printf("                       1-Feminino");
		printf("                       2-masculino         ");
		scanf("%d",&genero);
		if(campanha==1 && genero==1)
		{
			cont1++;	
		}
		if(campanha==1 && tipo==1 && genero==2)
		{
			cont2++;
		}
		if(campanha==1)
		{
			cont3++;
		}
		porcentagem= (cont2/cont3)*100;
		printf("                   o total de mulheres que participam de alguma camapanha eh de %d ", cont1);
		printf("                   a porcentagem do total de homens que doam sangue eh de %d ",porcentagem);
		printf("                   o total de entrevistados eh %d",cont3);
		printf("                   Deseja continuar");
		printf("                     1-Sim");
		printf("                     0-Encerra            ");
		scanf("%d",&campanha);	
	}while(campanha!=0);
}
