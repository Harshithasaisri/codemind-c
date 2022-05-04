#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s1=0,s2=0,d=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1+=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            s2+=a[i];
        }
    }
    d=s1-s2;
    printf("%d",d);
}