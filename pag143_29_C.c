#include<stdio.h>

int main()
{
    int a, b, c;
    printf("escreva o primeiro valor:  ");
    scanf("%i", &a);
    printf("escreva o segundo valor para ser calculado a diferenša entre eles:  ");
    scanf("%i", &b);
    c=a-b;
    if(c<0);
    {
        printf("a diferenša e menor que zero");
    }
    else;
    {
        prinf("a diferenša e maior ou igual a zero");
    }
}

