#include<stdio.h>
int palindrome(int n)
{
    int temp,r,rev=0;
    temp=n;
    while(n>0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    if(rev==temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
      }
    for(i=0;i<n;i++)
    {
        if(palindrome(a[i])==true)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}
