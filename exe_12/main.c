#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,n1=0,n2=0,n3=0;

    for(int i=0; i<20; i++){
        printf("Digite um numero:\n");
        scanf("%d",&n);
        if(n>=0 && n<=100){
            n1=n1+1;
        }else if(n>101 && n<=200){
            n2=n2+1;
        }else if(n>200){
            n3=n3+1;
        }

    }

    printf("\n%d numeros entre 0 e 100.",n1);
    printf("\n%d numeros entre 101 e 200.",n2);
    printf("\n%d numeros maiores que 200.",n3);
    return 0;
}
