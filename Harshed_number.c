#include<stdio.h>
int main()
{
    int n,tem,sum=0,r;
    scanf("%d",&n);
    tem=n;
    while(n>0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    if(tem%sum==0)
    printf("True");
    else
    printf("False");
}