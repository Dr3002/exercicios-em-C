//GRUPO:DANIEL RIBEIRO ALCANTARA MARQUES(MATRICULA: 212080431),JOÃO MORGAN DE ALMEIDA LINS DO VALE(MATRICULA:212080440),RAQUEL MELO QUEIROZ(MATRICULA:212080490);

#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contém protótipo para função time */
#include <locale.h>

 /* constantes de enumeração representam status do jogo */
 enum Status { CONTINUE, WON, LOST };

 int rollDice( void ); /* protótipo de função */

 /* função main inicia a execução do programa */
 int main( void )
 {
 setlocale(LC_ALL,"Portuguese");
 int sum; /* soma dos dados lançados */
 int myPoint;/* ponto ganho */
 int saldoBanca = 1000;/* Saldo inicial da Banca */
 int aposta;/* Valor que vai ser apostado */


 enum Status gameStatus; /* pode conter CONTINUE, WON ou LOST */

 /* randomiza gerador de número aleatório usando hora atual */
 srand( time( NULL ) );

 sum = rollDice(); /* primeiro lançamento dos dados */

 /* determina status do jogo com base na soma dos dados */
 switch( sum ) {
 /* vence na primeira jogada */
 case 7:
 case 11:
 gameStatus = WON;
 break;

 /* perde na primeira jogada */
 case 2:
 case 3:
 case 12:
 gameStatus = LOST;
 break;

 /* lembra ponto */
 default:
 gameStatus = CONTINUE;
 myPoint = sum;
 printf( "Ponto é %d\n", myPoint );
 break; /* optional */
 } /* fim do switch */

 /* enquanto jogo não termina */
 while ( gameStatus == CONTINUE ) {
 sum = rollDice(); /* joga dados novamente */

 /* determina status do jogo */
 if ( sum == myPoint ) { /* vence fazendo ponto */
 gameStatus = WON; /* jogo termina, jogador vence */

 } /* fim do if */
 else {

 if ( sum == 7 ) { /* perde por lançar 7 */
 gameStatus = LOST; /* jogo termina, jogador perde */
 } /* fim do if */
 } /* fim do else */
 } /* fim do while */

 /* mostra mensagem de vitória ou perda */
 if ( gameStatus == WON ) { /* jogador venceu? */
 printf( "Jogador vence\n" );
 } /* fim do if */
 else { /* jogador perdeu */
 printf( "Jogador perde\n" );
 } /* fim do else */

 return 0; /* indica conclusão bem-sucedida */
 } /* fim do main */

 /* lança dados, calcula soma e exibe resultados */
 int rollDice( void )
 {
 int die1; /* primeiro dado */
 int die2; /* segundo dado */
 int workSum; /* soma dos dados */

 die1 = 1 + ( rand() % 6 ); /* escolhe valor aleatório die1 */
 die2 = 1 + ( rand() % 6 ); /* escolhe valor aleatório die2 */
 workSum = die1 + die2; /* soma die1 e die2 */

 /* exibe resultados dessa jogada */
 printf( "Jogador rolou %d + %d = %d\n", die1, die2, workSum );
 return workSum; /* retorna soma dos dados */
 }
