#include<iostream>
using namespace std;

int main()
{
    int column, row;
    for(row=1; row<=5; row++)
    { 
        char name='a';   
        for(column=1; column<=5; column++)
        {
            cout<<name<<" ";
            name++; 
        }
        cout<<endl; 
    }
}