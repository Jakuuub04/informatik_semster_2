#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {

    signed int x = 0, zufallszahl = 0, versuch = 1, tipp = 0;
    printf("Ich denke mir eine Zahl aus dem Intervall [1,x]. Du musst dann versuchen, diese Zahl zu erraten. \n");
    printf("Zunaechst musst du einmal festlegen, wie gross die zu ratende Zahl maximal sein darf: ");
    scanf("%d", &x);
    srand(time(NULL));
    zufallszahl = rand() % x + 1;
    printf("Hm..... OK, ich habe eine Zahl\n");
    
    do {
        printf("Dein %d Versuch: ", versuch);
        scanf("%d", &tipp);
        versuch ++;

        if (tipp < zufallszahl) {
            printf("Zu Klein!\n");
        }
        else if (tipp > zufallszahl) {
            printf("Zu Groß!\n");
        }
    
    } while (tipp != zufallszahl);

    printf("..... Richtig\n");
    printf("Du hast %d Versuche zum Erraten der Zahl benötigt.", versuch);

    return 0;
}