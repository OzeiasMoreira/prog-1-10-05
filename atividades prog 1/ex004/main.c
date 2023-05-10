#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{

   float A,B,C;
   float delta,x1,x2; 
      
       printf("Entre com os coeficientes da equaçao\n");
       scanf("%f,%f,%f", &A,&B,&C);

    delta = B*B-4.*A*C;

    if(delta >= 0){

        x1 = (-B+sqrt(delta))/(2.*A);
        x2 = (-B-sqrt(delta))/(2.*A);
           
           printf("A equaçao dada e: %fX^2+%fX+%f\n", A,B,C);
           printf("As raizes sao:  1a.raiz=%f 2a.raiz=%f\n", x1,x2);
    } 

    else {

        printf("Nao existem raizes: ");
    }  
    return 0;
}
