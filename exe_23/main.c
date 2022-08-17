#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=0,quant, can, num;
    float ac = 0;
    int c3=0, c5=0, c8=0, c11=0, c13=0;

    printf("Insira quantas casas participarão da pesquisa. \n");
    scanf("%d", &quant);


    while (i < quant)
    {

        printf("Informe o canal: (3, 5, 8, 11 ou 13). \n");
        scanf("%d", &can);
        printf("Informe a quantidade de pessoas que estavam assistindo. \n");
        scanf("%d", &num);
        ac = ac + num;

        switch(can)
        {
        case 3:
            c3 = c3 + num;
            break;
        case 5:
            c5 = c5 + num;
            break;
        case 8:
            c8 = c8 + num;
            break;
        case 11:
            c11 = c11 + num;
            break;
        case 13:
            c13 = c13 + num;
            break;
        default:
            printf("canal invalido.\n");
        }
        i++;
    }
    printf("%d pessoas estavam assistindo o canal  3.\n" , c3);
    printf("%d pessoas estavam assistindo o canal  5.\n" , c5);
    printf("%d pessoas estavam assistindo o canal  8.\n" , c8);
    printf("%d pessoas estavam assistindo o canal 11.\n" , c11);
    printf("%d pessoas estavam assistindo o canal 13.\n" , c13);
    printf("A media de espectadores do canal  3 é: %.2f%\n", (c3/ac)*100);
    printf("A media de espectadores do canal  5 é: %.2f%\n", (c5/ac)*100);
    printf("A media de espectadores do canal  8 é: %.2f%\n", (c8/ac)*100);
    printf("A media de espectadores do canal 11 é: %.2f%\n", (c11/ac)*100);
    printf("A media de espectadores do canal 13 é: %.2f%\n", (c13/ac)*100);
    return 0;
}
