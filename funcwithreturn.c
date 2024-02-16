#include<stdio.h>
int getval();
int main()
{
    printf("Check the number is positive or negative:\n");
    if(getval()<0)
    printf("Entered number is negative..");
    else
    printf("Entered number is negative");
    return 0;
}
int getval()
{
    int x;
    printf("Enter the value:\n");
    scanf("%d",&x);
    return x;
}