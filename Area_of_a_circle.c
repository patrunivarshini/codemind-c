#include<stdio.h>
void fun(int r)
{
     float a;
    a=3.14*r*r;
    printf("%0.2f",a);
}
int main()
{
    int r;
    float a;
    scanf("%d",&r);
    fun(r);
}