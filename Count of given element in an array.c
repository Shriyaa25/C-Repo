#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int z;
    scanf("%d",&z);
    for(int i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            count++;
        }
    }
    printf("%d",count);
}