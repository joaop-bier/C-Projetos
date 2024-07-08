#include <stdio.h>

int main(){

int numero;

    printf("Informe uma nota de 0 a 100:");
    scanf("%d",&numero);

    if(numero >= 90){
        printf("voce tirou 90 acima, sua nota e A");
    }else if(numero >=80){
        printf("Parabens tiro 80 a 90,sua nota e B");
    }else if(numero>=70){
        printf("voce tiro 70 a 80,sua nota e C");
    }else if(numero>=60){
        printf("voce tiro 60 a 70, sua nota e D");
    }else{
        printf("Voce tirou 60 pra baixo, sua nota e F");
    }

return 0;
}
