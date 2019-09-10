#include <stdio.h>
#include <stdlib.h>

int ** lista_aumentar(int tam_novo,int ** lista, int tam_anterior)
{
    int **lista_nova,i;
    lista_nova = lista_criar(tam_novo);
    for(i=0;i<tam_anterior;i++)
    {
        if(*(lista[i])!=null)
            lista_inserir(*(lista[i]),lista_nova,tam_novo);
    }
    lista_destruir(lista,tam_anterior);
    return lista_nova;
}
