#include <stdio.h>

int main () {
    float numero, k;
    int i;

    printf("Digite um número para descobrir sua raiz quadrada aproximada:");
    scanf ("%f", &numero);

    k = 1;

    for ( i = 1; i <= 12; i++)
    {
        k = (k + (numero/k))/2;
        
        if (i == 12)
        {
            printf ("A raiz quadra aproximada de %f é = %f", numero, k);
        }
        
    }
    
}