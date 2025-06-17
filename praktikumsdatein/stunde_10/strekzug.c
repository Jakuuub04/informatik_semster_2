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
    while(scanf("%d,%d", &x,&y) != 2) {
        return 1;
    }

    while (1) {
        printf("Neuer Streckenpunkt x,y (Abbruch bei x=-1): ");
    while(scanf("%d", &newx) != 1) {
        return 1;
    }

        if (newx == -1) {
            break;
        }

    if(scanf("%d", &newy) != 1) {
        return 1;
    }
        streckenlaenge += abstand(x, y, newx, newy);

        x = newx;
        y = newy;
    }
    
    printf("Deine gesamtstrecken beträgt: %2.lf Einheiten", streckenlaenge);
    return 0;
}