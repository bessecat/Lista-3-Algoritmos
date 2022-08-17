#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,soma=0;

    printf("Informe o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Informe o segundo numero:\n");
    scanf("%d",&n2);

    if(n1<n2){
        for(i;i<=n2;i++){
        soma=soma+i;
        }
        printf("A soma dos numeros do intervalo entre %d e %d e de: %d\n",n1,n2,soma);
    }else if(n1>n2){
        for(i;i<=n1;i++){
        soma=soma+i;
        }
        printf("A soma dos numeros do intervalo entre %d e %d e de: %d\n",n1,n2,soma);
    }else if(n1=n2){
        printf("Os numeros sao iguais, logo a soma e igual a zero.\n");
    }
    return 0;
}
