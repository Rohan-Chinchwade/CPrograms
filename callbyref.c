#include<stdio.h>
int mul(int* a,int* b);
int main()
{
    int x,y;
    printf("Call by reference:\n");
    printf("Enter the values:\n");
    scanf("%d %d",&x,&y);
    mul(&x,&y);
}
int mul(int* a,int* b)
{
    printf("\nThe multiplication %d*%d=%d",*a,*b,(*a * *b));
}