#include<stdio.h>
int main()
{
    int choice=0;
    printf("Enter the number you want to check:");
    scanf("%d",&choice);
    int flag=0;
    if(choice%2==0)
    flag=1;
    switch(flag)
    {
        case 1:
        printf("%d is even",choice);
        break;
        case 0:
        printf("%d is odd",choice);
        break;
        default:
        printf("Enter valid input..");
    }
}