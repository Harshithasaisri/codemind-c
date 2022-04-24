#include<stdio.h>
int main()
{
    int x,y,t,gcd;
    scanf("%d%d",&x,&y);
    while(y!=0)
    {
        t=y;
        y=x%y;
        x=t;
    }
    gcd=x;
    printf("%d",gcd);
}