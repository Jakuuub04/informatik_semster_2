#include <stdio.h>

int main() {

    int zahl, primzahl;
    primzahl = 1;
    printf("Alle Teiler zu einer Zahl bestimmen\n===================================\nGib eine Zahl ein: ");
    scanf("%d", &zahl);

    int i, j;
    for (i = 2; i < zahl; i++)
        if (zahl % i == 0) {
            printf("%d, ", i);
            primzahl = 0;
        }


    if (primzahl >= 1) {
        printf("Die Zahl ist eine Primzahl!");
    }
    else {
        printf("Die Zahl ist keine Primzahl!");
    }

    return 0;
}