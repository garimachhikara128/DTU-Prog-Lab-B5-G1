#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ? ") ;
    scanf("%d", &n) ;

    while(n != 0)
    {
        int rem = n % 10 ;
        printf("%d", rem) ;
        n = n / 10 ;
    }

    return 0 ;
}