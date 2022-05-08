#include<stdio.h>
int main()
{
    int m,n,i,c=0,d=0,k=0,x;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        x=i;
        k=0;c=0;
        while(x)
        {
            d=x%10;
            if(d!=0&&i%d==0)
            {
                k++;
            }
            x=x/10;
            c++;
        }
        if(c==k)
        {
            printf("%d ",i);
        }
    }
}