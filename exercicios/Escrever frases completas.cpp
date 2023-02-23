#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	int icont=0;
	int cont =1;
	printf("Digite uma frase: ");
	do 
	{
		ch=getche();
		icont++;
		if(ch==' ')
		{
			 cont++;
		}
	}while (ch!= '\r');
	printf("\nQuantidade de caracteres: %d",icont);
	printf("\nQuantidade de palavras: %d",cont);
}
