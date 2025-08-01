#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter N: "; 
    int N; 
    cin>>N;
    for(int row=N; row>=1; row--)
    {
        for(int col=1; col<=N-row; col++)    
        {
            cout<<"  "; 
        }
        for(int col=row*2-1; col>=1; col--)
        {
            cout<<"* "; 
        }
        cout<<endl; 
    }
    return 0; 
}