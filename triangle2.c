#include<stdio.h>
int main()
{
    // for(int row=1;row<=5;row++)
    // {
    //     for(int col=1;col<=row;col++)
    //     {
    //         printf("%d ",col);
    //     }
    //     printf("\n");
    // }
    // char a;
    // for(int row=1;row<=5;row++)
    // {
    //     for(int col=1,a='a';col<=row;col++,a++)
    //     {
    //         printf("%c ",a);
    //     }
    //     printf("\n");
    // }
    char a;
    for(int row=1;row<=5;row++)
    {
        for(int col=1,a=65;col<=row;col++,a++)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
}