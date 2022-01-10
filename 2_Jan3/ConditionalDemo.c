#include<stdio.h>

int main()
{
    int marks = 60 ;

    if(marks >= 91)
    {
        printf("10") ;
    }
    else if(marks >= 82)
    {
        printf("9") ; 
    }
    else if(marks >= 73)
    {
        printf("8") ; 
    }
    else if(marks >= 64)
    {
        printf("7") ; 
    }
    else if(marks >= 55)
    {
        printf("6") ; 
    }
    else if(marks >= 46)
    {
        printf("5") ; 
    }
    else
    {
        printf("Fail") ;   
    }

    return 0 ;
}