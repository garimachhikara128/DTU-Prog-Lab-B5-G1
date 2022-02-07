#include<stdio.h>
#include<limits.h>

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

    int max = INT_MIN ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] > max)
            max = arr[i] ;
    }

    printf("Maximum is %d\n", max) ;

    
    return 0 ;
}