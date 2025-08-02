#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
    int n; 
    cout<<"Enter array size: "; 
    cin>>n; 
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<" : "; 
        cin>>arr[i];
    }
    cout<<"Enter diff: ";
    int diff;
    cin>>diff; 

    // To sort array
    sort(arr.begin(), arr.end(), greater <int> ()); 
     
    for(int i=0; i<n-1; i++)
    {
        int start, end;
        start=i+1, end=arr.size();

        int x=arr[i]-diff;
        while(start<end)
        {
            int mid=start+(end-start)/2; 
            if(arr[mid]==x)
            {
                cout<<arr[i]<<" "<<arr[mid];
                return 0; 
            }
            else if(arr[mid]<x)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1; 
            }
        }
    }
    return 0; 
}