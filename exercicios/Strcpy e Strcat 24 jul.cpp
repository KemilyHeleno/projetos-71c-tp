#include<stdio.h>
#include<string.h>
main()
{
	char t1[100], t2[100];
	strcpy (t1,"Aula1");
	strcpy(t2,"Aula2");
	strcat(t1,t2);
	puts(t1);
	puts(t2);
}
