#include <stdio.h>

int main() {

    signed int personen, haende, anzahl;
    printf("Wie viele Personen sind auf der Party: ");
    scanf("%d", &personen);

    int i, j;
    anzahl = 0;
    for (i = 0; i < personen; i++) {
        for (j = i + 1; j < personen; j++) {
            //printf("Person %d schüttelt Person %d die Hand.\n", i, j);
            anzahl += 1;
        }
    }

    printf("Gesamtzahl der Händedrücke: %d\n", anzahl);

    return 0;
}

