#include<stdio.h>
#define tam 30

/*Fa�a um programa que declare no programa principal uma vari�vel do tipo
do vetor para armazenar 30 elementos do tipo int.
Fa�a uma fun��o que n�o retorna valor, recebe como par�metro o vetor e 
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
