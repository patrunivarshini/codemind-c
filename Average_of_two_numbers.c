#include<stdio.h>
void fun(int a,int b)
{
    float avg;
    avg=(a+b)*0.5;
    printf("Average of %d and %d is: %0.2f",a,b,avg);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    fun(a,b);
}