#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, media, n=0, i=0;

    printf("Informe a quantidade de alunos: \n");
    scanf("%d" , &n);
    while(i < n){
    printf("Nota 1 do aluno %d: \n" , i+1);
    scanf("%d" , &n1);
    printf("Nota 2 do aluno %d: \n" , i+1);
    scanf("%d" , &n2);
    media = (n1+n2)/2;
    if(media>60){

        printf("O aluno %d com media %d, foi APROVADO.\n", i+1, media);

    }else{

        printf("O aluno %d com media %d, foi REPROVADO.\n", i+1, media);

    }
    i++;
    }
    return 0;
}
