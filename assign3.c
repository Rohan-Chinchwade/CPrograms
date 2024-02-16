#include<stdio.h>
int main()
{
    int row,col=0;
    for(row=3;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}