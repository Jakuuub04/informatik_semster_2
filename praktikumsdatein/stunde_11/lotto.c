#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bubble(int zusotieren[], int anzahl) {
    for(int i = 0; i < anzahl - 1; i++) {
        for (int j = 0; j < anzahl - 1; j++) {
            if(zusotieren[j] > zusotieren[j + 1]) {
                int temp = zusotieren[j];
                zusotieren[j] = zusotieren[j + 1];
                zusotieren[j + 1] = temp;
            }
        }
    }
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

printf("\n");

if(gezogen <= verfuegbar) {
    printf("==== %d aus %d ====\n", gezogen, verfuegbar);
} else {
    printf("Die gezogenen dürfen nicht größer als die Verfügbaren sein!");
    return 3;
}

int menge[100];
int gezogene[100];

for(int i = 0; i < verfuegbar; i++) {
    menge[i] = i + 1; 
}

//for(int i = 0; i < gezogen; i++) {
//    gezogene[i] = menge[i];
//}

for (int i = verfuegbar - 1; i > 0; i--) { //- 1 weil wir ja eine menge haben, diese ist menge[5] -> 0,1,2,3,4 
    int j = rand() % (i + 1);
    int temp = menge[i];
    menge[i] = menge[j];
    menge[j] = temp;
}

for(int i = 0; i < gezogen; i++) {
    gezogene[i] = menge[i];
}

bubble(gezogene, gezogen);

for (int i = 0; i < gezogen; i++) {
    printf("%d ", gezogene[i]);
}

return 0;

}