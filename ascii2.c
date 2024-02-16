#include<stdio.h>
int main()
{
    char ch='A';
    int n=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\nThe Character %c has ASCII value:%d",ch,ch);
        ch++;
    }
}