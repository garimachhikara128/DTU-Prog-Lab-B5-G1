#include<stdio.h>

int main()
{
    int n1, n2 ;

    printf("Enter 2 nos ? ") ;
    scanf("%d %d", &n1, &n2) ;

    int min = n1 < n2 ? n1 : n2 ;

    int count = min ;

    while(count >= 1)
    {
        if(n1 % count == 0 && n2 % count == 0)
            break ;

        count = count - 1;
    }

    printf("HCF of %d and %d is %d\n", n1, n2, count) ;

    return 0 ;
}