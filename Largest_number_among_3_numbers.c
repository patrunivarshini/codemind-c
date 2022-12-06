#include<stdio.h>
int fun(int a,int b,int c)
{
    if(a>b)
    {
        return 1;
    }
    else if(b>c)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
    int main()
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int k=fun(a,b,c);
        if(k==1)
        {
            printf("%d",a);
        }
        else if(k==2)
        {
            printf("%d",b);
        }
        else
        {
            printf("%d",c);
        }
    }