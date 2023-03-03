#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
int main(void)
{
	char comando[9] = "color 04";
	char cores[2];
	//comando de regionalizacao
	setlocale(LC_ALL,"Portuguese");
	//titulo do programa
	
	system("color 4");
	system("color 8");
	printf("cor de fundo: ");
	printf("\ncor do texto: ");
	system(comando);
	printf("ola mundo");
	getch();
	putchar(cores[15]);
}
