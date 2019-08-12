#include<stdio.h>
//Escreva uma função recursiva que retorne o menor número de um vetor.
int menor( int vetor[], int tamanho )
{
    int var;
    if(tamanho == 1)
        return vetor[0];
    else
    {   var = menor(vetor, tamanho-1);
        if (var< vetor[tamanho-1])
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
    int v[4] = {5, 9 , 3, 1},tam = 4;

    printf("Menor eh : %d", menor(v,tam));
}

