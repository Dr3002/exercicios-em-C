//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);
#include <stdio.h>

#define VEC_LEN 1000

void printNumerosPrimos(int eravector[], int len);


int main(void)
{

    int vetor[VEC_LEN];
    int i, j;

    for (i = 0; i < VEC_LEN; i++) {
	vetor[i] = 1;
    }

    for (i = 2; i < VEC_LEN; i++) {
	if (vetor[i] == 1)
	    for (j = i + 1; j < VEC_LEN; j++) {
		if (vetor[j] == 0)
		    continue;
		else if (j % i == 0) {
		    vetor[j] = 0;
		}
	    }
    }

    printNumerosPrimos(vetor, VEC_LEN);

    return 0;
}


void printNumerosPrimos(int eravetor[], int len)
{

    int i = 1;

    printf("Numeros primos [entre %d-%d]: \n", i, VEC_LEN);
    for (; i < len; i++) {
	if (eravetor[i] == 1)
	    printf("%d\n", i);
    }

}
