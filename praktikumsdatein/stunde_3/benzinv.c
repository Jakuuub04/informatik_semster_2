#include <stdio.h>

int main() {
    int stunden, minuten, kilometer, liter;
    float geschwindigkeit, benzinverbrauch;

    printf("Geben Sie die gefahrene Zeit ein (Stunden Minuten): ");
    scanf("%d %d", &stunden, &minuten);

    printf("Geben Sie die gefahrenen Kilometer ein: ");
    scanf("%d", &kilometer);

    printf("Geben Sie Ihre verbrauchten Liter an: ");
    scanf("%d", &liter);

    geschwindigkeit = kilometer / (stunden + (minuten / 60.0));
    benzinverbrauch = (float)liter / kilometer * 100;

    printf("Meine Durchschnittliche Geschwindigkeit lag bei: %f km/h\n", geschwindigkeit);
    printf("Der Durchschnittliche Benzinverbrauch lag bei: %f l/100km\n", benzinverbrauch);

    return 0;
}