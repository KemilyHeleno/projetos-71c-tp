#include<stdio.h>
#include<string.h>
main()
{
	char t1[100], t2[100];
	strcpy (t1,"Aula1");
	strcpy(t2,"Aula2");
	puts(t1);
	puts(t2);
	if (strcmp/*sctcmpi*/(t1,t2)==0)
	printf("Strings sao iguais");
	else
	printf("Strings sao diferentes");
}
