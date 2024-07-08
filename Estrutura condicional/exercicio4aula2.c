#include <stdio.h>

int main(){

int numero,parouimpar;

printf("Informe seu numero:");
scanf("%d",&numero);

parouimpar = numero%2;

    if(parouimpar == 0){
        printf("Seu numero e par");
    }
    else{
        printf("Seu numero e impar");
    }
return 0;
}
