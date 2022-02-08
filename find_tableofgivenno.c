#include<stdio.h>
void table();
void main()
{
    table();
}
void table()
{
    int n;
    printf("Enter number of table you want :");
    scanf("%d",&n);
    for(int i=1; i<=10; i++)
    {
        printf("\n%d * %d = %d",n,i,n*i);
    }

}