#include<stdio.h>
#include<math.h>

int main()

{
    int n, r;
    printf("digite o numero a ser analisado: ");
    scanf("%i", &n);
    r=n%2;
    if(r==0){
        printf("o numero e par");
    }
    else if(r!=0){
        printf("o numero e impar");
    }
}
