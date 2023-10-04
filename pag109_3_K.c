#include<stdio.h>
int main()
{
    int n;
    printf("escreva o valor para saber se ele esta entre 1 e 9: ");
    scanf("%i",&n);
    if((n>=1)&&(n<=9)){
        printf("esta na faixa permitida");
    }
    else{
        printf("nao esta na faixa permitida");
    }
}
