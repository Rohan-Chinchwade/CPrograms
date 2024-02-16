#include<stdio.h>
int main()
{
    char a2[6]="Mentor";
    char a1[5]={'s','e','v','e','n'};
    //char a2[6]="Mentor";
    printf("\t%c",a1);
    for(int i=0;i<=4;i++)
    {
        printf(" %c",a1[i]);
    }
    printf("%s",a2);
    return 0;
}