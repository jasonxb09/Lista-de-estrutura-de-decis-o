#include<stdio.h>
int main()
{
    int a,b ,c ,r;
    printf("escreva o primeiro numero: ");
    scanf("%i", &a);
    printf("escreva o segundo numero: ");
    scanf("%i", &b);
    printf("escreva o terceiro numero: ");
    scanf("%i", &c);
    r=a+b+c;
    if(r>=100){
        printf("resultado e: %i", r);
    }
}
