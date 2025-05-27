#include <stdio.h>

int main() {

    int gerade = 0;
    printf("Geben Sie bitte eine gerade Zahl ein: ");
    scanf("%d", &gerade);

    while (gerade % 2 != 0 || gerade >= 100 || gerade <= 1) {
        printf("Die eingebene Zahl ist entweder ungerade oder liegt nicht zwischen 1 und 100, bitte Probiere es erneut: ");
        scanf("%d", &gerade);
    }

    printf("Die eingegeben Zahl erfüllt die Bedinungen und beträgt: %d", gerade);
    return 0;

}