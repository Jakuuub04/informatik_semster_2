#include "faktor.h"
#include <stdio.h>

int main() {

    double strecke, zeit;

    printf("Gib deine zurückgelegte Strecke in Meter (m) ein: ");
    scanf("%f", &strecke);

    printf("Gib deine zurückgelegte Zeit in Sekunden (s) ein: ");
    scanf("%f", &zeit);

    double v_ms = strecke / zeit; //angegeben in Meter die Sekunde
    double v_kmh = v_ms * MS_NACH_KMH;
    double v_mtag = v_ms * MS_NACH_MTAG;
    double v_kmtag = v_ms * MS_NACH_KMTAG;

    printf("Die Geschwindigkeit beträgt %f m/s, %f km/h, %f m/Tag und %f km/Tag. \n", v_ms, v_kmh, v_mtag, v_kmtag);

    return 0;
}