#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void spielfeldzeichnen(char feldgroesse[MAX][MAX], int groesse) {
    printf("\n");
    for (int i = 0; i < groesse; i++) {
        for (int j = 0; j < groesse; j++) {
            printf("%c ", feldgroesse[i][j]);
        }
        printf("\n");
    }
}

int gewonnen(char feld[MAX][MAX], int n, char s) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - 3; j++) {
            if (feld[i][j] == s && feld[i][j+1] == s && feld[i][j+2] == s)
                return 1;
            if (feld[j][i] == s && feld[j+1][i] == s && feld[j+2][i] == s)
                return 1;
        }
    }

    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= n - 3; j++) {
            if (feld[i][j] == s && feld[i+1][j+1] == s && feld[i+2][j+2] == s)
                return 1;
            if (feld[i+2][j] == s && feld[i+1][j+1] == s && feld[i][j+2] == s)
                return 1;
        }
    }
    return 0;
}

int main() {
    char feldgroesse[MAX][MAX];
    int groesse;
    int zeile, spalte;
    int zuege = 0;
    int spieler = 1;
    char symbol;

    printf("Spielfeldgroesse (mind. 3, maximal 10)? ");
    scanf("%d", &groesse);
    if (groesse < 3 || groesse > 10) {
        printf("Ungültige Spielfeldgröße.\n");
        return 1;
    }

    // Feld initialisieren
    for (int i = 0; i < groesse; i++)
        for (int j = 0; j < groesse; j++)
            feldgroesse[i][j] = '.';

    while (1) {
        spielfeldzeichnen(feldgroesse, groesse);
        symbol = (spieler == 1) ? 'X' : 'O';

        // Eingabe prüfen
        do {
            printf("Spieler %d (%c), dein Zug (Zeile, Spalte)? ", spieler, symbol);
            scanf("%d %d", &zeile, &spalte);
            zeile--; spalte--; // Eingabe 1-basiert → intern 0-basiert

            if (zeile < 0 || zeile >= groesse || spalte < 0 || spalte >= groesse)
                printf("Ungültige Position. Bitte innerhalb des Spielfelds bleiben.\n");
            else if (feldgroesse[zeile][spalte] != '.')
                printf("Feld bereits belegt. Wähle eine andere Position.\n");
            else
                break;

        } while (1);

        feldgroesse[zeile][spalte] = symbol;
        zuege++;

        if (zuege >= 5 && gewonnen(feldgroesse, groesse, symbol)) {
            spielfeldzeichnen(feldgroesse, groesse);
            printf("Spieler %d (%c) gewinnt!\n", spieler, symbol);
            break;
        }

        if (zuege == groesse * groesse) {
            spielfeldzeichnen(feldgroesse, groesse);
            printf("Unentschieden!\n");
            break;
        }

        spieler = 3 - spieler; // Spielerwechsel
    }

    return 0;
}
