#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numeroint();

int main(){

int nume;

    printf("Informe um numero:");
    scanf("%d",&nume);
    int resultado = numeroint(nume);

    printf("O valor digitado convertido para o valor em quadrado e:%d",resultado);

return 0;
}

int numeroint(int num){
return num*num;
}
