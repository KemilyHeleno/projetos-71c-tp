#include<stdio.h>
main()
{
	int num; int soma=0; int num2=0;
	do
	{
		scanf("%d",&num);
		soma+=num;
		num2++;
	}
	while (num!=0);
	printf("Soma= %d\nQtde valores lidos= %d", soma, num2);
}
