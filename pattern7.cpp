#include<iostream>
using namespace std;
int main()
{
    int row,col=0;
    char ch='a';

    for(row=1;row<=4;row++)
    {
        for(col=1;col<=row;col++)
        {
            char ch=('A'+row+col-2);
            cout<<ch;
        }
        cout<<endl;
    }
}