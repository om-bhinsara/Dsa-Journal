#include<iostream>
using namespace std; 

int main()
{
    int row;
    int col; 
    for(int row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++) 
        {
            char name='a'+(col-1);
            cout<<name<<" ";
        }
        cout<<endl; 
    }
}
           // cout<<name+(col-1)<<" "; 