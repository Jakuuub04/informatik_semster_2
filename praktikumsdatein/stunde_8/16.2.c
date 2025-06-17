#include <stdio.h>

int main() {

    int gerade = 0;
    int valid=0;

   

    while (valid != 1 || gerade % 2 != 0 || gerade > 100 || gerade < 1) {
        printf("Die eingebene Zahl ist entweder ungerade oder liegt nicht zwischen 1 und 100, bitte Probiere es erneut: ");
        valid =  scanf("%d", &gerade);
        fflush(stdin);
    }

    printf("Die eingegeben Zahl erfüllt die Bedinungen und beträgt: %d", gerade);
    return 0;

}