#include<stdio.h>
main()
{
    float sorvete, cobertura, valor;
    printf("Digite o valor do sorvete  ");
    scanf("%f",&sorvete);
    printf("\n1-Chocolate R$10,00\n2-Morango R$8,50\n3-AcaiR$15.50\nDigite o numero da sua escolha de cobertura  ");
    scanf("%f",&cobertura);
    if (cobertura = 1)
    {
       valor= sorvete + 10.00;
  printf("\nO valor da compra do sorvete eh %.2f",valor);
        }
    else if (cobertura = 2)
    {
    valor = sorvete + 8.50;
printf("\nO valor da compra eh %.2f",valor);
        }
    else if (cobertura = 3)
    {
        valor = sorvete+15.50;
        printf("\nO valor da compra eh %.2f",valor);
        }
}