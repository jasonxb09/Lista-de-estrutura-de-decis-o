#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, d;
    printf("reconhecer valores divisiveis por 2 e 3 simultaneamente\n");
    printf("apresente 4 valores para fazer a verificacao: ");
    scanf("%i %i %i %i",&a,&b,&c,&d);
    if((a%2==0)&&(a%3==0)){
        printf("%i ",a);
    }
    if((b%2==0)&&(b%3==0)){
        printf("%i",b);
    }
    if((c%2==0)&&(c%3==0)){
        printf(" %i ",c);
    }
    if((d%2==0)&&(d%3==0)){
        printf("%i",d);
    }
}
