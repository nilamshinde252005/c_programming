#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter 3 angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b||b==c||a==c)
printf("tri is ios");
else
printf("tri is not ios");
}