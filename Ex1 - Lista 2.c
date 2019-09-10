#include<stdio.h>
#include<stdlib.h>

int exclui_elemento(int** vet, int tam, int num)
{
    int i;
    if(vet==NULL)
    {
        return LISTA VAZIA;
    }
    for(i=0; i<tam; i++)
    {
        if(*(vet[i])==num)
        {
            free(vet[i]);
            vet[i] = null;
            return SUCESSO;
        }

    }
    return FALHA;
}







void main()
{

}
