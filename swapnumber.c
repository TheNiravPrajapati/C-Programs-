#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    printf("Before swap %d %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap %d %d ",a,b);
}