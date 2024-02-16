#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character: "<<endl;
    cin>>ch;

    if(ch=='A'||ch=='Z')
    {
        cout<<"Uppercase Character";
    }
    else if(ch=='a'||ch=='z')
    {
        cout<<"Lowercase Character";
    }
    else if(ch=='0'||ch=='9')
    {
        cout<<"Numeric Character";
    }
}