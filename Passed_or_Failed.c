#include<stdio.h>
void fun(int e,int m,int p,int c,int cs)
{
   if(e>=34&&m>=34&&p>=34&&c>=34&&cs>=34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    } 
}
int main()
{
    int e,m,p,c,cs;
    scanf("%d%d%d%d%d",&e,&m,&p,&c,&cs);
    fun(e,m,p,c,cs);
}