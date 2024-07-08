#include <stdio.h>

int main(){

int numero;

    printf("Digite o numero:");
    scanf("%d",&numero);

        if(numero >0){
            printf("O seu numero e inteiro");
        }else if(numero < 0){
            printf("O seu numero e negativo");
        }if(numero == 0){
            printf("O seu numero e igual a 0");
        }

return 0;
}
