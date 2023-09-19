#include<stdio.h>

int main()
{
    int a, b, c;
    printf("escreva o primeiro valor:  ");
    scanf("%i", &a);
    printf("escreva o segundo valor para ser calculado a diferença entre eles:  ");
    scanf("%i", &b);
    c=a-b;
    if(c<0);
    {
        printf("a diferença e menor que zero");
    }
    else;
    {
        prinf("a diferença e maior ou igual a zero");
    }
}

