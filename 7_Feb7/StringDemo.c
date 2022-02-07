#include<stdio.h>

int main()
{   
    char arr[20] ;

    scanf("%s", arr) ;
    printf("%s\n", arr) ;

    for(int i= 0 ; arr[i] != '\0' ; i++)
        printf("%c", arr[i]) ;

    return 0 ;
}