#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("Nirav.txt","w");
    fprintf(ptr,"My name is nirav");
    fclose(ptr);

}