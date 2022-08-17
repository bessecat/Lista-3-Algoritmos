#include <stdio.h>
#include <stdlib.h>

int main()
{
    int km = 0, i = 0, n;

    printf("Inicio -> km 0.\n");

    while (km < 4000){

    printf("Cidade %d do trajeto, informe os Km percorridos desde a ultima cidade: \n" , i+1);
    scanf("%d", &n);
    km = km + n;
    i++;
    }
    printf("Fim -> Cidade: %d. %d Km percorridos." , i, km);
    return 0;
}
