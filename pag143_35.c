#include<stdio.h>
float main()
{
    float n, a, b, c, d, e;
    printf("informe a nota de 0 a 10: ");
    scanf("%f", &n);
    if(n<3.5){
        printf("conceito E");
    }
    else if (n>=3.5 && n<5){
        printf("conceito D");
    }
    else if (n>=5 && n<7){
        printf("conceito C");
    }
    else if (n>=7 && n<9){
        printf("coneceito B");
    }
    else if (n>=9){
        printf("coneito A");
    }
}
