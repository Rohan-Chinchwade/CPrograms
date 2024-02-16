#include<stdio.h>
int main()
{
    int no,rev,rem=0;
    printf("Enter the number: ");
    scanf("%d",&no);
    int n=no;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reverse of the number:%d",rev);
    printf("\n");
    if(rev==no)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}