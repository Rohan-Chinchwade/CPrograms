#include<stdio.h>
int main()
{
    int x,y=0;
    printf("Enter the values of x and y: ");
    scanf("%d%d",&x,&y);

    if(x>=y)
    {
        printf("X is greater than Y");
    }
    else
    {
        printf("Y is greater than X");
    }
    return 0;
}