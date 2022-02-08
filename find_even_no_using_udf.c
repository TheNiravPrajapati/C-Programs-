#include<stdio.h>
void evenodd();
void main()
{
    evenodd();
}
void evenodd()
{
    int a;
    printf("Enter number : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Number is even ");
    }   
    else
    {
        printf("Number is Odd ");
    }
}