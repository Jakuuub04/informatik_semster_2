#include <stdio.h>

int main(void)
{

    int zahl1, zahl2, zahl3, zahl4, zahl5;

    printf("Bitte gebe hier 5x jeweils eine Zahl ein, bitte jeweils nur eine! \n");

    if (scanf("%d", &zahl1) != 1 || zahl1 < 0 || zahl1 >= 10)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%d", &zahl2) != 1 || zahl2 < 0 || zahl2 >= 10)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%d", &zahl3) != 1 || zahl3 < 0 || zahl3 >= 10)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%d", &zahl4) != 1 || zahl4 < 0 || zahl4 >= 10)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    if (scanf("%d", &zahl5) != 1 || zahl5 < 0 || zahl5 >= 10)
    {
        printf("Fehlerhafte Eingabe, bitte Programm neustarten! ");
        return -1;
    }

    int quersumme;

    quersumme = zahl1 + zahl2 + zahl3 + zahl4 + zahl5;

    printf("Deine Quersumme ist: %d", quersumme);

    return 0;
}
