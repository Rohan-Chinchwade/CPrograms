#include<stdio.h>
int evenodd(int a);
int main()
{
    int num;
    printf("Enter the value to check even or odd:\n");
    scanf("%d",&num);
    if(evenodd(num)==0)
    printf("%d is even",num);
    else
    printf("%d is odd",num);
    return 0;
}
int  evenodd(int x)
{
    int num=x;
    if(num%2==0)
    return 0;
    else
    return 1;
}