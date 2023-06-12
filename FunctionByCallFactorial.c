#include<stdio.h>
factorial(int n);
factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    
    }
    return fact;
}
int main()
{
    int n,res;
    printf("enter no");
    scanf("%d",&n);
    res=factorial(n);
    printf("factorial of %D is %D",res,n);
}
