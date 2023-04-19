//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);

#include<stdio.h>

int perfect(int x);

int main()
{

    int a, b, c;

    printf("\nInsira quantos numeros quer: ");
    scanf("%d", &a);
    printf("A lista de números entre 1 e  %d é\n", a);

    for (c = 1; c <= a; c++) {

	b = perfect(c);
	if (b == c) {
	    printf("%d\n", c);
	}

    }

    return 0;
}

int perfect(int x)
{
    int i, sum = 0;

    for (i = 1; i < x; i++) {
	if (x % i == 0)
	    sum += i;
    }

    return sum;
}
