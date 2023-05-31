#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero;
    int divisao;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            divisao++;
        }
    }
    if (divisao == 2)
    {
        printf("O Numero %d é primo.", numero);
    }
    else
    {
        printf("O numero %d não é primo.", numero);
    }
    return 0;
}
