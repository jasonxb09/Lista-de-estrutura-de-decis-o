#include<stdio.h>
float main()
{
    int a,b,c,d,e,maior,menor;
    printf("escreva o primeiro valor: ");
    scanf("%i",&a);
    printf("escreva o segundo valor: ");
    scanf("%i",&b);
    printf("escreva o terceiro valor: ");
    scanf("%i",&c);
    printf("escreva o quarto valor: ");
    scanf("%i",&d);
    printf("escreva o quinto valor: ");
    scanf("%i",&e);
    maior=a;
    menor=a;
    if(b>maior){
        maior=b;
    }
    else if (b<menor){
        menor=b;
    }
    if(c>maior){
        maior=c;
    }
    else if (c<menor){
        menor=c;
    }
    if(d>maior){
        maior=d;
    }
    else if (d<menor){
        menor=d;
    }
    if(e>maior){
        maior=e;
    }
    else if (e<menor){
        menor=e;
    }
    printf("maior valor: %i\n",maior);
    printf("menor valor: %i",menor);
}
