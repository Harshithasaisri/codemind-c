#include<stdio.h>
int main()
{
    int n,x,r,sum=0;
    scanf("%d",&n);
    x=n*n;
    while(x>0)
    {
        r=x%10;
        sum+=r;
        x=x/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}