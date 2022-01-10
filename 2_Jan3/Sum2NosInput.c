#include<stdio.h>

int main()
{

    int a ;
    int b ;

    printf("Enter the value of a ?\n") ;
    scanf("%d", &a) ;

    printf("Enter the value of b ?\n") ;
    scanf("%d", &b) ;

    int sum = a + b ;

    printf("%d + %d = %d\n", a, b, sum) ;

    return 0 ;

}