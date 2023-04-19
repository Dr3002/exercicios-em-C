//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);
#include <stdio.h>

#define FLOOR_DIM 50
#define INIT_XPOS 25
#define INIT_YPOS 25
#define PI 3.14159265358979323846264338327

int Floor[FLOOR_DIM][FLOOR_DIM] = { {0} };

int xpos = INIT_XPOS;
int ypos = INIT_YPOS;
enum Para { BAIXO, CIMA };

void walk(const int dir, const int Para);
void print_matrix(void);
int get_input(void);
int normalize_dir(int dir);

int main()
{

    int input;
    int Para = BAIXO;
    int dir = 0;
    while (1) {
	input = get_input();
	switch (input) {
	case 1:
	    Para = BAIXO;
	    break;
	case 2:
	    Para = CIMA;
	    break;
	case 3:
	    dir -= 90;
	    dir = normalize_dir(dir);
	    printf("Direção em grau: %d\n", dir);
	    break;
	case 4:
	    dir += 90;
	    dir = normalize_dir(dir);
	    printf("Direção do grau: %d\n", dir);
	    break;
	case 5:
	    walk(dir, Para);
	    break;
	case 6:
	    print_matrix();
	    break;
	case 9:
	    print_matrix();
	    return 0;
	default:
	    printf("Valor invalido, tente denovo\n");
	}
    }
}

int normalize_dir(int dir)
{
    int res;

    if (dir < 0)
	res = 360 + dir;
    else if (dir >= 360)
	res = dir - 360;
    else
	res = dir;

    return res;

}

void walk(const int dir, const int Para)
{

    int step;
    int i;
    int xposmodifier;
    int yposmodifier;

    if (dir == 0) {
	xposmodifier = 1;
	yposmodifier = 0;
    } else if (dir == 90) {
	xposmodifier = 0;
	yposmodifier = -1;
    } else if (dir == 180) {
	xposmodifier = -1;
	yposmodifier = 0;
    } else if (dir == 270) {
	xposmodifier = 0;
	yposmodifier = 1;
    }

    printf("quantos passos? ");
    scanf("%d", &step);

    for (i = 0; i < step; i++) {

	xpos += xposmodifier;
	if (xpos < 0) {
	    xpos = 0;
	} else if (xpos > FLOOR_DIM) {
	    xpos = FLOOR_DIM;
	}

	ypos += yposmodifier;
	if (ypos < 0) {
	    ypos = 0;
	} else if (ypos > FLOOR_DIM) {
	    ypos = FLOOR_DIM;
	}

	if (Para == CIMA) {
	    Floor[ypos][xpos] = 1;
	}
    }


}

int get_input(void)
{
    int input;
    printf("\n"
	   "1) Para CIMA\n"
	   "2) Para BAIXO\n"
	   "3) prar direita\n"
	   "4) para esquerda\n"
	   "5) pasos x andar\n"
	   "6) Print matrix\n" "9) Fim\n\n" "Inserir comando: ");
    scanf("%d", &input);
    return input;
}

void print_matrix(void)
{
    int i, j;

    for (i = 0; i < FLOOR_DIM; i++) {
	for (j = 0; j < FLOOR_DIM; j++)

	    printf(Floor[i][j] ? "$" : ".");
	printf("\n");
    }
    printf("\n");
}
