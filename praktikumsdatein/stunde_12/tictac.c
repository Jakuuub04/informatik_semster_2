#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

#define MAX 10

void spielfeldzeichnen(char feld[MAX][MAX], int groesse) {
    for (int i = 0; i < groesse; i++) {
        for (int j = 0; j < groesse; j++) {
            printf("%c ",feld[i][j]);
        }
        printf("\n");
    }
}

int wincheck(char feld[MAX][MAX], int groesse, char symbol) {
    //zeilen
    for (int i = 0; i < groesse; i++) {
        for (int j = 0; j <= groesse - 3; j++) {
            if (feld[i][j] == symbol && feld[i][j+1] == symbol && feld[i][j+2] == symbol)
                return 1;
        }
    }

    //spalte
    for (int i = 0; i < groesse; i++) {
        for (int j = 0; j <= groesse - 3; j++) {
            if (feld[j][i] == symbol && feld[j+1][i] == symbol && feld[j+2][i] == symbol)
                return 1;
        }
    }

    //links oben -> rechts unten
    for (int i = 0; i <= groesse - 3; i++) {
        for (int j = 0; j <= groesse - 3; j++) {
            if (feld[i][j] == symbol && feld[i+1][j+1] == symbol && feld[i+2][j+2] == symbol)
                return 1;
        }
    }

    // rechts oben -> links unten
    for (int i = 0; i <= groesse - 3; i++) {
        for (int j = 2; j < groesse; j++) {
            if (feld[i][j] == symbol && feld[i+1][j-1] == symbol && feld[i+2][j-2] == symbol)
                return 1;
        }
    }

    return 0; //keiner gewinnt
}


int main() {

    char feldgroesse[MAX][MAX];
    int spalte, zeile, spieler = 1, groesse, zuege; 
    char symbol;

    printf("Spielfeldgroesse (mind. 3, maximal 10)? ");
    scanf("%d",&groesse);
    if(groesse < 3 || groesse > 10) {
        printf("Das Spielfeld ist nicht in der passenden Größe, probiere es erneut!");
        return 1;
    }
    // do while würde auch funktinieren -> do printf.... -> while(groesse < 3 || groesse > 10)

    // feld mit . füllen
    for (int i = 0; i < groesse; i++)
        for (int j = 0; j < groesse; j++)
            feldgroesse[i][j] = '.';

    while(1) {

        spielfeldzeichnen(feldgroesse, groesse);
        symbol = (spieler == 1) ? 'X' : 'O';

        //Spieler 1
        while(1) {
            printf("Dein Zug %c, Spieler %d (Zeile, Spalte)? ", symbol, spieler);
            if(scanf("%d,%d", &zeile, &spalte) != 2) {
                printf("..... Unerlaubter Spielzug\n");
                continue;
            }

            zeile--, spalte--;

            if(zeile < 0 || zeile > groesse || spalte < 0 || spalte > groesse) {
                printf("..... Unerlaubter Spielzug\n");
            } else if (feldgroesse[zeile][spalte] != '.') {
                printf("..... Unerlaubter Spielzug\n");
            } else {
                feldgroesse[zeile][spalte] = symbol;
                zuege++;
                break;
            }
        }

        if(zuege == groesse * groesse) {
            spielfeldzeichnen(feldgroesse, groesse);
            printf("Wir haben ein unentschieden!");
            break;
        }
        if(zuege >= 5 && wincheck(feldgroesse, groesse, symbol)) {
            spielfeldzeichnen(feldgroesse, groesse);
            printf("Spieler %d hat gewonenn", spieler);
            break;
        }

        spieler = 5 - 2 - spieler;
    }
    return 0;
}