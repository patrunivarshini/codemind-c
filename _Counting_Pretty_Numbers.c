#include <stdio.h>
int main(void) 
{
	int t,i,l,r,j,count;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    count=0;
	    scanf("%d %d", &l, &r);
	    for(j=l;j<=r;j++)
	    {
	        int ld=j%10;
	        if(ld==2 || ld==3 || ld==9)
	        count++;
	    }
	    printf("%d
", count);
	}
	return 0;
}