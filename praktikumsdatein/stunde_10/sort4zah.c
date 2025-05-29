#include <stdio.h>
#include <conio.h>

void tauschen(int *a, int *b)  { //void weil die funktion nichts zurück gibt, wenn int dann muss ich sowas machen wei return ..
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a, b, c, d;
    int durchlauf = 0;
    int sotiert = 0;

    printf("Sotieren von 4 Integer Zahlen\n");
    printf("-----------------------------\n");

    printf("Zahl 1: ");
    scanf("%d", &a);
    printf("Zahl 2: ");
    scanf("%d", &b);
    printf("Zahl 3: ");
    scanf("%d", &c);
    printf("Zahl 4: ");
    scanf("%d", &d);

    if (a <= b && b <= c && c <= d) {
        printf("Was soll das?!\n");
        printf("Die Zahlen sind bereits sotiert!!\n");
        return 0;
    }

    while(!sotiert) {
        sotiert = 1;

        if (a>b) {
            tauschen(&a, &b); 
            sotiert = 0;
        }
        if (b>c) {
            tauschen(&b, &c);
            sotiert = 0;
        }
        if (c>d) {
            tauschen(&c, &d);
            sotiert = 0;
        }

        durchlauf ++;

        printf("\n%d. Durchlauf - Aktueller Stand:\n", durchlauf);
        printf("Zahl1: %d\n", a);
        printf("Zahl2: %d\n", b);
        printf("Zahl3: %d\n", c);
        printf("Zahl4: %d\n", d);
        printf("Weiter mit einer beliebigen Taste...\n");

        getch();
    }

    printf("\n!!!! FERTIG nach %d Duerchlaeufen! !!!!", durchlauf);
    return 0;
}