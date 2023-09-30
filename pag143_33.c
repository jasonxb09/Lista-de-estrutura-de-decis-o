#include<stdio.h>
int main ()
{
    int n;
    printf("escreva o numero: ");
    scanf("%i", &n);
    if(n<0){
        printf("o numero e negativo");
    }
    else if(n==0){
        printf("o numero e zero");
    }
    else{
        printf("o numero e positivo");
    }
}
