#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,npar;

    for(int i=0; i<20; i++){
        printf("Digite um numero:\n");
        scanf("%d",&n);
        if(n % 2 == 0){
            npar=npar+1;
        }
    }

    printf("\n%d numeros pares.",npar);
    return 0;
}
