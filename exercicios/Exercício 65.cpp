#include<stdio.h>
main()
{
	int x; int y;
	printf("digite o valor de x: ",x);
	scanf("%d",& x);
	printf("digite o valor de y: ",y);
	scanf("%d",& y);
	int mult=1;
	for(int i=1; i<=y; i++)
		mult*=x;
	printf("%d",mult);
}
