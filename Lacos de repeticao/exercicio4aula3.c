#include <stdio.h>

int main(){

int i,numero,pontuacaopositivo = 0,pontuacaonegativo = 0,pontuacaozero = 0;

    for(i = 0;i < 10; i++){

        printf("Informe um numero:");
        scanf("%d",&numero);

        if(numero > 0){
        pontuacaopositivo++;
    }
        else if(numero < 0){
        pontuacaonegativo++;
    }
        else{
        pontuacaozero++;
    }
    }

    printf("\nNumeros positivos informados:%d",pontuacaopositivo);
    printf("\nNumeros negativo informados:%d",pontuacaonegativo);
    printf("\nNumeros zeros informados:%d",pontuacaozero);

return 0;
}
