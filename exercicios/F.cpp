#include<stdio.h>
main()
{
    float sorvete, cob;
    printf("Digite o valor do sorvete:  ");
    scanf("%f",&sorvete);
    printf("\n1-Chocolate R$10,00\n2-Morango R$8,50\n3-Acai R$15.50\nDigite o numero da sua escolha de cobertura:  ");
    scanf("%f",&cob);
    if (cob == 1)
    {
       sorvete += 10.00;
        printf("\nO valor da compra do sorvete eh %.2f",sorvete);
        }
    else if (cob == 2)
    {
    	sorvete += 8.50;
    	printf("\nO valor da compra eh %.2f",sorvete);
    }
    else if (cob == 3)
    {
        sorvete+=15.50;
        printf("\nO valor da compra eh %.2f",sorvete);
    }
}
