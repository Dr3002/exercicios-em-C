#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

  int i,j,k,su,sj,potk;
  int terca = 0;
  int repet = 22;

  setlocale(LC_ALL,"Portuguese");
  for(i=0;i<=repet;i++){
    for(j=0;j<=repet;j++){
      for(k=0;k<=repet;k++){
        //printf("(%d,%d,%d)\n",i,j,k);
        su = i*i;
        //printf("1)%d\n",si);
        sj = j*j;
        //printf("2)%d\n",sj);
        potk = k*k;
        //printf("3)%d\n",potk);
        if(su+sj == potk){
            printf("(%d,%d,%d)\n",i,j,k);
            terca = terca + 1;
        }
      }
    }
  }
  printf("\nA quantidade de triplas de pitágoras menor que 500 é igual a : %d\n",terca);
return 0;
}
