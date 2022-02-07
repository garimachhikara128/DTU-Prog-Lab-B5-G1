#include<stdio.h>

int main()
{
    char arr[20] ;

    printf("Enter String ? ") ;
    scanf("%s", arr) ;

    int i = 0 ;
    while(arr[i] != '\0')
        i++ ;

    printf("Length of %s is %d\n", arr, i) ;

    return 0 ;
}