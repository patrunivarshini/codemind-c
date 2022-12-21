#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,m,p;
    scanf("%d%d%d",&x,&y,&m);
    if(1<=x<=20&&1<=y<=100&&2<=m<=100)
    {
       z=pow(x,y);
       p=z%m;
       printf("%d",p);
    }
}