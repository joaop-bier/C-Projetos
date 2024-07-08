#include <stdio.h>

int main(){

int numero;
int fatorial = 1;

    printf("Informe um numero:");
    scanf("%d",&numero);

        if(numero < 0){
            printf("Valor invalido,nao e possivel calcular numeros negativos");
    }
        else {
            int i = numero;
            while(i > 0){
            fatorial *= i;
            i--;
        }
    printf("A fatorial do seu numero e %d",fatorial);
    }



return 0;
}
