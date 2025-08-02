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

    vector <int> maxarr(n);

    maxarr[maxarr.size()-1]=arr[arr.size()-1];

    for(int i=arr.size()-2; i>=0; i--)
    {
        if(arr[i]>maxarr[i+1])
        {
            maxarr[i]=arr[i];
        } 
        else
        {
            maxarr[i]=maxarr[i+1];
        }
    }

    for(int i=0; i<maxarr.size(); i++)
    {
        cout<<maxarr[i]<<" ";
    }

    int ans1, ans=INT_MIN;
    for(int i=0; i<arr.size()-1; i++)
    {
        ans1=maxarr[i+1]-arr[i];
        ans=max(ans1, ans);
    }
    
    cout<<endl<<ans;
    return 0; 
}