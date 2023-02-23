#include<stdio.h>
main()
{
	char texto[100];
	printf("Digite uma frase: ");
	gets(texto);//o gets armazena dados da variavel em char que se torna sting
	printf("\nFrase digitada: ");
	puts(texto);//o puts mostra dados armazenados em gets ambos possuem o S de string
}
