#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MWST 19

int i, zahl = 0;
int main() {
    printf("zahl! ");
    
    if (scanf("%d", &zahl) != 1) {
        printf("fehler");
        return 1;
    }

    while(scanf("%d",&zahl) != 1) {
        printf("fehler");
        return 1;
    }

    printf("succsess");
    return 0;
}
