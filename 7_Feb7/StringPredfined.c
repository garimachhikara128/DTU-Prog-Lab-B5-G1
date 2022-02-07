#include<stdio.h>
#include<string.h>

int main()
{

    char arr[20] ;

    printf("Enter String ? ") ;
    scanf("%s", arr) ;

    printf("Len : %d\n", strlen(arr)) ;

    printf("%d\n", strcmp("code","code")) ;
    printf("%d\n", strcmp("code","coal")) ;
    printf("%d\n", strcmp("code","coding")) ;


    return 0 ;
}