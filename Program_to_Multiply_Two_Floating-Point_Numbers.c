#include<stdio.h>
void fun(float a,float b)
{
    float c;
    c=a*b;
    printf("%0.2f",c);
}
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    fun(a,b);
}