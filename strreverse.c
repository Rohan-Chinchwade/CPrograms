#include<stdio.h>
int main()
{
    char str[17]="Rohan Chinchwade";
    printf("Before reversing:\n");
    printf("%s",str);
    for(int i=0,j=(sizeof(str)/sizeof(char))-1;i<(sizeof(str)/sizeof(char));i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("\nAfter reversing:\n");
    printf("%s",str);
    return 0;
}