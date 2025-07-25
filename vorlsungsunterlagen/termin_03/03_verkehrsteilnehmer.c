/********************************************************************************************
 * Verkehrsteilnehmer
 * 
 * In einer Verkehrssimulation gibt es Fußgänger, Fahrräder, PKW, LKW/Bus und Motorräder.
 * Schreiben Sie ein Programm, dass die Merkmale "Anzahl Räder" und "motorisiert" vom
 * Benutzer abfragt und einen Verkehrsteilnehmer anhand dieser Merkmale identifiziert. 
 * Hinweise: Fußgänger haben 0 Räder, LKW/Bus haben eine gerade Anzahl Räder > 4.
 * Für eine nicht existierende Merkmalskombination geben Sie eine entsprechende 
 * Meldung aus!
 * 
 * 1. Beispiel
 * >> Wieviele Räder? 2
 * >> Motorisiert? 0
 * Es handelt sich um ein Fahrrad.
 * 
 * 2. Beispiel
 * >> Wieviele Räder? 0
 * >> Motorisiert? 1
 * Es handelt sich um ein unbekannten Verkehrsteilnehmer.
 * 
 * 3. Beispiel
 * >> Wieviele Räder? 6
 * >> Motorisiert? 1
 * Es handelt sich um einen Bus oder LKW.
 * 
 ********************************************************************************************/

#include <stdio.h>

int main()
{
    int raeder = 0;
    int motorisiert = 0;

    printf("Wieviele Raeder? ");
    scanf("%d", &raeder);
    printf("Motorisiert? ");
    scanf("%d", &motorisiert);

    if(raeder == 0 && motorisiert == 0)
    {
        printf("Fußgaenger.\n");
    }
    else if (raeder == 4 && motorisiert == 1) 
    {
        printf("Auto.\n");
    }
    else if (raeder > 4 && raeder % 2 == 0 && motorisiert == 1) 
    {
        printf("LKW/Bus.\n");
    }
    else if (raeder == 2)
    {
        if(motorisiert == 0) 
        {
            printf("Fahrrad.\n");
        }
        else
            printf("Motorrad.\n");
    }
    else
    {
        printf("Unbekannter Verkehrsteilnehmer!\n");
    }

    return 0;
}