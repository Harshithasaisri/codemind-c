#include<stdio.h>
int main()
{
    int m,n,i,s1=0,s2=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
       if(n%i==0)
       {
           s1+=i;
       }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            s2+=i;
        }
    }
    if(n==s2&&m==s1)
    {
        printf("Amicable");
    }
    else
    printf("Not Amicable");
}