#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("A is minimum : %d",a);
    }
    else
    printf("B is minimum");
}