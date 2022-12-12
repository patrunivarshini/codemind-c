#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,avg;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("%0.2f",avg);
}