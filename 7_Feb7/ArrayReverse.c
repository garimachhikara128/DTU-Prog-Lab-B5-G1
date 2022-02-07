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

    // reverse logic ...
    int i = 0 ;
    int j = n-1 ;

    while(i < j)
    {
        // swap
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++ ;
        j-- ;

    }

    printf("Reversed array is :\n") ;
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t", arr[i]) ;
    }
    printf("\n") ;

    return 0 ;
}