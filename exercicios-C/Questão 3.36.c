//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JO�O MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    int bin,resto,i,dec = 0;

    //Para acentua��o//
    setlocale(LC_ALL,"Portuguese");
    printf("Insira um n�mero bin�rio para ser transformado em decimal:");
    scanf("%d",&bin);

    //Pega cada n�mero da direita para esquerda//
    for(i=0;i<6;i++){
        resto = bin - ((bin/10)*10);
        //printf("%d",resto);//
        bin = bin / 10;
        //printf("%d",bin);//
        //Para achar dec//
        dec = dec + resto * pow(2,i);
        //prinf("%d",dec);//
    }

    printf("\nO n�mero bin�rio digitado � igual ao n�mero decimal %d\n",dec);

return 0;
}

