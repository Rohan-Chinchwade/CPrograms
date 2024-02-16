#include<stdio.h>
int main()
{
    int i,j=0;
    for(i=1;i<=3;i++)
    {
        for(int sp=3-i;sp>0;sp--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}