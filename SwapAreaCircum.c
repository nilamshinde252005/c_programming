#include<stdio.h>
    void AreaCircum(float r,float*ar,float*cr);
        void AreaCircum(float r,float*ar,float*cr)
{
    *ar=3.14*r*r;
*cr=2*3.14*r;
}
int main()
{
    float r,area,circum;
    printf("enter radius");
    scanf("%f",&r);
    AreaCircum (r,&area,&circum);
    printf("area=%f,\n circum=%f",area,circum);
}