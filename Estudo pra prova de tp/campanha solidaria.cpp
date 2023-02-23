#include<stdio.h>
main()
{
	int campanha, tipo, genero, porcentagem, continuar;
	int cont1 = 0;
	int cont2 = 0;
	int cont3 = 0;
	do
	{
		printf("Voce participa de alguma campanha solidaria?");
		printf("\n 0-Encerra a pesquisa");
		printf("\n 1-Sim");
		printf("\n 2-Nao\n ");
		scanf("%d",&campanha);
		if(campanha==0)
		{
			break;
		}
		if (campanha==1)
		{
			printf("\n De qual tipo de campanha?");
			printf("\n 1- Doacao de de sangue");
			printf("\n 2- Campanha do agasalho");
			printf("\n 3- Protecao dos Animais");
			printf("\n 4- Outras\n ");
			scanf("%d",&tipo);
		}
		printf("\n Genero do entrevistado?");
		printf("\n 1-Feminino");
		printf("\n 2-masculino\n");
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
		printf("\n o total de mulheres que participam de alguma camapanha eh de %d\n ", cont1);
		printf("\n a porcentagem do total de homens que doam sangue eh de %d \n",porcentagem);
		printf("\n o total de homens que doam sangue eh de %d \n",cont2);
		printf("\n o total de entrevistados eh %d \n",cont3);
		printf("\n Deseja continuar?");
		printf("\n 1-Sim");
		printf("\n 2-Encerra\n ");
		scanf("%d",&continuar);	
		if(continuar==2)
		{
			break;
		}
	}while(campanha!=0 || continuar!=2);
}
