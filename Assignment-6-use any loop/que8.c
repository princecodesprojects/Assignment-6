#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    if(i==n)
    printf("%d is prime number",n);
    else
    printf("%d is not prime number",n);
    return 0;
}