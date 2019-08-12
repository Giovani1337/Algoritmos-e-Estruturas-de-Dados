#include<stdio.h>
/*A Série de Fibonacci é uma série matemática deﬁnida da seguinte forma: Os dois primeiros termos da série são o número 1,
do terceiro termo em diante, o termo será o resultado da soma dos dois termos imediatamente anteriores.
Abaixo, temos os oito primeiros termos da série:
1 1 2 3 5 8 13 21 ...
Escreva uma função recursiva que retorne o enésimo termo da série de ﬁbonacci. */
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
