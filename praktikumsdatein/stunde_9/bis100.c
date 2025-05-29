#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int wuerfeln() {
    return rand() % 6 + 1;
}

int main() {
    srand(time(NULL));
    signed int punkteSpieler = 0;
    signed int punkteComputer = 0;
    char weiter;

    do {
        printf("\nWillkommen zum Würfelspiel bis 100, spielt Fair und gewinnt.\n");
        signed int punkteSpieler = 0;
        signed int punkteComputer = 0;

        do {
            //Spieler
            printf("--- Du bist dran ---\n");
            int rundensumme = 0;
            while(1) {
                char antwort;
                int wurf = wuerfeln();
                printf("Du würfelst: %d\n", wurf);

                if (wurf == 1) {
                    printf("Du hast eine 1 gewürfelt, dein Zug ist somit beendet.\n");
                    break;
                } 

                rundensumme += wurf;
                printf("Deine aktuelle Summe dieser Runde beträgt %d Punkte.\n", rundensumme);
                printf("Möchtest du weiter würfeln? (j / n) ");
                scanf(" %c", &antwort);

                if (antwort != 'J'&& antwort != 'j') {
                    punkteSpieler += rundensumme;
                    printf("Dein Zug ist somit beendet. Du fügst somit %d Punkte zu deinem Konto hinzu. Deine Gesamtpunktzahl beträgt: %d\n", rundensumme, punkteSpieler);
                    break;
                }
            }

            //Computer
            printf("--- Der Computer ist dran ---\n");
            rundensumme = 0;
            int rundenzahl = 0;
            while(1) {
                int wurf = wuerfeln();
                printf("Der Computer würfelt eine %d\n", wurf);
                rundenzahl ++;

                if (wurf == 1) {
                    printf("Der Computer würfelt eine 1, der Zug ist vorbei.\n");
                    break;
                }

                rundensumme += wurf;
                printf("Die aktuelle Summer dieser Runde beträgt %d Punkte\n", rundensumme);

                if (rundensumme >= 19 || rundenzahl == 5) {
                    punkteComputer += rundensumme;
                    printf("Der Computer beendet den Zug hiermit. Seine Rundenzahl betägt %d Punkte. Sein Gesamtpunktezahl beträgt: %d.\n", rundensumme, punkteComputer);
                    break;
                }
            }

        } while (punkteComputer < 100 && punkteSpieler < 100);
        printf("Ende des Spieles!\n");
        printf("Du hast %d Punkte und der Computer hat %d Punkte. \n", punkteSpieler, punkteComputer);
        if (punkteSpieler >= 100) {
            printf("Du hast gewonnen!\n");
        } else {
            printf("Der Computer hat gewonnen!\n");
        }
        printf("Möchtest du noch eine Runde spielen? (j / n) ");
        scanf(" %c", &weiter);

    }while (weiter == 'J' || weiter == 'j');

    return 0;
}

