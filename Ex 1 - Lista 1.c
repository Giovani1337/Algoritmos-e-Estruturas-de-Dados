#include<stdio.h>
int maior( int vetor[], int tamanho )
{
    int var;
    if(tamanho == 1)
        return vetor[0];
    else
    {   var = maior(vetor, tamanho-1);
        if (var> vetor[tamanho-1])
        {
            return var;
        }
        else
        {
            return var = vetor[tamanho-1];
        }
    }
}

void main()
{
    int v[4] = {5, 9 , 3, 15 },tam = 4;

    printf("maior eh : %d", maior(v,tam));
}
