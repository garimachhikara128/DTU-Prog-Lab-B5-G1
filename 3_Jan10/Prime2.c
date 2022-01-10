#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int factor = 0 ;
    int count = 2 ;

    while(count <= n-1)
    {
        if(n % count == 0)
        {
            factor = factor + 1 ;
            break ;
        }

        count = count + 1;
    }

    if(factor == 0)
        printf("%d is prime\n", n) ;
    else
        printf("%d is not prime\n", n) ;

    return 0 ;
}