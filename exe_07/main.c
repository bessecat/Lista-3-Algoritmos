#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,maiorid=0;

    for(int i=0; i<20; i++){
        printf("Digite a idade:\n");
        scanf("%d",&n);
        if(n>=18){
            maiorid=maiorid+1;
        }
    }

    printf("\n%d pessoas sao maiores de idade.",maiorid);

    return 0;
}
