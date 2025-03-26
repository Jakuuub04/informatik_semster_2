/**********************************************************************\
* Kurzbeschreibung: Aufgabe 5.5 mit der Berechnung von Ausdrücken
*
* Datum: Autor:
* <<20.03.2025>> <<Jakob Hofmmann>>
*
\**********************************************************************/

#include <stdio.h>

int main () {
    
    //#1

    short x;
    
    printf("Bitte geben sie eine Zahel ein: ");
    scanf("%hd", &x);

    int wert;

    wert = x & 1;


    printf("Die eingegebene Zahl lautet: %d\n", x);
    printf("Der Wert ist gerade wenn 0 und ungerade wenn 1: %d\n", wert);

    //#2

    unsigned short u = 256;
    int wert2;

    wert2 = u > 255;

    printf("Die Zahl u ist größer als 255: %d\n", wert2);
    
    return 0;

}