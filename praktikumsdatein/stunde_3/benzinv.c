#include <stdio.h>

int main() {
    int stunden, minuten, kilometer, liter;
    float geschwindigkeit, benzinverbrauch;

    const int MINUTEN_PRO_STUNDE = 60;
    const int KILOMETER_100 = 100;

    printf("Geben Sie die gefahrene Zeit ein (Stunden Minuten): ");
    scanf("%d %d", &stunden, &minuten);

    printf("Geben Sie die gefahrenen Kilometer ein: ");
    scanf("%d", &kilometer);

    printf("Geben Sie Ihre verbrauchten Liter an: ");
    scanf("%d", &liter);

    geschwindigkeit = kilometer / (stunden + (minuten / MINUTEN_PRO_STUNDE));
    benzinverbrauch = (float)liter / kilometer * KILOMETER_100;

    printf("Meine Durchschnittliche Geschwindigkeit lag bei: %.2f km/h\n", geschwindigkeit);
    printf("Der Durchschnittliche Benzinverbrauch lag bei: %.2f l/100km\n", benzinverbrauch);

    return 0;
}