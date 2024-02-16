#include<stdio.h>
int main()
{
    int val=0;
    printf("Enter the value: ");
    scanf("%d",&val);

    if(val>0)
    {
        if(val%2==0)
        {
            printf("Number is even.");
        }
        else
        {
            printf("Number is odd.");
        }
    }
    else
    {
        printf("Enter valid input");
    }
    return 0;
}