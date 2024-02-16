#include<stdio.h>
int main()
{
    int a,b=0;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);

    printf("Binary And:",(a|b));
}