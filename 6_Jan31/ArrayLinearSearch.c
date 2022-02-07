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

    for(int i = 0 ; i <= n-1 ; i++)
    {
        if(arr[i] == item)
        {
            res = i ;
            break ;
        }

    }

    printf("%d is present at %d index.\n", item, res) ;

    return 0 ;
}