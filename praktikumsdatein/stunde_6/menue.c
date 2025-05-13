#include <stdio.h>

int main () {

    char auswahl;
    printf("Hauptmenue\n==========\n");
    printf("(A)endern\n(B)eenden\n(D)rucken\n(E)ingeben\n(L)oeschen\n");
    printf("Was wünschen Sie zu tun? Eingabe: " );
    scanf("%c", &auswahl);

    switch (auswahl) {
        case 'A':
            printf(".... Sie haben (A) endern gewählt ....\n");
            break;
        case 'B':
            printf(".... Sie haben (B) eenden gewählt ....\n");
            break;
        case 'D':
            printf(".... Sie haben (D) rucken gewählt ....\n");
            break;
        case 'E':
            printf(".... Sie haben (E) ingeben gewählt ....\n");
            break;
        case 'L':
            printf(".... Sie haben (L) oeschen gewählt ....\n");
            break;
    }

    return 0;
}

