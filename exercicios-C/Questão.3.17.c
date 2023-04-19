//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);
#include <stdio.h>
#include <locale.h>

int main(){

    double litro_abast = 0.0;
    double soma_litros = 0.0;
    double soma_km = 0.0;
    double cons_total;
    //double soma_inicial_l;

    setlocale(LC_ALL,"Portuguese");
    printf("Informe quantos litros abasteceu(-1 para terminar): ");
    scanf("%lf",&litro_abast);
    //soma_inicial_l = soma_inicial_l + litro_abast;

    while(litro_abast != -1){

        double cons;
        double km = 0.0;

        printf("Informe quantos km dirigiu: ");
        scanf("%lf",&km);

        cons = km / litro_abast;

        printf("O consumo atual é de %.6lf km/l",cons);
        printf("\n\n");

        soma_litros = soma_litros + litro_abast;
        //printf("%lf\n\n",soma_litros);

        soma_km = soma_km + km;
        //printf("%lf\n\n",soma_litros);

        printf("Informe quantos litros abasteceu(-1 para terminar): ");
        scanf("%lf",&litro_abast);

    }
    cons_total = soma_km / soma_litros;

    printf("/nO consumo geral foi de %.6lf km/l",cons_total);

    return 0;
}
