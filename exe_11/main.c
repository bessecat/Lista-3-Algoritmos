#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1;

    for(int i=0; i<20; i++){
        printf("Digite um numero:\n");
        scanf("%d",&n);
        if(n>=0 && n<=100){
            n1=n1+1;
        }
    }

    printf("\n%d numeros entre 0 e 100.",n1);
    return 0;
}
