#include<stdio.h>
float y=23.45;
void display();
int main()
{
    int x=20;
    printf("The local Variable=%d,The Global Variable=%f",x,y);
    display();
    return 0;
}
void display()
{
    int x=30;
    printf("\nThe local Variable=%d,The Global variable=%f",x,y);
}