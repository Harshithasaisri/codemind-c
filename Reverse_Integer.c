#include<stdio.h>
int main()
{
    int n,i,r,rev=0,sum=0;
    scanf("%d",&n);
   while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(n<0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}