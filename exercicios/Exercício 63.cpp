#include<stdio.h>
main()
{
	int g;
	printf("Digite um numero: ");
	scanf("%d",&g);
	for(int i=1; i<=g; i+=2)
	printf("%d\n",i);
}
