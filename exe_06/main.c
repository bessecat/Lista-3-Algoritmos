#include <stdio.h>
#include <stdlib.h>

int main()
{
     float n,media,soma;

    for(int i=0; i<20; i++){
        printf("Digite a idade:\n");
        scanf("%f",&n);
        soma=soma+n;
    }

    media=soma/20;
    printf("A media dos numeros e: %f",media);

    return 0;
}
