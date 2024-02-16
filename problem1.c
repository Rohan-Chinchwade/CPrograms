#include<stdio.h>
int main()
{
    int userpin,pin;
    pin=7960;
    printf("Enter the pin: ");
    scanf("%d",&userpin);
    if(userpin==pin)
    {
        printf("Login Sucessfully..");
    }
    else
    {
        printf("Incorrect pin entered.");
    }
}
