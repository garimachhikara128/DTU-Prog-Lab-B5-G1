#include<stdio.h>

int main()
{
    // int p ;
    // int r ;
    // int t ;
    int p, r, t ;

    printf("Enter the value of p, r and t ?\n") ;
    scanf("%d %d %d", &p, &r, &t) ;

    int si = (p * r * t) / 100 ;
    printf("Simple Interest is %d Rs.\n", si) ;

    return 0 ;
}