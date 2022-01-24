#include<stdio.h>

int main()
{
    int a = 10 ;
    int b = 20 ;

    // Swap using extra variable
    int temp = a ;
    a = b ;
    b = temp ;

    printf("a: %d\tb: %d\n", a, b) ;


    return 0 ;
}