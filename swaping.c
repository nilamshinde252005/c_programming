#include<stdio.h>
int main()
{
    int x=100,y=200;
    printf("before swaping x=%d y=%d,x,y");
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n\nafter swaping x=%d y=%d,x,y");
}