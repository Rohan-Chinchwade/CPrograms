#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    printf("Alphabets");
    else if(ch>='0'&&ch<='9')
    printf("Number");
    else
    printf("Special Symbols");
    //printf("The value of ch=%d",ch);
}