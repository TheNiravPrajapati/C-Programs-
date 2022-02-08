#include<stdio.h>
void main()
{
    int r,num=0,n;
    printf("Enter number :");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        num=num*10+r;
    }
    printf("Reversed numver : %d",num);
}