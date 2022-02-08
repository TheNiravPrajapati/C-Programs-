//this program is for pratice
#include <stdio.h>
void heart();
void main()
{
    int a;
    printf("I LOVE YOU \n");
    printf("Press 1 for YES \n");
    printf("Press 2 for NO \n");
    scanf("%d", &a);
    if (a == 1)
    {
        heart();
        printf("Congrats Nirav Party hard");
    }
    else
    {
        printf("Bad luck Nirav");
    }
}
void heart()
{
    int r, c;
    for (r = 15 / 2; r <= 15; r += 2)
    {
        for (c = 1; c < 15 - r; c += 2)
            printf(" ");
        for (c = 1; c <= r; c++)
            printf("*");
        for (c = 1; c <= 15 - r; c++)
            printf(" ");
        for (c = 1; c <= r; c++)
            printf("*");
        printf("\n");
    }
    for (r = 15; r >= 1; r--)
    {
        for (c = r; c < 15; c++)
            printf(" ");
        for (c = 1; c <= (2 * r) - 1; c++)
            printf("*");
        printf("\n");
    }
}