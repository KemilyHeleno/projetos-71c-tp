#include<stdio.h>
main()
{
	char maiusc, minusc;
	printf("Maiuscula\tMinuscula\n");
	for(minusc='a', maiusc='A'; maiusc<='F'; maiusc++, minusc++)
	{
		printf("%c\t\t%c\n",maiusc, minusc);
	}
}
