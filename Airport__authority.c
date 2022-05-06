#include<stdio.h>
int main()
{
    int a[100],n,i,t,s1=0,s2=0,c=0,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]<=t)
        {
            s1++;
        }
        else
        {
           s2++; 
        }
    }
    c=s2*2;
    m=s1+c;
    printf("%d",m);
}