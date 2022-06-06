#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,b,c,d=0,sum=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d%d",&b,&c);
    
    for(i=0;i<n;i++)
    {
        if(a[i]>=b && a[i]<=c)
        {
            d++;
           printf("%d ",a[i]);
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}
