#include <stdio.h>

int main(){

float altura,raio,volume;

printf("Informe a altura do seu cil�ndro:");
scanf("%f",&altura);
printf("Informe o raio do seu cil�ndro:");
scanf("%f",&raio);

volume = 3.14*(raio*raio)*altura;

printf("O volume do seu cil�ndro �:%.2f",volume);
return 0;
}
