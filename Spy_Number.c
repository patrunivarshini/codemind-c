#include<stdio.h>
int main()
{
    int n,r,s=0,p=1;
    scanf("%d",&n);
    int t=n;
    while(t!=0)
    {
        r=t%10;
        s=s+r;
        p=p*r;
        t=t/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}