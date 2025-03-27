/**********************************************************************\
* Kurzbeschreibung: Aufgabe 5.6.1 mit der Berechnung von Ausdrücken
*
* Datum: Autor:
* <<27.03.2025>> <<Jakob Hofmmann>>
*
\**********************************************************************/

#include <stdio.h>

int main () {

    unsigned short x = 0x12AB;
    unsigned short vertauscht;

    printf("Die Zahl im normalen Zustand lautet: %x\n", x);

    vertauscht = (x >> 8) | ((x & 0x00FF) << 8);

    printf("Die Zahl im vertauschtem Zustand lautet: %x\n", vertauscht);

    return 0;
}




