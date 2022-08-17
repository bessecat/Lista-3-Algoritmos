#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, i, menor;
    char nome[20],nomenovo[20];

    for(i=0; i<10; i++){
        printf("Digite seu nome: ");
        scanf("%s", nome);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if(idade < menor){
            menor = idade;
            nomenovo[20] = nome[20];
        }
    }
    printf("\nO nome da pessoa mais nova e %s", nomenovo);
    printf("\nA menor idade e: %d\n", menor);

    return 0;
}
