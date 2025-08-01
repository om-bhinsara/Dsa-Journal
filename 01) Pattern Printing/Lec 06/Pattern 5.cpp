#include<iostream>
using namespace std;

int main()
{
    for(int row=1; row<=5; row++)
    {
        for(int column=5; column>=1; column--)
        {
            cout<<column<<" ";
        }
        cout<<endl; 
    }
}