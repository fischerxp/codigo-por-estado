#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que receba o código de origem de um produto e
imprima a sua procedência. A procedência obedece a seguinte tabela:
1- sul
2- sudeste
3- ou 4- nordeste
5, 6 ou 9- norte
10 ate 15- centro-oeste*/
/*desenvolvedor: @fischerxp*/

int main()
{
    int localiza;
    printf("informe o numero correspondente a regiao: \n");
    scanf("%d", &localiza);
        if (localiza ==1)
            printf("Sul");
        if (localiza ==2)
            printf("Sudeste");
        if (localiza ==3 || localiza ==4)
            printf("Nordeste");
        if (localiza ==5 || localiza == 6 || localiza ==9)
            printf("Norte");
        if (localiza >=10 && localiza <=15)
            printf("Centro-oeste");
    return 0;
}
