#include <stdio.h>

int main() {

    int Jahr;
    printf("Geben sie ein abzufragenes Jahr an: ");
    scanf("%d", &Jahr);

    if (Jahr % 4 != 0) {
        printf("---> Kein Schaltjahr");
    } else if (Jahr % 100 != 0) {
        printf("---> Schaltjahr"); 
    } else if (Jahr % 400 == 0) {
        printf("---> Schaltjahr");
    } else {
        printf("---> Kein Schaltjahr");
    }

    return 0;
}
