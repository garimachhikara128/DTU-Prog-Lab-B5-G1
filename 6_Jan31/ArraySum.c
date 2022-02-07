#include<stdio.h>

int main()
{
    int n ;

    printf("Enter n ? ") ;
    scanf("%d", &n) ;

    int arr[n] ;

    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("arr[%d] ? " , i) ;
        scanf("%d", &arr[i]) ;
    }

    int sum = 0 ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        sum = sum + arr[i] ;
    }

    printf("Sum is %d\n", sum) ;

    
    return 0 ;
}