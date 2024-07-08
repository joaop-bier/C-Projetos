#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
char nome[50];
int matricula;
float nota1;
float nota2;
float nota3;
};

int main(){

struct pessoa p;

float somanotas;

    strcpy(p.nome,"Joao");
    p.matricula = 12333;
    p.nota1 = 8.5;
    p.nota2 = 6.5;
    p.nota3 = 7.9;

printf("\nAluno:%s",p.nome);
printf("\nN'da matricula:%d",p.matricula);
printf("\nNotas tiradas nas disciplinas portugues,matematica e quimica: %.1f , %.1f  , %.1f \n",p.nota1,p.nota2,p.nota3);

    somanotas = (p.nota1+p.nota2+p.nota3)/3;

printf("\nA media das notas nas disciplinas foi:%.1f",somanotas);


return 0;
}
