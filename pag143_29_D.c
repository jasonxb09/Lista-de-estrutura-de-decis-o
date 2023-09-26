#include<stdio.h>

int main()

{
    int a, b;
    printf("digite um lado do retangulo: ");
    scanf("%i", &a);
    printf("digite o lado adjascente do lado anterior: ");
    scanf("%i", &b);
    if(a==b){
        printf("o retangulo tambem e um quadrado:)");
    }
    else if(a!=b){
        printf("o retangulo nao e um quadrado:(");
    }

}
