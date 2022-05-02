#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,sum=0, avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            c++;
        }
    }
    if(c>=1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}