#include<stdio.h>
int main()
{
    int x,y,t,g;
    scanf("%d%d",&x,&y);
    while(y>0)
    {
        t=y;
        y=x%y;
        x=t;
    }
    g=t;
    printf("%d",g);
}