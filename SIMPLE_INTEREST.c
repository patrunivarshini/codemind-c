#include<stdio.h>
void fun(int p,int t,int r)
{
    int si;
    si=(p*t*r)/100;
    printf("%d",si);
}
int main()
{
    int p,t,r,si;
    scanf("%d%d%d",&p,&t,&r);
    fun(p,t,r);
}