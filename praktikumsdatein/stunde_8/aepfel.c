#include <stdio.h>

int main() {

    int aepfel = 0;
    int Hans = 3, Fritz = 5, runde = 1; 

    printf("Wie viele Aepfel haben Fritz und Hans gekauft: ");
    if(scanf("%d", &aepfel) != 1) {
        return 1;
    }
    
    while (aepfel % 8 != 0) {
        printf("Diese Zahl ist leider nicht durch 8 teilbar, versuche es erneut: ");
        scanf("%d", &aepfel);
    }
    
    printf("| Runde | Fritz | Hans | Rest |\n");
    printf("|-----------------------------|\n");
    
    int  rest = aepfel;
    
    while (rest > 0) {
        rest = rest - (Hans + Fritz);
        printf("| %5d | %5d | %4d | %4d |\n", runde, Fritz * runde, Hans * runde, rest);

        runde ++;
    }

    

    return 0;
}