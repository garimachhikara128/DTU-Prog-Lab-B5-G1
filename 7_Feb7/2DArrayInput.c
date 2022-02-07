#include<stdio.h>

int main()
{
    int rows, cols ;

    printf("Enter rows ?\n") ;
    scanf("%d", &rows) ;

    printf("Enter cols ?\n") ;
    scanf("%d", &cols) ;

    int arr[rows][cols] ;

    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("arr[%d][%d] ? ", r, c) ;
            scanf("%d", &arr[r][c]) ;
        }
    }

    for(int r = 0 ; r < rows ; r++)
    {
        for(int c = 0 ; c < cols ; c++)
        {
            printf("%d\t", arr[r][c]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}