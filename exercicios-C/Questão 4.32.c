//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);
#include <stdio.h>
#include <locale.h>

int main(){

int n,i,k;
int metade;
int asterisco = 0;

  setlocale(LC_ALL,"Portuguese");
  printf("Insira um número ímpar entre 1 e 19 : ");
  scanf("%d",&n);
  metade = n-1/2;

    //For para iniciar a contagem do tamanho do losango;
    for(i=0;i<n;n--){
        //For para fazer/imprimir o espaço;
        for(i=0;i<metade;i++){
            printf("-");
        }
        //printf("\n");
        //For para inserir o asterisco na linha;
        asterisco = asterisco + 1;
        for(i=0;i<asterisco;i++){
            printf("*");
        }
        //For para fazer/imprimir o resto do espaço;
        for(i=0;i<metade;i++){
            printf("-");
        }
        metade = n-1/2;
        //Pula linha;
        printf("\n");
    }

//INFELIZMENTE NÃO CONSEGUIMOS TERMINAR ESTA QUESTÃO;

return 0;
}
