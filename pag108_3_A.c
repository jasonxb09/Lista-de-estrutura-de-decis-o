#include<stdio.h>

int main()
{
    int a, b, c;
    printf("escreva o valor a: ");
    scanf("%i", &a);
    printf("escreva o valor b: ");
    scanf("%i", &b);
    if(a<b){
        c=b-a;
    }
    else(a>b);{
        c=a-b;
    }
    printf("A diferenca e de %i",c);
}
