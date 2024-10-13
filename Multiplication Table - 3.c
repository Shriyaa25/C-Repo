#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}