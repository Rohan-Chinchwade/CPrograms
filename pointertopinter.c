#include<stdio.h>
int main()
{
    int num,*p1,**p2;
    printf("Enter the number:");
    scanf("%d",&num);
    p1=&num;
    p2=&p1;
    printf("The address of p1:%x",p1);
    printf("\nThe value at p1:%d",*p1);
    printf("\nThe address value at p2:%x",*p2);
    // printf("\nThe value:%d",**p2);
    if(**p2%2==0)
    printf("The value %d is even...",**p2);
    else
    printf("The value %d is odd..",**p2);
}