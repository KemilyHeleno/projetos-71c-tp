/*Faca um programa que efetue valores em um intervalo de 0 a 50 e armazene em 10 posicoes de um vetor*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define tam 10
main()
{
	int vet[tam];
	int soma=0;
	srand(time(NULL));
	for (int i=0; i<tam; i++)
	{
		vet[i]=rand()%51;
		printf("%d\t",vet[i]);
		soma+=vet[i];	
	}
	printf("\na soma eh: %d",soma);
}
