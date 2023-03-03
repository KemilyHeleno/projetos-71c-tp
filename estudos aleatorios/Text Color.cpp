#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<string.h>
void trocacor ();
void troca_cor ()
{
	textcolor(GREEN);//lilás
	printf("C\n");
	textcolor(RED);//vermelho
	printf("T\n"); 
	textcolor(YELLOW);//amarelo
	printf("I\n");
}
void trocacor ()
{
	textbackground(BLUE); //azul-claro
	textcolor(RED); //branco-brilhante
	printf("CTI - UNESP");
} 
main ()
{
	trocacor();
	troca_cor();
	getche();
} 
