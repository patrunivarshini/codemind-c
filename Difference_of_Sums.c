#include<stdio.h>
int main()
{
    int n,s=0,c,j=0,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=s+i;
        j=j+i*i;
    }
    c=s*s-j;
    printf("%d",c);
}