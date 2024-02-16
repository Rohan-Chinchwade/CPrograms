#include<stdio.h>
int main()
{
    // for(int row=1;row<=5;row++)
    // {
    //     for(int col=5;col>=1;col--)
    //     {
    //         printf("%d ",col);
    //     }
    //     printf("\n");
    // }
    // for(int row=5;row>=1;row--)
    // {
    //     char a;
    //     for(int col=5,a=69;col>=row;col--,a--)
    //     {
    //         printf("%c ",a);
    //     }
    //     printf("\n");
    // }
    // for(int row=1;row<=5;row++)
    // {
    //     //char a;
    //     for(int col=5,a=1;col>=row;col--,a++)
    //     {
    //         printf("%d ",a);
    //     }
    //     printf("\n");
    // }
    for(int row=1;row<=5;row++)
    {
        char a=69;
        for(int col=5;col>=row;col--)
        {
            printf("%c ",a);
            a--;
        }
        printf("\n");
    }
}