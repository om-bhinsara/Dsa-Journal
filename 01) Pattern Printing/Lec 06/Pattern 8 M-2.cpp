#include<iostream>
using namespace std;

int main()
{
    char name='a'; 
    for(char row=1; row<=5; row++, name++)
    {
        for(int column=1; column<=5; column++)
        {
            cout<<name<<" ";
        }
        cout<<endl; 
    }
}