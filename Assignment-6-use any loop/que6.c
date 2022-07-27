#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
     sum=sum*i;
    }
    printf("factorial of %d is %d",n,sum);
    return 0;
}