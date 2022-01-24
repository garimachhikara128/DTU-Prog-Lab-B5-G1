#include<stdio.h>

int main()
{
    int n1 ;
    int n2;

    printf("Enter 2 nos ? ") ;
    scanf("%d %d", &n1, &n2) ;

    // ------------- HCF -------------
    int divident = n1 ;
    int divisor = n2 ;

    while(1)
    {
        int rem = divident % divisor ;

        if(rem == 0)
            break ;

        divident = divisor ;
        divisor = rem ;
    }

    int hcf = divisor ; 

    // ------------- LCM -------------

    int lcm = (n1 * n2) / hcf ;
    printf("LCM of %d and %d is %d\n", n1, n2, lcm) ;

    return 0 ;
}