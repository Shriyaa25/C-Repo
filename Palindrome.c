#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    int rev=0;
    while(n!=0)
    {
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==m)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}