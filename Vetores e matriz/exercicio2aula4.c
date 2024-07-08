#include <stdio.h>

int main(){

int vet[5] = {1,2,3,4,5};
    int i,numero,soma = 0,divisao;

    for(i = 0;i < 5;i++){
        printf("\ninforme um numero");
        scanf("%d",&vet[i]);
        soma += vet[i];
    }
    divisao = soma/5;
    printf("\nA media dos elementos do seu vetor e:%d",divisao);

return 0;
}
