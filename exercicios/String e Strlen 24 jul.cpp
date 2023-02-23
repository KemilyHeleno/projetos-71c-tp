// O strlen conta os caracteres digitados e retorna um valor de tipo int

#include<stdio.h>
// Para usar uma string é necessario acrescentaruma nova biblioteca
#include<string.h>
main()
{
	char texto[100];
	printf("Digite uma frase: ");
	gets (texto);
	int tam=strlen(texto);
	printf("Tamanho da frase: %d",tam);
}
