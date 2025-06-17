#include <stdio.h>

int main() {
    int aepfel = 0;
    int Hans = 3, Fritz = 5, runde = 1; 
    int valid = 0;


    while (!valid) {
        printf("Wie viele Aepfel haben Fritz und Hans gekauft (durch 8 teilbar): ");

        while (scanf("%d", &aepfel) != 1) {
            printf("Ungültige Eingabe! Bitte eine ganze Zahl eingeben.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        if (aepfel % 8 != 0) {
            printf("Diese Zahl ist leider nicht durch 8 teilbar.\n");
        } else {
            valid = 1;
        }
    }

    printf("| Runde | Fritz | Hans | Rest |\n");
    printf("|-----------------------------|\n");

    int rest = aepfel;

    while (rest > 0) {
        printf("| %5d | %5d | %4d | %4d |\n", runde, Fritz * runde, Hans * runde, rest - (Fritz + Hans));
        rest = rest - (Hans + Fritz);
        runde++;
    }

    return 0;
}
