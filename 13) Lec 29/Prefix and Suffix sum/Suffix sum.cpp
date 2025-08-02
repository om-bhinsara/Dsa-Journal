#include<iostream>
#include<vector>
using namespace std; 

int main()
{
    cout<<"Enter size of the array: "; 
    int n; 
    cin>>n;

    vector <int> v(n);
    vector <int> arr(n); 

    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<" : "; 
        cin>>arr[i];
    }

    v[n-1]=arr[n-1];
    
    for(int i=n-2; i>=0; i--)
    {
        v[i]=v[i+1]+arr[i];
    }

    cout<<endl;
    cout<<"Suffix sum of array: ";  
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" "; 
    }
    return 0; 
}