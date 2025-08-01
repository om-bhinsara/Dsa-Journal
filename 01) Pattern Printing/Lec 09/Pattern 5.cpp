#include<iostream>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter n: ";
    cin>>n; 

    // Upper butterfly
    for(int row=1; row<=n; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<"*"; 
        }
        for(int col=1; col<=2*n-2*row; col++)
        {
            cout<<" "; 
        }
        for(int col=1; col<=row; col++)
        {
            cout<<"*"; 
        }
        cout<<endl; 
    }

     // lower butterfly
    for(int row=n-1; row>=1; row--)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<"*"; 
        }
        for(int col=1; col<=2*n-2*row; col++)
        {
            cout<<" "; 
        }
         for(int col=1; col<=row; col++)
        {
            cout<<"*"; 
        }
        cout<<endl;
    }
    return 0; 
}