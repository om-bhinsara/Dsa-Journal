#include<iostream>
using namespace std; 
#include<vector> 

int main()
{
    int n; 
    cout<<"Enter size of the array: ";
    cin>>n;

    vector <int> arr(n);

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int suffix=arr[arr.size()-1];
    int ans, ans1=INT_MIN;

    for(int i=arr.size()-2; i>=0; i--)
    {   
        ans=suffix-arr[i+1];  
        ans=max(ans, ans1);

        if(arr[i]>suffix)
        {
            suffix=arr[i];
        }
    }

    cout<<"Max difference between two element is "<<ans;
    return 0; 
}