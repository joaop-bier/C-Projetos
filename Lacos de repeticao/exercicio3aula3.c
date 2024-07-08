#include <stdio.h>

int main(){

int numero;

    do{
        printf("Informe um numero de 1 a 10:");
        scanf("%d",&numero);
    }while(numero<1 || numero>10);

printf("Numero válido");
return 0;
}
