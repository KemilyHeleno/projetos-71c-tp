#include<stdio.h>
main()
{
	int x; int y;
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite o valor de y: ");
	scanf("%d",&y);
	int soma=0;
	for (int i=1; i<=y; i++)
		soma+=x;
	printf("%d",soma);
}
