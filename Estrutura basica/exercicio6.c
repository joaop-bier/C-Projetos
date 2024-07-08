#include <stdio.h>

int main(){

float altura,raio,volume;

printf("Informe a altura do seu cilíndro:");
scanf("%f",&altura);
printf("Informe o raio do seu cilíndro:");
scanf("%f",&raio);

volume = 3.14*(raio*raio)*altura;

printf("O volume do seu cilíndro é:%.2f",volume);
return 0;
}
