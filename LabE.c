#include<stdio.h>

int main(){ 
int x = 120;
int y = 3;

    //ARITHMETIC OPERATIONS
    printf("ARITHMETIC\n" );

    //ADDITION
    printf("%d\n", x + y);

    //MULTIPLICATION
    printf("%d\n", x * y);

    //DIVISION
    printf("%.2f\n", (float) x / y);

    //SUBTRACTION
    printf("%d\n\n", x - y);

    //LOGICAL OPERATIONS
    printf("LOGICAL\n");
    printf("x > y && y < x: %d\n", x>y && x<y); 
    printf("x > y || y < x: %d\n", x>y || x<y);
    printf("!(x < y && y > x): %d\n\n", !(x<y && x>y));

    //ASSIGNMENTS OPERATIONS 
    x += 9;
    y *= 8;

    printf("ASSIGNMENT\n");
    printf("x += 9: %d\n", x);
    printf("y *= 8: %a\n", y);

return 0;

}

    
