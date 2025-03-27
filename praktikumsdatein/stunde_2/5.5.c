/**********************************************************************\
* Kurzbeschreibung: Aufgabe 5.5 mit der Berechnung von Ausdrücken
*
* Datum: Autor:
* <<27.03.2025>> <<Jakob Hofmmann>>
*
\**********************************************************************/

#include <stdio.h>

int main () {
    
    //#1.0

    short x1;
    x1 = 7;
    
    //printf("Bitte geben sie eine Zahel ein: ");
    //scanf("%hd", &x);

    int wert;

    wert = x1 & 1;


    //printf("Die eingegebene Zahl lautet: %d\n", x);
    printf("Der Wert ist gerade wenn 0 und ungerade wenn 1: %d\n", wert);

    //#2.0

    unsigned short u2 = 256;
    int wert2;

    wert2 = u2 > 255;

    printf("Die Zahl u ist größer als 255: %d\n", wert2);
    
    //#3.0

    unsigned short u3 = 520;
    int wert3;
    unsigned short rechenhilfe;

    rechenhilfe = 0x0100;

    wert3 = u3 & rechenhilfe;

    printf("Das 7te Bit von u ist auf 1 gesetzt, sobalt die Zahl keine 0 ist: %d\n", wert3);

    //#4.0

    short x4 = 120;
    int wert4;

    wert4 = x4 > 0 && x4 < 127;

    printf("Der Wert liegt zwischen [0,127] %d\n", wert4);

    //#5.0

    unsigned short u5 = 43;
    int wert5;

    wert5 = (u5 % 4) == 0;

    printf("Ist der Wert durch 4 Teilbar?: %d\n", wert5);

    return 0;

}