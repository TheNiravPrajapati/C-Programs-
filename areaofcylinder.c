#include<stdio.h>
#define pi 3.14
void main()
{
    int r,h,area;
    printf("Enter radius and height of cylinder : ");
    scanf("%d%d",&r,&h);
    area=2*pi*r*h;
    printf("Area of cylinder is : %d",area);
}
