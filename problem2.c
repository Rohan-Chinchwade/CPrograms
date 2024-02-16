#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number you wanna check: ");
    scanf("%d",&num);

    if(num>=0)
    {
        if(num>0)
        printf("Positive number");
        else
        printf("zero entered");
    }
    else
    printf("Negative number");
    // else if(num==0)
    // printf("Zero entered");
    // else if(num>0)
    // printf("Positive number");
}