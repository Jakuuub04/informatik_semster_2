#include <stdio.h>

int main () {

    int stimmen1, stimmen2, stimmen3, stimmen4;

    printf("Wie viele Stimmen hatte der erste Kandidat? ");
    scanf("%d", &stimmen1);

    printf("Wie viele Stimmen hatte der zweite Kandidat? ");
    scanf("%d", &stimmen2);

    printf("Wie viele Stimmen hatte der dritte Kandidat? ");
    scanf("%d", &stimmen3);

    printf("Wie viele Stimmen hatte der vierte Kandidat? ");
    scanf("%d", &stimmen4);

    int gesamt = stimmen1 + stimmen2 + stimmen3 + stimmen4;
    float prozent1, prozent2, prozent3, prozent4;

    prozent1 = (float) stimmen1 / gesamt * 100;
    prozent2 = (float) stimmen2 / gesamt * 100;
    prozent3 = (float) stimmen3 / gesamt * 100;
    prozent4 = (float) stimmen4 / gesamt * 100;

    printf("Der erste Kandidat hat %.2f Prozent der Stimmen erhalten.\n", prozent1);
    printf("Der zweite Kandidat hat %.2f Prozent der Stimmen erhalten.\n", prozent2);
    printf("Der dritte Kandidat hat %.2f Prozent der Stimmen erhalten.\n", prozent3);   
    printf("Der vierte Kandidat hat %.2f Prozent der Stimmen erhalten.\n", prozent4);  
    
    return 0;
}