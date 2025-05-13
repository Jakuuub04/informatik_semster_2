#include <stdio.h> 
#include <math.h>
#define PI 3.1415

int main() {

    char deine_wahl;
    double flaeche, radius, umfang;
    printf("Flaeche, Umfang und Radius eines Kreises\n========================================\nDu kannst waehlen, was du eingeben moechtest.\nIch berechne Dir dann die 2 fehlenden Groessen.\n");
    printf("Flaeche eingeben:f\nUmfang eingeben: u\nRadius eingeben: r\nDeine Wahl: ");
    scanf("%c", &deine_wahl);

    switch(deine_wahl) {
        case 'f':
            printf("Flaeche?: ");
            scanf("%lf", &flaeche);
            radius = sqrt(flaeche/PI);
            umfang = 2*PI*radius;
            break;
        case 'u':
            printf("Umfang?: ");
            scanf("%lf", &umfang);
            radius = umfang/2*PI;
            flaeche = (umfang*umfang)/(4*PI);
            break;
        case 'r':
            printf("Radius?: ");
            scanf("%lf", &radius);
            flaeche = radius*radius*PI;
            umfang = 2*PI*radius;
            break;
        default:
            printf("Ungültige Eingabe!");
            return 1;
    }   
                
    printf("Der Radius beträgt: %.2lf cm\n", radius);
    printf("Die Fläche beträgt: %.2lf cm²\n", flaeche);
    printf("Der Umfang beträgt: %.2lf cm\n", umfang);
    return 0;
}
