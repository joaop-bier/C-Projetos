#include <stdio.h>

int main(){
int matriz[2][3]=
           { {1,6,4},
            {5,3,2} };

int transportamatriz[3][2];

    printf("Matriz:\n");

    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
            transportamatriz[j][i] = matriz[i][j];
            printf("%d",matriz[i][j]);
        }
        printf("\n");
    }


    printf("A matriz transporta e:\n");

    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 2;j++){
            printf("%d",transportamatriz[i][j]);
        }
        printf("\n");
    }
return 0;
}
