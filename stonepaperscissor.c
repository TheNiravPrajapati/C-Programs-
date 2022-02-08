#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int swg(char you, char comp)
{
    //drawcase 
    if(you==comp)
    {
        return 0;
    }
    //non draw case 
    if (you=='s' && comp=='r')
    {

        return -1;
    }
    else if(you=='r' && comp=='s')
    {
        return 1;
    }
    if (you=='s' && comp=='p')
    {
        return 1;
    }
    else if(you=='p' && comp=='s')
    {
        return -1;
    }
    if (you=='p' && comp=='r')
    {
        return 1;
    }
    else if(you=='r' && comp=='p')
    {
        return -1;
    }
}
int main()
{
    char you,comp;
    srand(time(0));
    int number = rand()%100+1;
    if(number<33)
    {
        comp='s';
    }
    else if (number > 33 && number <66)
    {
        comp='r';
    }
    else 
    {
        comp='p';
    }
    printf("Enter s for scissor  r for rock and p for paper \n");
    scanf("%c",&you);
    int result = swg(you,comp);
    printf("You chose %c  computer chose %c :\n",you,comp);
    if (result==0)
    {
        printf("Game draw");
    }
    else if (result==1)
    {
        printf("You win");
    }
    else
    {
        printf("You lose ");
    }
    return 0;
}