/**************************************************************************************************************
 * Schreiben Sie ein Programm, das einen Text einliest, diesen dabei zeilenweise in einer Tabelle speichert   *
 * und anschließend codiert ausgibt, indem es ihn spaltenweise ausliest. Die Zeilen- und Spaltenzahlen sind   *
 * vom Benutzer festzulegen. Überschüssige Zeichen in der Tabelle werden zufällig mit Kleinbuchstaben belegt. *
 * Überlegen Sie sich, wie Sie einen codierten Text decodieren könnten, wenn Sie die Zeilen- und Spaltenzahl  *
 * der Codierung kennen.                                                                                      *
 *                                                                                                            *
 * 1. Hinweis:                                                                                                *
 * Die Aufgabe ist ohne scanf und Strings zu lösen.                                                           *
 *                                                                                                            *
 * 2. Hinweis:                                                                                                *
 * Im untenstehenden Beispiel wird der Text "Das ist ein Text." folgendermaßen in einer Tabelle mit vier      *
 * Zeilen und fünf Spalten abgelegt:                                                                          *
 * |D|a|s| |i|                                                                                                *
 * |s|t| |e|i|                                                                                                *
 * |n| |T|e|x|                                                                                                *
 * |t|.|?|?|?|                                                                                                *
 *                                                                                                            *
 * Die Stellen mit Fragezeichen sind überschüssig und werden mit zufälligen Kleinbuchstaben belegt.           *
 *                                                                                                            *
 * Beispielhafter Ablauf:                                                                                     *
 *                                                                                                            *
 * Die maximale Laenge der Nachricht ergibt sich aus dem Produkt der beiden Codes.                            *
 *                                                                                                            *
 * >> Geben Sie die Anzahl an Zeilen ein: 4                                                                   *
 * >> Geben Sie die Anzahl an Spalten ein: 5                                                                  *
 * >> Geben Sie Ihren Text ein (max. 20 Zeichen): Das ist ein Text.                                           *
 * Der umgeformte Text lautet: Dsntat .s Tr eekiixq                                                           *
 *                                                                                                            *
 **************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ZEILEN  10
#define MAX_SPALTEN 10

int gibZahlEin(int min, int max);

void gibTextEin(char code[][MAX_SPALTEN], int zeilen, int spalten)
{
    printf("Gib einen Text ein (max. %d Zeichen): ", zeilen*spalten);

    for(int i = 0; i < zeilen*spalten; i++)
    {
        code[i / spalten][i % spalten] = getchar();
    }
}

void gibCodeAus(char code[][MAX_SPALTEN], int zeilen, int spalten)
{
    for(int i = 0; i < spalten; i++)
    {
        for(int j = 0; j < zeilen; j++)
        {
            putchar(code[j][i]);
        }
    }
}

void initialisiereArray(char code[][MAX_SPALTEN])
{
    for(int i = 0; i < MAX_ZEILEN; i++)
    {
        for(int j = 0; j < MAX_SPALTEN; j++)
        {
            code[i][j] = (char) (rand() % (127-97) + 97);
        }
    }
}

int main()
{
    char code[MAX_ZEILEN][MAX_SPALTEN];

    srand(time(NULL));
    initialisiereArray(code);
    
    printf("Zeilen? ");
    int zeilen = gibZahlEin(1, MAX_ZEILEN);
    printf("Spalten? ");
    int spalten = gibZahlEin(1, MAX_SPALTEN);
    
    gibTextEin(code, zeilen, spalten);

    printf("Das ist der Code: \n");
    gibCodeAus(code, zeilen, spalten);

    return 0;
}

int gibZahlEin(int min, int max)
{
    int zahl, geleseneWerte;

    do
    {
        geleseneWerte = scanf("%d", &zahl);
        while(getchar() != '\n') {}

        if(geleseneWerte != 1)
            printf("Keine Zahl! Erneute Eingabe: ");
        else if(zahl < min)
            printf("Zahl zu klein! Erneute Eingabe: ");
        else if(zahl > max)
            printf("Zahl zu gross! Erneute Eingabe: ");

    } while(geleseneWerte != 1 || zahl < min || zahl > max);

    return zahl;
}
