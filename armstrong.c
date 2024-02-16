#include<stdio.h>
int main()
{
    int no,n,res,rem;
    printf("Enter the three digit number you want to check:");
    scanf("%d",&no);
    n=no;
    while(n!=0)
    {
        rem=n%10;
        res+=rem*rem*rem;
        n/=10;
    }
    if(res==no)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not a armstrong number");
    }
}