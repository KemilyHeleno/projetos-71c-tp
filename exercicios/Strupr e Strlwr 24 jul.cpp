#include<stdio.h>
#include<string.h>
main()
{
	char texto[100];
	printf("Digite uma frase: ");
	gets (texto);
	printf("\nTexto 1: %s",strupr(texto));
	printf("\nTexto 2: %s",strlwr(texto));
}
