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
     if(IMC>=18.5 && IMC<25){
        printf("situa�ao normal");
     }
     else if(IMC>=25 && IMC<30){
        printf("situa�ao de sobrepeso");
     }
     else if(IMC>=30 && IMC<35){
        printf("situa�ao de obesidade grau 1");
     }
     else if(IMC>=35){
        printf("obesidade grau 2");
     }
  }
