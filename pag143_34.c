#include<stdio.h>
int main()
{
    int n;
    printf("digite o numero ");
    scanf("%i", &n);
    if(n<3){
        printf("o numero e menor que 3");
    }
    else if(n==3){
        printf("o numero e igual a 3");
    }
    else if(n>3){
        printf("o numero e maior que 3");
    }
}
