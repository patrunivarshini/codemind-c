#include<stdio.h>
int main()
{
    int l,b,w,c,tc,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=(l+2*w)*(b+2*w)-(l*b);
    tc=c*a;
    printf("%d",tc);
}