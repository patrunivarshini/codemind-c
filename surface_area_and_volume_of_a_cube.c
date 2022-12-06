#include<stdio.h>
float fun(float a)
{
    float sa,v;
    sa=6*a*a;
    printf("Surface area = %0.2f and ",sa);
    v=a*a*a;
    printf("Volume = %0.2f",v);
    return sa,v;
}
int main()
{
    float a;
    float sa,v;
    scanf("%f",&a);
    fun(a);
}