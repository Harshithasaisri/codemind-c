#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=sqrt(a);
    if(b*b==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}