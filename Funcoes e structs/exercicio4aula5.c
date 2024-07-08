#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//funcao
    int maiornumero();
//

int main(){

int numero1,numero2;

  printf("Digite o primeiro numero:");
    scanf("%d",&numero1);
  printf("Digite o segundo maior:");
  scanf("%d",&numero2);

    int maiorvalor = maiornumero(numero1,numero2);

    printf("O maior valor digitado foi:%d",maiorvalor);
return 0;
}

int maiornumero(int num1,int num2){
if (num1 > num2){
    return num1;
}
else{
    return num2;
}
}
