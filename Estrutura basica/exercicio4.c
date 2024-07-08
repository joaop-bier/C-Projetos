#include <stdio.h>

int main(){

float horas,minutos;

printf("Quantas horas gostaria de informar:");
scanf("%f",&horas);

minutos = horas*60;

printf("As horas informadas convertida para minutos é: %.3f",minutos);

return 0;
}
