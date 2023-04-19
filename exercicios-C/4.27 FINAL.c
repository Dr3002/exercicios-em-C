//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);
#include <stdio.h>
#include <locale.h>

int main(){

  int i,j,k,su,sj,potk;
  int r = 30;
  int terca = 0;
  setlocale(LC_ALL,"Portuguese");

  for(i=0;i<=r;i++){
    for(j=0;j<=r;j++){
      for(k=0;k<=r;k++){
        //printf("(%d,%d,%d)\n",i,j,k);
        su = i*i;
        //printf("1)%d\n",su);
        sj = j*j;
        //printf("2)%d\n",sj);
        potk = k*k;
        //printf("3)%d\n",potk);
        if(su+sj == potk && su != sj && su != potk && sj != potk){
            if(potk < 500){
                printf("(%d,%d,%d)\n",i,j,k);
                terca = terca + 1;
            }
        }
      }
    }
  }
  printf("A quantidade de triplas de pitágoras com resultado menor que 500 é igual a : %d",terca);
return 0;
}
