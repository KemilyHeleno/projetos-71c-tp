#include<stdio.h>
int soma(int a, int b)
{
	if (a>1)
	{
		return b +soma(a-1, b);
	}
}
main()
{
	int a=6;
	int b=4;
	printf("%d",soma(a,b));
}
