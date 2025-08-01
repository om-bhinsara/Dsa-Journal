#include<iostream> 
using namespace std;
 
int main()
{
    cout<<"Enter n: ";
    int n; 
    cin>>n; 
    int count=0;
    for(int row=n; row>=1; row--)
    {
        for(int col=1; col<=n-row; col++)
        {
            cout<<" "; 
            count++; 
        }
        for(int col=count; col<=count*2-1; col++)
        {
            cout<<"*"; 
        }
        cout<<endl; 
    }
    return 0; 
}