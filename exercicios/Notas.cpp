#include<stdio.h>
main()
{
	float nota;
	do 
	{
		printf("Digite uma nota:");
		scanf("%f",&nota);
		if (nota <0 || nota > 10)
		printf("\nValor invalido, Redigite.\n");
	}while (nota <0 || nota >10 );
	printf("Nota digitada: %.1f", nota);
}
