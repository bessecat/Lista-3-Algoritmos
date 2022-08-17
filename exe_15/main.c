#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i=1, f=1;

    printf("Insira o numero: \n");
    scanf("%d" , &n);
    while(i <= n){
        f = f * i;
        i++;
        }
    printf("Resposta: %d." , n, f);

    return 0;
}
