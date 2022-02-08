#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("A is max : %d",a);
    }
    else 
    printf("B is max : %d",b);
}