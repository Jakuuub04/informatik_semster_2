#include <stdio.h>

int main(void)
{

    char zahl1, zahl2, zahl3, zahl4, zahl5;

    printf("Bitte gebe hier 5x jeweils eine Zahl ein, bitte jeweils nur eine! \n");

    if (scanf("%c", &zahl1) != 1)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%c", &zahl2) != 1)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%c", &zahl3) != 1)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%c", &zahl4) != 1)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%c", &zahl5) != 1)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    int quersumme;

    quersumme = (zahl1 - '0') + (zahl2 - '0') + (zahl3 - '0') + (zahl4 - '0') + (zahl5 - '0');

    printf("Deine Quersumme ist: %d", quersumme);

    return 0;
}
