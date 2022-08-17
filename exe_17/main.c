#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant,i=0, n=1;
    float b, valor=0, p;

    while(i == 0){
    printf("Insira o peso do prato %d (Kg): \n" , n);
    scanf("%f" , &p);
    printf("Insira o valor da bebida %d (R$): \n" , n);
    scanf("%f" , &b);
    valor = ((p*15) + b);
    printf("Valor total: R$ %.2f \n"  , valor);
    if (b == 0 && p == 0){
        i++;
    }
    n++;
    }

    return 0;
}
