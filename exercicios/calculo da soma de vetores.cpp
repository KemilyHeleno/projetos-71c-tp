#include<stdio.h>
#include<conio.c>
#define tam 10

//aperfeiçoar este programa pq não esta funcionando perfeitamente
int calcula(int vet[tam], int num)
{
	int s=0;
	for (int i=0; i<tam; i++)
	{
		s+=vet[i];
	}
	return s;
}

main()
{
	int vet[tam];
	int num;
	textcolor(0);
	textbackground(15);
	system("cls");
	for (int i=0; i<tam; i++)
	{
		printf("Digite os valores a serem inseridos nos vetores:  ");
		scanf("%d",&num);	
	}
	calcula(vet, num);
	printf("%d-\t",vet[num]);
}
