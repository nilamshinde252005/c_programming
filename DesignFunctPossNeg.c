#include<stdio.h>
int posNeg(int n);
int posNeg(int n)
{
   
}
int main()
{
    int n,res;
    printf("enter a no");
    scanf("%d",&n);
    res=posNeg(n);
    if(res>=0)
    printf("no is  negative");
    else
    printf("no is possitive");
}