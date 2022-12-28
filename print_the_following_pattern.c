#include<stdio.h>
int main()
{
    //char A,B,C,D,E,t;
    int i,j,n,t;
    scanf("%d",&n);
    for(i=n,t=64+n;i>=1;i--,t--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",t);
        }
        printf("
");
    }
}