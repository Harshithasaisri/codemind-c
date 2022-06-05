#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>0 || n==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int m,n,a;
    scanf("%d %d",&m,&n);
    for(a=m;a<=n;a++)
    {
        if(prime(a)==0)
        {
            printf("%d
",a);
        }
    }
}
