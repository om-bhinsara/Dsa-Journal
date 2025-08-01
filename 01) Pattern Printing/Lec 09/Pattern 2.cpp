#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter N: "; 
    int N; 
    cin>>N;
    for(int row=1; row<=N; row++)
    {
        for(int col=1; col<=N-row; col++)
        {
            cout<<"  "; 
        }
        for(int col=1; col<=row; col++)
        {
            cout<<col<<" "; 
        }
        for(int col=row-1; col>=1; col--)
        {
            cout<<col<<" "; 
        }
        cout<<endl; 
    }
    return 0; 
}