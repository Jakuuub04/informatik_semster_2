#include <stdio.h>

int main() {
    
    int a;
    a = -15;
    
    /* Oprion 1 */

    int wert_1; 

     if (a >= -20 && a <= 100) {
        wert_1 = 1;  
    } else {
        wert_1 = 0; 
    }

    printf("Der Wert ist für Option 1 ist %d\n", wert_1);
    
    /* Option 2 */  

    int wert_2;
    int x = 1;
    int y = 7;
    
    if (x < 0 && y > 5 && y < 30)
    {
        wert_2 = 1;
    } else {
        wert_2 = 0;
    }

    printf("Der Wert ist für Option 2 ist %d\n", wert_2);

    /* Option 3 */

    int wert_3;
    int z = 15;

    if (z / 2 == !0 && z % 3 == 0 && z % 5 == 0)
    {
        wert_3 = 1;
    } else {
        wert_3 = 0;
    }

    printf("Der Wert ist für Option 3 ist %d\n", wert_3);

    /* Option 4 */  

    int wert_4;
    int jahr = 2100;
     if (jahr % 400 == 0 || jahr % 4 == 0 && jahr % 100 != 0)
     {
         wert_4 = 1;
     } else {
         wert_4 = 0;
     }
     
    printf("Der Wert für Option 4 ist %d\n" , wert_4);

    /* Option 5 */  

    int wert_5;
    int a_2 = 25;
    int b_2 = 10;
    int product;
    product = a_2 * b_2;
    unsigned char max_value = 255;

    if (product >= 0 && product <= max_value)   
    {
        wert_5 = 1;
    } else {
        wert_5 = 0;
    }
    
    printf("Der Wert für Option 5 ist %d\n" , wert_5);

    /* Option 6 */  

    int wert_6;
        
    printf("Der Wert für Option 6 ist %d\n" , wert_6);

    /* Option 7 */  

    int wert_7;
        
        
    printf("Der Wert für Option 7 ist %d\n" , wert_7);


    
    return 0;

}