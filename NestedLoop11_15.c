#include<stdio.h>
int main()
{
    int i,j;
    for (i=0;i<4;i++)
    {
        for (j=11;j<15;j++)
        {
            printf("%d\t",j);
        }
         printf("\n");
    }

    for(i=0;i<6;i++)
    {
        for(j=15;j>=11;j--)
        {
             printf("%d\t",j);
        }
         printf("\n");
    }
}