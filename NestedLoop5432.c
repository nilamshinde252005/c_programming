#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=5;j>=2;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}