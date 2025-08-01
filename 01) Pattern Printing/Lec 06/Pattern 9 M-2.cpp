#include<iostream>
using namespace std; 

int main()
{
    int row;
    char col; 
    for(int row=1; row<=5; row++)
    {
        for(col='a'; col!='f'; col++) // or col<='e' 
        {
            cout<<col<<" "; 
        }
        cout<<endl; 
    }
}