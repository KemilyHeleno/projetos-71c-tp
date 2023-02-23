#include<stdio.h>
main()
{
	int cont=0;
	int telefone, local, morar, dinheiro, estudar,num;
	do
	{
	
	printf("Voce telefonou para a vitima?\n1-Sim\n2-Nao\n");
	scanf("%d",&telefone);
	if (telefone == 1)
		cont++;
	printf("Voce esteve no local do crime?\n1-Sim\n2-Nao\n");
	scanf("%d",&local);	
	if (local == 1)
		cont++;
	printf("Voce mora perto perto da vitima?\n1-Sim\n2-Nao\n");
	scanf("%d",&morar);
	if (morar == 1)
		cont++;
	printf("Voce devia para a vitima?\n1-Sim\n2-Nao\n");
	scanf("%d",&dinheiro);
	if (dinheiro == 1)
		cont++;
	printf("Voce ja estudou com a vitima?\n1-Sim\n2-Nao\n");
	scanf("%d",&estudar);
	if (estudar == 1)
		cont++;
	if (cont == 5)
	{
		printf("Seu ASSASSINO desumano!!!!\n");
	}
	if (cont==3 || cont==4)
	{
		printf("Voce foi cumplice de um louco!!\n");
	}
	if (cont==2)
	{
		printf("Voce e suspeito de ter cometido um crime serio!!\n");
	}
	if(cont==1 || cont==0)
	{
		printf("Desculpe por desperdicar o seu tempo\n");	
	}	
	printf("Deseja continuar?\n1-Sim\n2-Nao\n");
	scanf("%d",&num);
	
}while(num != 2);
	
}
