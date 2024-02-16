#include<stdio.h>
int main()
{
    for(char i=65;i<=90;i++)
    {
        if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
        {
            printf("%c\n",i);
        }
    }
    return 0;
}