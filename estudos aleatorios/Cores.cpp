#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<string.h>
int main(void)
{
	char comando[9] = "color ";
	char cores[2];
	//comando de regionalizacao
	setlocale(LC_ALL,"Portuguese");
	//titulo do programa
	
	printf("0 = Preto\t8 = Cinza\n1 = Azul\t9 = Azul claro\n2 = Verde\tA = Verde claro\n3 = Verde-água\tB = Verde-água claro\n4 = Vermelho\tC = Vermelho claro\n5 = Roxo\tD = Lilás\n6 = Amarelo\tE = Amarelo claro\n7 = Branco\tF = Branco brilhante\n\n");
	
	printf("cor de fundo: ");
	scanf("%c",&cores[0]);
	getchar();
	printf("cor do texto: ");
	scanf("%c",&cores[1]);
	strcat(comando,cores);
	system(comando);
}
