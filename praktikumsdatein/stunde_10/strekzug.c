#include <stdio.h> 
#include <math.h>

double abstand(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

int main() {

    int x, y, newx, newy;
    double streckenlaenge = 0.0;

    printf("Strecken-Berechnung\n");
    printf("===================\n");
    printf("Bitte Startpunkt eingeben (x,y): ");
    scanf("%d,%d", &x,&y);

    while (1) {
        printf("Neuer Streckenpunkt x,y (Abbruch bei x=-1): ");
        scanf("%d", &newx);

        if (newx == -1) {
            break;
        }

        scanf(",%d", &newy);
        streckenlaenge += abstand(x, y, newx, newy);

        x = newx;
        y = newy;
    }
    
    printf("Deine gesamtstrecken beträgt: %2.lf Einheiten", streckenlaenge);
    return 0;
}