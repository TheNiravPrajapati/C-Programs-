#include<stdio.h>
void posneg();
void main()
{
    posneg();
}
void posneg()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Number is positive ");
    }
    else if(a<0)
    {
        printf("Number is negative");
    }
    else 
    {
        printf("Number is nutural");
    }
}