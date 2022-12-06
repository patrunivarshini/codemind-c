#include<stdio.h>
float fun(int r)
{
    float a,p;
    a=3.14*r*r;
    printf("%0.2f
",a);
    p=2*3.14*r;
    printf("%0.2f",p);
    return a,p;
}
int main()
{
    int r;
    float a,p;
    scanf("%d",&r);
    fun(r);
}