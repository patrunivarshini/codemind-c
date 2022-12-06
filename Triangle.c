#include<stdio.h>
int fun(int a,int b,int c)
{
    if(a==b && b==c)
    {
        return 1;
    }
    else if(a==b||a==c||b==c)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int k=fun(a,b,c);
    if(k==1)
    {
        printf("Equilateral triangle");
    }
    else if(k==2)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene triangle");
    }
}