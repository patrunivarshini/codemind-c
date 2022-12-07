#include<stdio.h>
void fun(int a,int b)
{
    int c;
    c=a+b;
    printf("%d",c);
}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    fun(a,b);
}