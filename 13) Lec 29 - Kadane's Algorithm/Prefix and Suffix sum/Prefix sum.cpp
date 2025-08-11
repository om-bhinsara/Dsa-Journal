#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n; 
    cout<<"Enter size of the array: "; 
    cin>>n; 

    vector <int> arr(n);
    vector <int> pref(n);

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    pref[0]=arr[0];

    for(int i=1; i<n; i++)
    {
        pref[i]=pref[i-1]+arr[i];
    }

    cout<<"Prefix sum: ";
    for(int i=0; i<n; i++)
    {
        cout<<pref[i]<<" ";
    }
    return 0; 
}