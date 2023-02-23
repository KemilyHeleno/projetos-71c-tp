/*Exercício 119: Faça um programa que contenha
uma função para ler os elementos de uma matriz
mat de 3x4 (3 linhas e 4 colunas declarada como
local) do tipo float. Faça outra função que receba a
matriz como parâmetro e retorne para o programa
principal a soma de todos os elementos. Imprima no
programa principal o conteúdo da matriz e a soma.*/
#include<stdio.h>
#define col 4
#define lin 3
void leitura(float m[lin][col])
{
	for(int i=0; i<lin; i++)
	{
		for(int j=0; j<col; j++)
		{
			printf("\nDigite um numero para [%d] [%d] :  ",i,j);
			scanf("%f",&m[i][j]);
		}
	}
}
void mostra (float n[lin][col])
{
	float soma;
		for (int i=0; i < lin; i ++)
		{
			for (int j=0; j<col; j++)
			{
				printf("%.1f\t",n[i][j]);	
				soma+=n[i][j];
			}
			printf("\n");
		}
		printf("soma = %1.f\n",soma);
}
main()
{
	float mat[lin][col];
	leitura(mat);
	mostra(mat);
}
