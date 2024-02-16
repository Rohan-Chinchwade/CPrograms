#include<stdio.h>
int main()
{
    int row,col=0;
    //char x='A';
    for(row=1;row<=5;row++)
    {
        char x='A';
        for(col=1;col<=5;col++)
        {
            
            printf("%c ",x);
            x++;
            
        }
        printf("\n");
    }
    return 0;
}