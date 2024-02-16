#include<stdio.h>
int main()
{
    int i,j,sp=0;
    int n=3;
    for(i=n;i>0;i--)
    {
        for(sp=3-i;sp>0;sp--)
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
