#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int zahlen_sotieren(int anzahl[] ){

}

void main() {

int verfuegbar = 0;
int gezogen = 0;
int status = 0;

srand(time(NULL));

printf("Lottozahlen-Simulation\n =======================\n");
printf("Wieviele Kugeln sollen zur Verfügung stehen (mind. 1 und max 100): ");
scanf("%d", &verfuegbar);
printf("Wieviele werden davon gezogen? (mind. 1 und max. %d): ", verfuegbar);
scanf("%d", &gezogen);
printf("\n\n");

printf("==== %d aus %d ====", gezogen, verfuegbar);

printf("");

}