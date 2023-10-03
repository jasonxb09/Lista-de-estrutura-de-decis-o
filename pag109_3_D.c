#include<stdio.h>

float main()
{
    float n1, n2, n3, n4, md1, ne, md2;
    printf("digite a primeira nota: ");
    scanf("%f", &n1);
    printf("digite a segunda nota: ");
    scanf("%f", &n2);
    printf("digite a terceira nota: ");
    scanf("%f", &n3);
    printf("digite a quarta nota: ");
    scanf("%f", &n4);
    md1=(n1+n2+n3+n4)/4;
    printf("media aritmetica: %f", md1);
    if(md1>=7){
        printf("\naprovado");
    }
     else if(md1<7){
        printf("\ndigite a nota do exame: ");
        scanf("%f", &ne);
        md2=(ne+md1)/2;
        if(md2>=5){
            printf("aprovado em exame\n");
            printf("%f", md2);
        }
        else if(md2<5){
            printf("reporvado\n");
            printf("media aritmetica apos exame%f", md2);
        }
     }
}
