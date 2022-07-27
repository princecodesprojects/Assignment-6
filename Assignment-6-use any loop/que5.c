#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any nunber");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("sum of square %d numbers is %d",n,sum);
}