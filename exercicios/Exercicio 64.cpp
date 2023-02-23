#include<stdio.h>
main()
{
	int t; int h; int i;
	printf("Digite um numero: ");
	scanf("%d",&t);
	for (i=1; i<=10; i++)
	{
		h= t*i;
		printf("%d x %d = %d\n",t,i,h);
	}
}
