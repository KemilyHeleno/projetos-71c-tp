#include<stdio.h>
main()
{
int b,c,d,e;
do
{
printf("b=6\nb++\n");
scanf("%d",&b);
if(b==7)
{
printf(":D");
}
else if (b!=7)
{
printf(":c");
}
}while(b!=7);
	do
	{
		printf("\nb=3\nc=8\nb*c\n");
		scanf("%d",&c);
		if(c==24)
	{
		printf(":D");
	}
		else if (c!=24)
	{
		printf(":C");
	}
	}while(c!=24);
do
{
	printf("\nb=5\nc=9\nd=24\nb*c-d\n");
	scanf("%d",&d);
	if(d==21)
	{
		printf(":D");
	}
	else if(d!=21)
	{
	printf(":C");
	}
}while(d!=21);
do
{
	printf("\nb=40\nc=9\ne=50\nb+c+d\n");
	scanf("%d",&e);
	if(e==99)
	{
		printf(":D");
	}
	else if(e!=99)
	{
	printf(":C");
	}
}while(e!=99);
printf("\nespero que tenha gostado:D");
}
