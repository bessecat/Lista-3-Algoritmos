#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, menor=500, maior=0, altura;

    while(i<15){
        printf("Digite a altura: ");
        scanf("%d", &altura);

        if(altura < menor){
            menor = altura;

        }else if(altura > maior){
            maior = altura;
        }
    i++;
    }
    printf("\nA altura mais baixa e: %d", menor);
    printf("\nA altura mais alta e: %d", maior);
    return 0;
}
