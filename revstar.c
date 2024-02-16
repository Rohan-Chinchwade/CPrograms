#include<stdio.h>
int main()
{
    int i,j=0;
    for(i=3;i>0;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}