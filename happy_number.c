#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    while(sum!=1&&sum!=4)
    {
        sum=0;
        while(n>0)
        {
            i=n%10;
            sum+=(i*i);
            n=n/10;
        }
        n=sum;
    }
    if(sum==1)
    printf("True");
    else
    printf("False");
}