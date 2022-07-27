#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n)
    {
        int r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}