/*Faça um programa que leia as notas de 10 alunos e armazene em um vetor de tipo float. Apos a leitura mostre o vetor e a media geral da sala*/
#include<stdio.h>
#define aluno 10
main()
{
	float nota;
	float media=0;
	float vet[aluno];
	for(int i=0; i<aluno; i++)
	{
		printf("Digite a sua nota: ");
		scanf("%f",&vet[i]);
		media+=vet[i];
	}
	printf("%f",media/10);
	printf("\n\t\tposicoes pares\t\t");
	for (int i=0; i<aluno; i+=2)
	{
		printf("%d\t",vet[i]);
	}
}
