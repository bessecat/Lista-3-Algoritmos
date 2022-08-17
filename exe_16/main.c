#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantia,i=0, n;
    float preco, valorf;

    printf("Informe a quantia de produtos comprados: \n");
    scanf("%d" , &n);
    while(i < n){
        printf("Informe o preco do produto %d: \n" , i+1);
        scanf("%f" , &preco);
        valorf = valorf + preco;
        i++;
    }
    printf("Valor total: R$ %.2f" , valorf);
    return 0;
}
