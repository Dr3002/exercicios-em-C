//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    int bin,resto,i,dec = 0;

    //Para acentuação//
    setlocale(LC_ALL,"Portuguese");
    printf("Insira um número binário para ser transformado em decimal:");
    scanf("%d",&bin);

    //Pega cada número da direita para esquerda//
    for(i=0;i<6;i++){
        resto = bin - ((bin/10)*10);
        //printf("%d",resto);//
        bin = bin / 10;
        //printf("%d",bin);//
        //Para achar dec//
        dec = dec + resto * pow(2,i);
        //prinf("%d",dec);//
    }

    printf("\nO número binário digitado é igual ao número decimal %d\n",dec);

return 0;
}

