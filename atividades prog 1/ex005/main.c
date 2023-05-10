#include <stdio.h>

int main() {

    int a,b,c;

        printf("Digite os tres valores: ");
        scanf("%d,%d,%d", &a,&b,&c);

    if(a + b > c && a + c > b && b + c > a){

        printf("Os tres lados formam um triangulo!\n");
          if(a == b && a == c)
            printf("Equilatero\n");
    else 
          if(a == b || a == c || b == c)
            printf("Escaleno\n");

    } 

    else {

           printf("Os tres lados nao formam um triangulo!\n");  

    }

    return 0;  
}