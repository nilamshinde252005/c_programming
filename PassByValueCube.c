#include<stdio.h>
int cube(int n);
int cube(int n)
{
    return n*n*n;
}

    int main()

{
    int n;
    printf("enter a no");
    scanf("%d",&n);
   
    printf("cube of %d is %d",n);
}