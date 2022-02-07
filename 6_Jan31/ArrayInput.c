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

    printf("Array is : \n") ;
    for(int i = 0 ; i <= n-1 ; i++)
    {
        printf("%d\n", arr[i]) ;
    }

    
    return 0 ;
}