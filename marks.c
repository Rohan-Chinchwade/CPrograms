#include<stdio.h>
int main()
{
    int x=0;
    printf("Enter your Marks: ");
    scanf("%d",&x);

    if(x>=75 && x<=100)
    {
        printf("Distinction");
    }
    else if(x<75 && x>=60)
    {
        printf("First Class");

    }
    else if(x<60 && x>=50)
    {
        printf("Second Class");
    }
    else if(x<50 && x>=35)
    {
        printf("Third Class");
    }
    else if(x<35)
    {
        printf("Fail");
    }
    else
    {
        printf("Enter Valid marks:)");
    }

    return 0;
}
