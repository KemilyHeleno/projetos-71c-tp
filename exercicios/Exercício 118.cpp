/*Exerc�cio 118: Fa�a um programa que declare um
array bidimensional como vari�vel local de
dimens�es 10 linhas e 10 colunas para armazenar
valores do tipo int. Fa�a uma fun��o que receba
como par�metro a matriz e n�o retorne nenhum
valor. Nela, sorteie valores no intervalo de 1 a 50 e
atribua �s posi��es da matriz. Retorne para o
programa principal e apresente os elementos no
formato de matriz.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define lin 10
#define col 10
void mostra (int n[lin][col])
{
	for (int i=0; i < lin; i ++)
	{
		for (int j=0; j<col; j++)
		{
			printf("%d\t",n[i][j]);
		}
		printf("\n");
	}
}
void sorteio(int d[lin][col])
{
	for (int i=0; i < lin; i ++)
	{
		for (int j=0; j<col; j++)
		{	
				d[i][j] =rand()%50+1;
				
		}
	}
}
	

main()
{
	int mat[lin][col];
	srand(time(NULL));
	sorteio(mat);
	mostra(mat);
}
