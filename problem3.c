#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number from 1 to 7:");
    scanf("%d",&n);
    if(n>=1&&n<=7)
    {
        if(n==1)
        printf("Sunday");
        else if(n==2)
        printf("Monday");
        else if(n==3)
        printf("Tuesday");
        else if(n==4)
        printf("Wednesday");
        else if(n==5)
        printf("Thursday");
        else if(n==6)
        printf("Friday");
        else
        printf("Saturday");
    }
    else
    {
        printf("Enter valid choice..");
    }
}