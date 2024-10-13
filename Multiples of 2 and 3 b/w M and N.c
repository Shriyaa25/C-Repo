#include<stdio.h>
int main()
{
    int m,n;
    int count=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%2==0 && i%3==0)
        {
            count+=1;
        }
    }
    printf("%d",count);


}