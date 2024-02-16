#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
    int no,digit=0;
    cout<<"Enter the number: ";
    cin>>no;
    int i=0;

    while(no!=0)
    {
        int bit=no&1;
        digit=(bit*pow(10,i))+digit;
        no=no>>1;
        i++;

    }
    cout<<"Binary form: "<<digit;
 }