#include<stdio.h>
#include<math.h>

 float main()

 {
     float peso, altura, IMC;
     printf("digite o peso:\n");
     scanf("%f", &peso);
     printf("digite a altura:\n");
     scanf("%f", &altura);
     IMC= peso/(altura*altura)*10000;
     printf("%f", IMC);
  }
