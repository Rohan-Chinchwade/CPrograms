#include<stdio.h>
int evenodd();
int main()
{
    printf("Checking the number:\n");
    if(evenodd()%2==0)
    printf("Entered number is even..");
    else
    printf("Entered number is odd.");
    return 0;
}
int evenodd()
{
    int x;
    printf("Enter the number you wanna check:\n");
    scanf("%d",&x);
    return x;
}