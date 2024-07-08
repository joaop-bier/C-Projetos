#include <stdio.h>

int main (){

int vetnumero[3][3];

int i,j;

    for(i = 0;i < 3;i++){
    for(j = 0;j < 3;j++){
        printf("Elemento: [%d],[%d]  :",i,j);
        scanf("%d",&vetnumero[i][j]);
        }
    }
    printf("Os elementos da sua matriz sao:\n");
    for(i = 0;i < 3;i++){
    for(j = 0;j < 3;j++){
        printf(" %d ",vetnumero[i][j]);
        }
        printf("\n");
    }
return 0;
}

