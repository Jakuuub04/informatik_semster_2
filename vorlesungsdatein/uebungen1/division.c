/********************************************************************************
 * Aufgabe                                                                      *
 * Welche Ausgabe liefert folgendes Programm? Erst ueberlegen, dann ausfuehren! *
 ********************************************************************************/

#include <stdio.h>

int main()
{
    int zahl1 = 1, zahl2 = 2;
    double erg;

    erg = (double) zahl1 / zahl2;

    printf("%d / %d = %lf", zahl1, zahl2, erg);

    return 0;
}