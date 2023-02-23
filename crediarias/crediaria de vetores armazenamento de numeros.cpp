#include<stdio.h>
#define tam 30

/*Faça um programa que declare no programa principal uma variável do tipo
do vetor para armazenar 30 elementos do tipo int.
Faça uma função que não retorna valor, recebe como parâmetro o vetor e 
calcule os elementos do vetor de 2 em 2 */ 
void calcula(vet[tam])
{
	int num=1;
	for (int i=0; i<tam; i++)
	{
		vet[i]=num;
		num+=2;
	}
}

main()
{
	int vet[tam];
	calcula(vet);
	for(int i=0; i<tam; i++)
	{
		printf("%d-\t",vet[i]);
	}
}
