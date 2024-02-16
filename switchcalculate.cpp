#include<iostream>
using namespace std;
int main()
{
    int a,b=0;
    char op;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<"Enter the operation"<<endl;
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<"Addition:"<<(a+b);
        break;

        case '-':
        cout<<"Subtraction:"<<(a-b);
        break;

        case '*':
        cout<<"Multiplication:"<<(a*b);
        break;

        case '/':
        cout<<"Division:"<<(a/b);
        break;

        default:
        cout<<"Enter the valid operation.";

    }
}