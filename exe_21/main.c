#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fumante=0, naofumante=0,i=1,n;

    printf("Para fazer sua reserva, digite 0 ou 1. \n");


    while (i <= 50)
    {

    printf("Digite a opcao 0 para fazer reserva na area dos fumantes e 1 na area dos nao fumantes. \n");
    scanf("%d", &n);

        if (n == 0)
        {
            if(fumante < 25)
            {
                fumante += 1;
                i++;
            }
            else
                printf("Nao ha mais reservas na area de fumantes. \n");
        }
        else if (n == 1)
        {
            if(naofumante < 25)
            {
                naofumante += 1;
                i++;
            }
            else
            {
                printf("Nao há mais reservas na area de nao fumantes. \n");
            }

        }
        else
        printf("Valor incorreto. \n");

    }

    return 0;
}
