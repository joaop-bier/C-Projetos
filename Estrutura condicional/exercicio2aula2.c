#include <stdio.h>

int main(){

int numero1,numero2,numero3,numeromaior;

    printf("Informe seu primeiro numero:");
    scanf("%d",&numero1);
    printf("Informe seu segundo numero:");
    scanf("%d",&numero2);
    printf("Informe seu terceiro numero:");
    scanf("%d",&numero3);

        if(numero1 >numero2 && numero1 > numero3){
            printf("O maior valor e: %d",numero1);
        }
        else if(numero2 > numero1 && numero2 > numero3){
            printf("O maior valor e %d",numero2);
        }
        if(numero3 > numero1 && numero3 > numero2){
            printf("O maior valor e %d",numero3);
        }

return 0;
}
