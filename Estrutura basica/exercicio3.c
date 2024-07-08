#include <stdio.h>

int main(){

float real,dolar,conversao;

printf("Digite seu valor em reais:");
scanf("%f",&real);
printf("Digite a cotação do dolar:");
scanf("%f",&dolar);

 conversao = real/dolar;

 printf("O seu valor em reais convertido em dolar é:%.2f",conversao);

return 0;
}
