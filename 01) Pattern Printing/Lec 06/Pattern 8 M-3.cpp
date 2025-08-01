#include<iostream>
using namespace std;

int main()
{
    for(char row=1; row<=5; row++)
    {
        char name='a'+(row-1); 
        for(int column=1; column<=5; column++)
        {
            cout<<name<<" ";
        }
        cout<<endl; 
    }
}