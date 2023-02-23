/*Define opcao selecionada em um menu*/
#include<stdio.h>
main()
{
	int op;
	printf("\n1-Rotina 1\n\n2-Rotina 2\n\n3-Rotina 3\n\n");
	printf("Digite sua opcao: ");
	scanf("%d",&op);
	switch(op)
	{
		case 1: printf("Chama rotina 1");
			break;
		case 2: printf("Chama rotina 2");
			break;
		case 3: printf("Encerrar programa");
			break;
		default:printf("Opcao inexistente");
			break;
	}
	
}
