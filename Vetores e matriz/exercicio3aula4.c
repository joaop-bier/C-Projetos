#include <stdio.h>

int main(){

    int vet[5]={1,2,3,4,5};
    int vet2[5]={1,2,3,4,5};
    int resultado[5];

    for(int i = 0;i < 5;i++){
        printf("Informe o numero do vetor 1:");
        scanf("%d",&vet[i]);
    }

        printf("\nNumeros do vetor 1 registrado...\n\n");

    for(int i = 0;i < 5;i++){
        printf("Informe o numero do vetor 2:");
        scanf("%d",&vet2[i]);
    }

        printf("\nNumeros do vetor 2 registrado...\n\n");

    for(int i = 0;i < 5;i++){
        resultado[i] = vet[i]*vet2[i];
        printf("\n%d",resultado[i]);
    }
return 0;
}
