#include<stdio.h>

int main()
{
    int r1, c1, r2, c2 ;

    printf("Enter r1 and c1 ?\n") ;
    scanf("%d %d", &r1, &c1) ;

    printf("Enter r2 and c2 ?\n") ;
    scanf("%d %d", &r2, &c2) ;

    int one[r1][c1] ;
    int two[r2][c2] ;

    for(int r = 0 ; r < r1 ; r++)
    {
        for(int c = 0 ; c < c1 ; c++)
        {
            printf("one[%d][%d] ? ", r, c) ;
            scanf("%d", &one[r][c]) ;
        }
    }

    for(int r = 0 ; r < r2 ; r++)
    {
        for(int c = 0 ; c < c2 ; c++)
        {
            printf("two[%d][%d] ? ", r, c) ;
            scanf("%d", &two[r][c]) ;
        }
    }

    int res[r1][c2] ;

    for(int i = 0 ; i < r1 ; i++)
    {
        for(int j = 0 ; j < c2 ; j++)
        {
            int sum = 0 ;
            for(int k = 0 ; k < c1 ; k++)
            {
                sum += one[i][k] * two[k][j] ;
            }
            res[i][j] = sum ;
            printf("%d\t", res[i][j]) ;
        }
        printf("\n") ;
    }

    return 0 ;
}

