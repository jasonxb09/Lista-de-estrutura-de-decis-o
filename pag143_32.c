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
     printf("%f\n", IMC);
     if(18.5<=IMC<25){
        printf("situaçao normal");
     }
     else if(25<=IMC<30){
        printf("situaçao de sobrepeso");
     }
     else if(30<=IMC<35){
        printf("situaçao de obesidade grau 1");
     }
     else if(35<IMC){
        prinf("obesidade grau 2");
     }
  }
