#include<stdio.h>
void add();
int main()
{
    printf("Implementing add function:\n");
    add();
    printf("\nTerminating the program..");
    return 0;
}
void add()
{
    int a, b;
    printf("Enter any two numbers to add:\n");
    scanf("%d %d",&a,&b);
    printf("The addition of %d+%d=%d",a,b,(a+b));
}