#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"Enter size of the array: ";
    int n;
    cin>>n;

    vector <int> arr(n);

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int prefix=0, maxi=INT_MIN;

    for(int i=0; i<arr.size(); i++)
    {
        prefix+=arr[i];
        maxi=max(maxi, prefix);

        if(prefix<0)
        {
            prefix=0;
        }
    }
    cout<<"Max subarray sum is "<<maxi; 

    return 0; 
}