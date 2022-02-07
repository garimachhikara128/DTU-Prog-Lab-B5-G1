#include<stdio.h>

int main()
{
    char arr[20] ;

    printf("Enter String ? ") ;
    scanf("%s", arr) ;

    int len = 0 ;
    while(arr[len] != '\0')
        len++ ;

    int i = 0 ;
    int j = len - 1 ;

    while(i < j)
    {
        char temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;

        i++ ;
        j-- ;
    }

    printf("String after reversal is %s\n", arr) ;

    return 0 ;
}