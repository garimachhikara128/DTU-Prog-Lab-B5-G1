#include<stdio.h>

int main()
{
    int n ;

    printf("Enter N ? ") ;
    scanf("%d", &n) ;

    int a = 0 ;
    int b = 1 ;

    int count = 1 ;
    while(count <= n +1)
    {
        int sum = a + b ;

        printf("%d  ", a) ;

        // a,b update
        a = b ;
        b = sum ;

        count = count + 1;
    }

    printf("\n") ;

    return 0 ;
}