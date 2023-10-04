#include<stdio.h>
float main()
{
     float c,e,t;
     printf("valor da compra: ");
     scanf("%f",&c);
     printf("valor entregue:");
     scanf("%f", &e);
     t=e-c;
     if(t>=0){
        printf("valor suficiente\n");
        printf("troco a ser devolvido: RS%.2f", t);
     }
     else{
        printf("valor insuficiente");
     }
}
