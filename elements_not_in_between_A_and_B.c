#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b,c,v=0;
     for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
     for(i=0;i<n;i++)
    {
        if(a[i]<b||a[i]>c)
        {
            printf("%d ",a[i]);
            v++;
       }
    }
    if(v==0)
    {
        printf("-1");
    }
}