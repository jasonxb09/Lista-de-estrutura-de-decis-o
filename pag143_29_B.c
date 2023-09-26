#include<stdio.h>

float main()

{
    float n;
    printf("digite o numero a ser analisado: ");
    scanf("%f", &n);
    if (n<0){
        printf("o numero e negativo");
    }
    if (n>=0){
        printf("o numero e positivo");
    }
}
