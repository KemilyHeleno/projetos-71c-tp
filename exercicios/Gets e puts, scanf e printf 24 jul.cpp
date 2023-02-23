// O puts pode ser substituido por printf
//o gets so pode ser substituido por scanf se for digitada uma unica palavra

#include<stdio.h>
main()
{
	char texto[100];
	printf("digite uma frase: ");
	gets(texto); //scanf("%s",texto);
	printf("\nFrase digitada : ");
	puts(texto); //printf("%s",texto);
}
