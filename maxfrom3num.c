#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is maximum : %d",a);
    }
    else if(b>c)
    {
        printf("b is maximum : %d",b);
    }
    else 
    printf("C is maximum : %d ",c);
}