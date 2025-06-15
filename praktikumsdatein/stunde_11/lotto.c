#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int zahlen_sotieren(int anzahl[], int sotiert[]){

}

int main() {

int verfuegbar = 0;
int gezogen = 0;
int status = 0;

srand(time(NULL));

printf("Lottozahlen-Simulation\n =======================\n");
printf("Wieviele Kugeln sollen zur Verfügung stehen (mind. 1 und max 100): ");
if(scanf("%d", &verfuegbar) != 1 || verfuegbar < 1 || verfuegbar > 100) {
    printf("Ungültige Eingabe, das Programm wird beendet.");
    return 1;
}

printf("Wieviele werden davon gezogen? (mind. 1 und max. %d): ", verfuegbar);
if(scanf("%d", &gezogen) != 1 || gezogen < 1 || gezogen > verfuegbar) {
    printf("Ungültige Eingabe, das Programm wird beendet.");
    return 2;
}

printf("\n\n");

if(gezogen <= verfuegbar) {
    printf("==== %d aus %d ====", gezogen, verfuegbar);
} else {
    printf("Die gezogenen dürfen nicht größer als die Verfügbaren sein!");
    return 3;
}

int menge[100];
int gezogene[100];

for(int i = 0; i < verfuegbar; i++) {
    menge[i] = i + 1; 
}

for(int i = 0; i < gezogen; i++) {
    gezogene[i] = menge[i];
}

printf("\n");

return 0;
}