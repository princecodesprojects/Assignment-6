#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any nunber");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+2*i-1;
    }
    printf("sum of %d odd numbers is %d",n,sum);
}