#include<stdio.h>
void main()
{
    for(int i=0; i<=10; i++)
    {
        for(int j=0; j<10-i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<10-i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}