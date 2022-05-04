#include<stdio.h>
int main()
{
    int n,sum=0,i,r;
    scanf("%d",&n);
    while(n>9)
    {
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum+=r;
            n=n/10;
        }
        n=sum;
    }
    printf("%d",sum);
}