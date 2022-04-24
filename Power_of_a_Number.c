#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,a,b;
    scanf("%d%d%d",&x,&y,&z);
    a=pow(x,y);
    b=a%z;
    printf("%d",b);
}