#include<stdio.h>
int sum(int n);
int main()
{
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("\nSum of %d numbers is %d",x,sum(x));

    return 0;
}
int sum(int n)
{
    if(n==0||n<0)
    return 0;
    return n+sum(n-1);
}