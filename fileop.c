#include<stdio.h>
int main()
{
    FILE* ptr;
    // ptr=fopen("file1.txt","w");
    // printf("File Created Sucessfully..");
    // fprintf(ptr,"C is base for all programming languages.\nC is easy to learn");
    // ptr=fopen("file1.txt","r");
    // char data[50];
    // while(fgets(data,50,ptr))
    // {
    //     printf("%s",data);
    // }
    ptr=fopen("file1.txt","a+");
    fprintf(ptr,"\nAppended with a+");
    printf("Data appended sucessfully.");
    return 0;
}