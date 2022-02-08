#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("A is minimum : %d",a);
    }
    else if(b<c)
    {
        printf("b is minimum : %d",b);
    }
    else 
    printf("C is minimum : %d ",c);
}