// FUNCAO RECURSIVA 
// ex. emprimir os numeros ate 0

#include <stdio.h>
#include <stdlib.h>

void imprimir(int x)
{
    if(x == 0)
        printf("%d ", x);
    else{
        //printf("%d ", x); DECRESCENTE
        imprimir(x - 1);
        printf("%d ", x);// CRESCENTE
    }   
}

int main()
{
    int n;
    scanf("%d", &n);

    imprimir(n);

    return 0;
}

