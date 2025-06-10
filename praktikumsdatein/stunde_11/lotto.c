#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototyp für die Sortierfunktion
void sortiere_zahlen(int arr[], int n);

int main() {
    int n = 0; // Gesamtanzahl der Kugeln
    int x = 0; // Anzahl der zu ziehenden Kugeln

    // Initialisiert den Zufallszahlengenerator.
    // srand() sollte nur einmal im Programm aufgerufen werden.
    srand(time(NULL));

    printf("Lottozahlen-Simulation\n");
    printf("=======================\n");

    // Eingabe für die Gesamtanzahl der Kugeln (n) mit Validierung
    do {
        printf("Wieviele Kugeln sollen zur Verfuegung stehen (mind. 1 und max. 100): ");
        scanf("%d", &n);
        // Leert den Eingabepuffer, um Endlosschleifen bei Fehleingabe (z.B. Buchstaben) zu vermeiden
        while (getchar() != '\n');
    } while (n < 1 || n > 100);

    // Eingabe für die Anzahl der zu ziehenden Kugeln (x) mit Validierung
    do {
        printf("Wieviele werden davon gezogen (mind. 1 und max. %d): ", n);
        scanf("%d", &x);
        // Leert den Eingabepuffer
        while (getchar() != '\n');
    } while (x < 1 || x > n);

    printf("\n==== %d aus %d ====\n", x, n);

    // Ein Array erstellen, das alle verfügbaren Kugeln enthält (von 1 bis n)
    int kugeln_pool[n];
    for (int i = 0; i < n; i++) {
        kugeln_pool[i] = i + 1;
    }

    // Ein Array für die gezogenen Zahlen
    int gezogene_zahlen[x];
    int verbleibende_kugeln = n;

    // Die Ziehung simulieren
    for (int i = 0; i < x; i++) {
        // Eine zufällige Position (Index) aus dem verbleibenden Pool auswählen
        int zufalls_index = rand() % verbleibende_kugeln;

        // Die Kugel an der zufälligen Position "ziehen" und speichern
        gezogene_zahlen[i] = kugeln_pool[zufalls_index];

        // Die gezogene Kugel aus dem Pool entfernen, indem sie durch die letzte
        // Kugel im aktuellen Pool ersetzt wird. Das ist effizienter als das
        // Verschieben aller Elemente.
        kugeln_pool[zufalls_index] = kugeln_pool[verbleibende_kugeln - 1];

        // Die Größe des Pools für die nächste Ziehung verringern
        verbleibende_kugeln--;
    }

    // Die gezogenen Zahlen sortieren, um eine saubere Ausgabe zu erhalten
    sortiere_zahlen(gezogene_zahlen, x);

    // Die sortierten, gezogenen Zahlen ausgeben
    for (int i = 0; i < x; i++) {
        printf("%d ", gezogene_zahlen[i]);
    }
    printf("\n");

    return 0;
}

/**
 * @brief Sortiert ein Integer-Array aufsteigend mit dem Bubble-Sort-Algorithmus.
 *
 * @param arr Das zu sortierende Array.
 * @param anzahl Die Anzahl der Elemente im Array.
 */
void sortiere_zahlen(int arr[], int anzahl) {
    for (int i = 0; i < anzahl - 1; i++) {
        for (int j = 0; j < anzahl - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tausche die Elemente
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}