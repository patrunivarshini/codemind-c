#include<stdio.h>
int main()
{
    int i,n,r,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        printf("PERFECT");
    }
    else if(s<n)
    {
        printf("DEFICIENT");
    }
    else if(s>n)
    {
        printf("ABUNDANT");
    }
}