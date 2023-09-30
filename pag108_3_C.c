#include<stdio.h>

float main()
{
    float n1, n2, n3, n4, md;
    printf("digite a primeira nota: ");
    scanf("%f", &n1);
    printf("digite a segunda nota: ");
    scanf("%f", &n2);
    printf("digite a terceira nota: ");
    scanf("%f", &n3);
    printf("digite a quarta nota: ");
    scanf("%f", &n4);
    md=(n1+n2+n3+n4)/4;
    printf("media aritmetica: %f", md);
    if(md<5){
        printf("\nreprovado");
    }
    else if(md>5){
        printf("\naprovado");
    }
}
