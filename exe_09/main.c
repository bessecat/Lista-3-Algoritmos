#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,maior=0;

    for(int i=0; i<20; i++){
        printf("Digite um numero:\n");
        scanf("%d",&n);
        if(n>8){
            maior=maior+1;
        }
    }

    printf("\n%d numeros maiores que 8.",maior);
    return 0;
}
