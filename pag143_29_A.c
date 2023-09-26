#include<stdio.h>

int main()
{
    int i;
    printf("digite a idade: ");
    scanf("%i", &i);
    if (i>=18){
        printf("e maior de idade");
    }
    if (i<18){
        printf("e menor de idade");
    }
}
