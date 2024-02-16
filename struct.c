#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    char div;
    int std;
}stud;

int main()
{
    stud.id=1;
    strcpy(stud.name,"Rohan");
    stud.div='A';
    stud.std=10;
    printf("Size of Structure=%d",sizeof(stud));
    printf("\nId=%d",stud.id);
    printf("\nName=%s",stud.name);
    printf("\nDivision=%c",stud.div);
    printf("\nStandard=%d",stud.std);
    return 0;
}