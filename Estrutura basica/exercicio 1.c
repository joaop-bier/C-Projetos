#include <stdio.h>

int main(){

float peso,imc,altura;
    printf("Qual � seu peso:");
    scanf("%f",&peso);
    printf("Qual � sua altura:");
    scanf("%f",&altura);

        imc = peso/(altura*altura);

    printf("O seu IMC � %.2f",imc);
return 0;
}
