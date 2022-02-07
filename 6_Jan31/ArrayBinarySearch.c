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

    int item ;
    printf("Enter item to be serached ? ") ;
    scanf("%d", &item) ;

    int res = -1 ;

    int lo = 0 ;
    int hi = n-1 ;

    while(lo <= hi)
    {
        int mid = (lo+hi) / 2 ;

        if(item > arr[mid])
        {
            lo = mid + 1 ;
        }
        else if(item < arr[mid])
        {
            hi = mid - 1 ;
        }
        else
        {
            res = mid ;
            break ;
        }     

    }

    printf("%d is present at %d index.\n", item, res) ;

    return 0 ;
}