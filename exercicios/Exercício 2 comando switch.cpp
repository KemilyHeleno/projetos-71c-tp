#include<stdio.h>
main()
{
	int opcao, valor;
	printf("\nConverter: \n\n");
	printf("1:Decimal para hexadecimal\n\n");
	printf("2:Hexadecimal para decimal\n\n");
	printf("Informe a sua opcao: ");
	scanf("%d",&opcao);
	switch(opcao)
	{
		case 1:
			printf("\n\nInforme o valor em decimal: ");
			scanf("%d",&valor);
			printf("\n%d em hexadecimal eh: %x",valor, valor);
			break;
		case 2:
			printf("\nInforme o valor em decimal: ");
			scanf("%d",&valor);
			printf("\n%x em decimal eh: %d", valor, valor);
			break;
		default:
			printf("\nOpcoes invalidas, tente outra vez.");
	}
}
