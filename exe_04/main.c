#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int n;

    printf("Digite seu nome:\n");
    scanf("%s", nome);
     printf("Digite o numero de repeticoes:\n");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("\nNome: %s\n",nome);
    }

    return 0;
}
