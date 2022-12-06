#include<stdio.h>
void fun(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum=sum+i;
        }
    }
    printf("%d",sum);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    fun(n);
}