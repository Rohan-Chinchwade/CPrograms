#include<stdio.h>
int main()
{
    // int num=0;;
    // int* p;
    // // printf("The address of num is:%x\n",&num);
    // // p=&num;
    // // printf("The value stored in pointer is:%d\n",*p);
    // // printf("The Address stored in p is:%x",p);
    // // return 0;
    // printf("Enter the number you want to check:");
    // scanf("%d",&num);
    // p=&num;
    // // if(*p%2==0)
    // // printf("Even..");
    // // else
    // // printf("Odd...");
    // if(*p>=0)
    // printf("Positive number");
//     else
//     printf("Negative number");
char a;
char* p;
printf("Enter the character you want to check:");
scanf("%c",&a);
p=&a;
if(*p=='a'||*p=='b'||*p=='c'||*p=='d'||*p=='e')
printf("Alphabets..");
else if(*p=='1'||*p=='2'||*p=='3'||*p=='4'||*p=='5')
printf("Numbers");
return 0;
}