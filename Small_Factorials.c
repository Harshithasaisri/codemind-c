#include<stdio.h>
int factorial(int n)
{
    int i,a=1;
    for(i=1;i<=n;i++)
    {
        a*=i;
    }
    return a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=factorial(a[i]);
        printf("%d
",c);
    }
}