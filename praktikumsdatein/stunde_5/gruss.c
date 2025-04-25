#include <stdio.h>

int main() {

    int stundenzahl;
    printf("Gib die Stunde der momentanen Uhrzeit ein: ");
    scanf("%d", stundenzahl);

    if (stundenzahl >= 23 || stundenzahl <= 5)
        { 
            printf("Gute Nacht!");
        }
    else if (stundenzahl >= 6 || stundenzahl <= 10)
        {
            printf("Guten Morgen!");
        }

    return 0;
}