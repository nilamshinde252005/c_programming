#include<stdio.h>
void SqCube(int,int,int*,int*);
void SqCube (int n1, int n2,int *cube,int *sq)
{
    *sq=n1*n1;
    *cube=n2*n2*n2;
}

    int main()
{
    int n1,n2,sq,cube;
    printf("enter val for n1 and n2");
    scanf("%d%d",&n1,&n2);
   SqCube( n1,  n2,& cube,& sq);
   printf("sq=%d \n cube=%d",sq,cube);
}