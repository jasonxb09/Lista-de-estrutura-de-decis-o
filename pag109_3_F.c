#include<stdio.h>
int main()
{
    int a, b, c,d;
    printf("digite o primeiro valor: ");
    scanf("%i",&a);
    printf("digite o segundo valor: ");
    scanf("%i", &b);
    printf("digite o terceiro valor: ");
    scanf("%i", &c);
    if(a>b){
     d=a;
     a=b;
     b=d;
    }
    if(b>c){
     d = b;
     b = c;
     c = d;
    }
    if(a>b){
     d=a;
     a=b;
     b=d;
    }
    printf("[%i %i %i", a,b,c);
}
