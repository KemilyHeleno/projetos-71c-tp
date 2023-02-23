#include<stdio.h>
main()
{
	int x, z;
	printf("Digite a tabuada desejada: ");
	scanf("%d",&x);
	for (int y=0; y<=10; y++)
	{
		z=x*y;
		printf("%d x %d = %d\n",x,y,z);
	}
}
