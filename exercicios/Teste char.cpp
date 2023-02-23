#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	char b;
	int cont=0;
	printf("Digite a letra de inicio: ");
	a=getche();
	printf("\nDigite a letra final: ");
	b=getche();
	for (char teste= a; teste<= b; teste++)
	{
			putchar(teste);
			cont++;
	}
	
	printf("\n\nNumero de letras entre as duas escolhidas: %d",cont);
}
