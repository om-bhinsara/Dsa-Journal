#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
    cout<<"Enter array size: "; 
    int n; 
    cin>>n; 
    vector <int> arr(n);

    
    // Corrected edge case: At least 3 elements needed for a triplet
    if (n < 3) 
    {
        cout << "Error: At least 3 elements are required to form a triplet." << endl;
        return 0;
    }
    
    cout<<"Enter array elements: "; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter x: ";
    int x; 
    cin>>x; 

    // sort the array 
    sort(arr.begin(),arr.end());
    int start, end; 
    for(int i=0; i<n-2; i++)
    {
        
        start=i+1, end=n-1; 
        while(start<end)
        {
        if(arr[i]+arr[start]+arr[end]==x)
        {
            cout<<"1";
            return 0; 
        }
        else if(arr[i]+arr[start]+arr[end]<x)
        {
            start++; 
        }
        else
        {
            end--; 
        }
        }
    }
    // If no solution found
    cout<<"0";
    return 0;
}