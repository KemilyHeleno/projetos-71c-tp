#include<stdio.h>
main()
{
	char resp;
	do
	{
		fflush(stdin);
		printf("Qual componente nao eh um sensor? \n a) Botao \n b) LDR \n c) LED \n d) LM35 (Temperatura) \n");
		printf("\n ");
		resp= getchar();
		if (resp=='c')
		{
			printf("\nA sua resposta esta correta!!!\t Voce vai ganhar um biscoito :3");
		}
		if (resp=='d' || resp=='a' || resp=='b')
		{
		printf("\nSua resposta esta incorreta :<");
		}
	}while (resp != 'a' && resp != 'b' && resp != 'c' && resp!= 'd');
	printf("\nObrigdo por responder :3");
}
