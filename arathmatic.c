#include<stdio.h>
void main()
{
    int a,b,sum,sub,mul,devi;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    devi=a/b;
    printf("\nAdddition is : %d ",sum);
    printf("\nSubtraction is : %d",sub);
    printf("\nMultiplication is : %d",mul);
    printf("\nDevision is : %d ",devi);
}