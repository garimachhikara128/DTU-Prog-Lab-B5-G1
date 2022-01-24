#include<stdio.h>

int main()
{
    int a = 10 ;
    int b = 20 ;

    // Swap using extra variable
    a = a + b ; // a = 10 + 20 = 30
    b = a - b ; // b = 30 - 20 = 10
    a = a - b ; // a = 30 - 10 = 20

    printf("a: %d\tb: %d\n", a, b) ;

    return 0 ;
}