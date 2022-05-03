#include<stdio.h>
int main()
{
    int n,rev=0,r,tem=0;
    scanf("%d",&n);
    tem=n;
    while(n>0)
    {
        r=n%10;rev=rev*10+r;n=n/10;
    }
    if(tem==rev)
    printf("True");
    else
    printf("False");
}
  