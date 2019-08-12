#include<stdio.h>

int fibonacci( int termo )
{
    if (termo == 1 || termo == 2 )
        return 1;
    else
    {
        return fibonacci(termo-1) + fibonacci(termo-2);
    }
}
void main()
{
        int t;
        printf("Digite o termo: \n");
        scanf("%d", &t);
        printf("O valor eh: %d", fibonacci(t));
}
