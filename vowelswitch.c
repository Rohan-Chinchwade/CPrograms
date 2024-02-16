#include<stdio.h>
int main()
{
    char choice;
    printf("Enter the aplphabet you wanna check: ");
    scanf("%c",&choice);

    switch(choice)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel entered");
        break;
        default:
        printf("Enter the valid input..");
        break;
    }
}