#include<stdio.h>

int main()
{
    int n, p;
    printf("digite o numero a ser transformado em positivo: ");
    scanf("%i", &n);
    if(n<0){
        p=n*-1;
    }
    if(n>0){
        p=n*1;
    }
    printf("\nresultado: %i", p);
}
