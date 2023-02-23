#include<stdio.h>
#include<conio.h>
main()
{
	char teste;
	printf("Digite um caractere: ");
	teste= getch();
	printf("\n");
	putchar(teste);
	printf("\nDigite novamente: ");
	teste= getche();
	printf("\n");
	putchar(teste);
	printf("\nDigite outra vez: ");
	teste= getchar();
	printf("\n");
	putchar(teste);
}
