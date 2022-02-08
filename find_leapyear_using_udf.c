#include<stdio.h>
void year();
void main()
{
    year();
}
void year()
{
    int year;
    printf("Enter year :");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("this is leap year");

    }
    else 
    {
        printf("This is not a leap year");
    }
}