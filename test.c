#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int quadsum(int n) {

    int erg = 0; int i;

    if (n > 0) {
        for (i = n; i > 1; i--) {
            printf("%d + ", i*i);
            erg += i*i;
        }
        printf("%d = ", i*i);
        erg += i*i;
        
        return erg;
    }
}

void main() {

    int vari;
    srand(time(NULL));

    printf("eingabe: ", &vari);
    scanf("%d", &vari);

    printf("Okta %o\n", vari);
    printf("Hexa: %x\n", vari);

    printf("Dual: ");
    
    for (int i = sizeof(int)*8-1; i >= 0; i--) {
        printf("%d", (vari >> i) & 0x1);
    }
    printf("\n");

    int array[200];


    //fuelle
    for (int i = 0; i < vari; i++) {
        array[i] = rand() % 101 + 100;
    }
    //rolle
    if (vari > 0) {
        int endwert = array[vari - 1];
        for (int i = vari - 1; i > 0; i--) {
            array[i] = array[i - 1];
        }
        array[0] = endwert;
    }

    printf("%d", quadsum(vari));
    
}
