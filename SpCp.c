#include<stdio.h>
void main()
{
    int sp,cp ,loss,profit;
    printf("enter cost price");
    scanf("%d%d",&sp,&cp);
    if(sp>cp)
    {
        profit=sp-cp;
        printf("there is a profit of %d",profit);
    }
        if(cp>sp)
    {
        loss=cp-sp;
        printf("there is a loss of %d",loss);
    }

}