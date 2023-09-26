#include<stdio.h>

float main()
{
    float n1, n2, n3, p1, p2, p3, m;
    printf("digite a nota 1: ");
    scanf("%f", &n1);
    printf("digite a nota 2: ");
    scanf("%f", &n2);
    printf("digite a nota 3: ");
    scanf("%f", &n3);
    printf("digite o peso da nota 1: ");
    scanf("%i", &p1);
    printf("digite o peso da nota 2: ");
    scanf("%i", &p2);
    printf("digite o peso da nota 3: ");
    scanf("%i", &p3);
    m=(n1*p1)+(n2*p2)+(n3*p3)/p1+p2+p3;
    if(m>=7){
        printf("aprovado");
    }
    else if(m<7){
        printf("reprovado");
    }
}
