#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

#define MAX 10

void spielfeldzeichnen(char feldgroesse[MAX][MAX], int groesse) {
    for (int i = 0; i < groesse; i++) {
        for (int j = 0; j < groesse; j++) {
            printf("%c ",feldgroesse[i][j]);
        }
        printf("\n");
    }
}

int main() {

    char feldgroesse[MAX][MAX];
    int groesse;
    int zeile;
    int spalte;

    printf("Spielfeldgroesse (mind. 3, maximal 10)? ");
    scanf("%d",&groesse);
    if(groesse < 3 || groesse > 10) {
        printf("Das Spielfeld ist nicht in der passenden Größe, probiere es erneut!");
        return 1;
    }
    // do while würde auch funktinieren -> do printf.... -> while(groesse < 3 || groesse > 10)

    for (int i = 0; i < groesse; i++)
        for (int j = 0; j < groesse; j++)
            feldgroesse[i][j] = '.';



    while(1) {

        spielfeldzeichnen(feldgroesse, groesse);
        
        //Spieler 1
        do {
            printf("Dein Zug, Spieler 1 (Zeile, Spalte)?");
            scanf("%d %d",&zeile, &spalte);
            if(zeile > groesse || spalte > groesse) {
                printf("Zu gross");
                break;
            }
        }

        //Spieler 2


    }




    return 0;
}