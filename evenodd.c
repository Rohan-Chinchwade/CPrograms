#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter the value: ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("Number is even");

    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}