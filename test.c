#include <stdio.h>

int main (void) {

     int eingabe = 0;
     printf("Gib Zahl ein: ");
     scanf("%d", &eingabe);
     printf("Oktal: %o\n", eingabe);
     printf("Hexa: %x\n", eingabe);
}
