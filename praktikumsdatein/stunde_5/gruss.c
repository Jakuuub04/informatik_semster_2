#include <stdio.h>

int main() {

    int stundenzahl;
    printf("Gib die Stunde der momentanen Uhrzeit ein: ");
    scanf("%d", &stundenzahl);

    if (stundenzahl < 0 || stundenzahl > 23) 
        {
            printf("%d ist keine erlaubte Stunden-Angabe!", stundenzahl);
        } 
    else if (stundenzahl >= 23 || stundenzahl <= 5)
        { 
            printf("Gute Nacht!");
        }
    else if (stundenzahl >= 6 && stundenzahl <= 10)
        {
            printf("Guten Morgen!");
        }
    else if (stundenzahl >= 11 && stundenzahl <= 13)
        {
            printf("Mahlzeit!");
        }
    else if (stundenzahl >= 14 && stundenzahl <= 17)
        {
            printf("Schönen Nachmittag!");
        }
    else if (stundenzahl >= 18 && stundenzahl <= 22)
        {
            printf("Guten Abend!");
        }


    return 0;
}