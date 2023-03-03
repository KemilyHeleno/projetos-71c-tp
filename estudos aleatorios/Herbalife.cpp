#include<stdio.h>
#include<locale.h>
#include<windows.h>
#include<string.h>
#include<time.h>
struct stdados
{
	char nome[100];
	char telefone[100];
	char acesso[40];
};
void mostra_dados(stdados lista)
{
	puts(lista.nome);
	puts(lista.telefone);
}
main()
{
	stdados p1, p2, p3, p4, p5, p6;
	system("color 020");
	printf("eh seu primeiro acesso?\n");
	gets(p1.acesso);
	if( p1.acesso)
	{
		printf("Nome: ");
		gets(p1.nome);
		printf("Telefone: ");
		gets(p1.telefone);
	}
	else if (p1.acesso )
	{
		printf("Nome: ");
		gets(p1.nome);	
	}
	printf("Nome: ");
	gets(p2.nome);
	printf("Telefone: ");
	gets(p2.telefone);
	printf("Nome: ");
	gets(p3.nome);
	printf("Telefone: ");
	gets(p3.telefone);
	printf("Nome: ");
	gets(p4.nome);
	printf("Telefone: ");
	gets(p4.telefone);
	printf("Nome: ");
	gets(p5.nome);
	printf("Telefone: ");
	gets(p5.telefone);
	printf("Nome: ");
	gets(p6.nome);
	printf("Telefone: ");
	gets(p6.telefone);
	mostra_dados(p1);
	mostra_dados(p2);
	mostra_dados(p3);
	mostra_dados(p4);
	mostra_dados(p5);
	mostra_dados(p6);
}
