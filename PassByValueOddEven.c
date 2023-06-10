#include<stdio.h>
int evenOdd(int a);
int evenOdd(int a)
{
    if(a%2==1)
    return 1;
    else
    return 0;
}
int main()
{
    int n,res;
    printf("enter no");
    scanf("%d",&n);
    res=evenOdd(n);
    if(res==1)
    printf("no id even");
    else
    printf("no is odd");
}