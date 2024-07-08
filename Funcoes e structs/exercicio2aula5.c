#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct produto{
float preco;
int codigodoproduto;
char nomedoproduto[50];
};
float desconto_produto();

int main(){

    struct produto pro;

        strcpy(pro.nomedoproduto,"Televisao");
        pro.preco = 355.75;
        pro.codigodoproduto = 122;


        printf("\nProduto:%s",pro.nomedoproduto);
        printf("\nCodigo do Produto:%d",pro.codigodoproduto);
        printf("\nValor do Produto:%.2f",pro.preco);


    float valorfinal = desconto_produto();
    float resultadofinal = pro.preco-valorfinal;


    printf("\nSeu produto ganhou um desconto de 15%% e seu valor passou a ser:%.2f",resultadofinal);


return 0;
}

float desconto_produto(){
    struct produto p;
    p.preco = 355.75;
    return (p.preco*15)/100;

}
