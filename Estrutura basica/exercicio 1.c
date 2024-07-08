#include <stdio.h>

int main(){

float peso,imc,altura;
    printf("Qual é seu peso:");
    scanf("%f",&peso);
    printf("Qual é sua altura:");
    scanf("%f",&altura);

        imc = peso/(altura*altura);

    printf("O seu IMC é %.2f",imc);
return 0;
}
