#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,soma;

    for(int i=0; i<10; i++){
        printf("Digite um numero:\n");
        scanf("%d",&n);
        soma=soma+n;
    }

    printf("A soma dos numeros e: %d",soma);
    return 0;
}
