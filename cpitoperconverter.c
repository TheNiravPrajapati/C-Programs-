#include<stdio.h>
void main()
{
    float a,per;
    printf("Enter your CPI /Spi : ");
    scanf("%f",&a);
    per = (a-0.5)*10;
    printf("The percentage of %f is %f",a,per);
}