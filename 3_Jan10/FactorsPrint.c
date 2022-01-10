#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ?\n") ;
    scanf("%d", &n) ;

    int count = 1 ;

    while(count <= n)
    {
        int rem = n % count ;

        if(rem == 0)
        {
            printf("%d is a factor\n", count) ;
        }

        count = count + 1;
    }

    return 0 ;
}