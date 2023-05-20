#include<stdio.h>
int main()
{
    float b,h,d,g;
    scanf("%f",&b);
    if(b<=10000)
    {
        d=b*0.80;
        h=b*0.20;
        g=b+d+h;
        printf("%0.2f",g);
    }
    else if(b<=20000)
    {
        d=b*0.90;
        h=b*0.25;
        g=b+d+h;
        printf("%0.2f",g);
    }
    else if(b>20000)
    {
        d=b*0.95;
        h=b*0.30;
        g=b+d+h;
        printf("%0.2f",g);
    }
}