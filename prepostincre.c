#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value: ");
    scanf("%d",&a);

    printf("a++:%d\n",a++);
    printf("a--:%d\n",a--);
    printf("++a:%d\n",++a);
    printf("--a:%d\n",--a);
    printf("a:%d\n",a);
}