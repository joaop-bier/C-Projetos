#include <stdio.h>

int main(){

int idade;

    printf("Informe a idade:");
    scanf("%d",&idade);

        if(idade >= 16){
            printf("Voce e de maior,pode votar");
        }
        else{
            printf("Voce e de menor,nao pode votar");
        };

return 0;
}
