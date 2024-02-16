#include<stdio.h>
#include<string.h>
struct car
{
    /* data */
    int carno;
    char name[20];
    char category[20];
}st;
union student
{
    /* data */
    int id;
    char name[20];
    float marks;
};


int main()
{
    st.carno=10;
    strcpy(st.name,"Swift");
    strcpy(st.category,"Hatchback");
    printf("No:%d",st.carno);
    printf("\nname:%s",st.name);
    printf("\nCategory:%s",st.category);

    union student s1;
    s1.id=101;
    printf("\nId=%d",s1.id);
    strcpy(s1.name,"Rohan");
    printf("\nName=%s",s1.name);
    s1.marks=98.99;
    printf("\nMarks=%f",s1.marks);

    return 0;
}