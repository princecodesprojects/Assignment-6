#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,cont=0;
    printf("Enter a number");
    scanf("%d",&n);

while(n)
{
    n=n/10;
    cont++;
}
printf("Digits is %d",cont);
return 0;
}