#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}