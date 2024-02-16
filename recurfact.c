#include<stdio.h>
int fact(int n);
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d",&x);
    printf("The factorial of %d is %d",x,fact(x));
    return 0;
    
}
