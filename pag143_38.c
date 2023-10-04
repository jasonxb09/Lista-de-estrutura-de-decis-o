#include<stdio.h>
int main()
{ 
    float c,d,e;
    int a,b,o;
    scanf("%i %i",&a,&b);
    if((a !=0)&&(b != 0))
    {
        scanf("%i",&o);
        switch(o)
        {
            case 0:
                printf("soma: %i", a+b);
            break;
            case 1:
                printf("subtracao: %i", a-b);
            break;
            case 2:
                printf("produto: %i", a*b);
            break;
            case 3:
                c = a;
                d = b;
                e = c/d;
                printf("divisao: %f", e);
            break;        
        }
    }
}