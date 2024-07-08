#include <stdio.h>

int main(){

float altura1,altura2,altura3,media;

printf("Qual seria a altura da primeira pessoa:");
scanf("%f",&altura1);
printf("Qual seria a altura da segunda pessoa:");
scanf("%f",&altura2);
printf("Qual seria a altura da terceira pessoa:");
scanf("%f",&altura3);

    media = (altura1+altura2+altura3)/3;

printf("A media das alturas das pessoas informadas é:%.2f",media);
return 0;
}
