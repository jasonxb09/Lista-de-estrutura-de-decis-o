#include<stdio.h>
int main()
{
    int n;
    printf("digite um numero para verificar se ele e menor que 3: ");
    scanf("%i",&n);
    if (!(n>3)){
        printf("%i",n);
    }
    else{
        printf("e maior que 3");
    }
}
