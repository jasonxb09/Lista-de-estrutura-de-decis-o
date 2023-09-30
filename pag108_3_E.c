#include<stdio.h>
#include<math.h>
float main()
{
    float a, b, c, d, r1, r2;
    printf("digite a variavel a: ");
    scanf("%f", &a);
    printf("digite a variavel b: ");
    scanf("%f", &b);
    printf("digite a variavel c: ");
    scanf("%f", &c);
    if((a==0)||(b==0)||(c==0)){
        printf("todos os numeros devem ser diferentes de 0");
    }
    d=pow(b,2)-4*a*c;
    printf("delta: %.2f\n", d);
    if(d<0){
        printf("\nnao tem solucoes reais");
    }
    else if(d=0){
        r1=-b/2*a;
        printf("\nresultado: %f", r1);
    }
    else{
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("resultado 1:  %.2f\n", r1);
        printf("resultado 2:  %.2f\n", r2);
    }
}
