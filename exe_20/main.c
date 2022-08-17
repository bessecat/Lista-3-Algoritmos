#include <stdio.h>
#include <stdlib.h>

int main()
{
    int animal, dog=0, cat=0,i=0,n;

    printf("Informe a quantidade de animais: \n");
    scanf("%d" , &n);
    while(i < n){
    printf("O animal %d  e um cachorro(0) ou um gato(1)?. \n" , i+1);
    scanf("%d", &animal);

    if(animal == 0){
        dog += 1;
        i++;
    }else if (animal ==1){
        cat += 1;
        i++;
    }else
        printf("Valor invalido.\n");
    }
    printf("Existem %d cachorros e %d gatos." , dog, cat);
    return 0;
}
