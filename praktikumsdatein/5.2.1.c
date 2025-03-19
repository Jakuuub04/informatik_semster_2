#include <stdio.h>

int main() {
 
    int a = 18 / 2;
    int b = (4 + 5) / (9 - 6);
    int c = 6 + 8 / 4;
    int ausdruck_1 = a * b % c;
    
    int ausdruck_2 = (4 - 10 + (100 + 100 - 40 + 80) / (5 * 2 * 4) + 36) / ((90 - 30) / (10 - 5));
    
    printf("Ausdruck_1: %d\n", ausdruck_1);
    printf("Ausdruck_2: %d\n", ausdruck_2);
    
    return 0;
}
