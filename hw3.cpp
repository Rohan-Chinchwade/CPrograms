#include<iostream>
using namespace std;
int main()
{
    float farenheit,celsius;
    cout<<"Enter the farenheit value: "<<endl;
    cin>>farenheit;
    celsius=((farenheit-32)*5)/9;

    cout<<"The celsius value: "<<celsius<<endl;
}